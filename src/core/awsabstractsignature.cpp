/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractsignature.h"

#include <QDir>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractSignature
 *
 * @brief  Interface class for providing AWS signatures.
 */

/**
 * @brief  AwsAbstractSignature destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractSignature::~AwsAbstractSignature() { }

/**
 * @fn     void AwsAbstractSignature::sign() const
 *
 * @brief  Sign an AWS request.
 *
 * Note, \a credentials must be valid before calling this function.  So, for
 * example, if \a credentials has expired, and is refreshable, it is the
 * caller's responsibility to refresh the credentials before calling this
 * function.
 *
 * @param  operation     The network operation to sign \a request for.
 * @param  request       The network request to be signed.
 * @param  credentials   The credentials to use for signing.
 * @param  data          Optional POST / PUT data to sign \a request for.
 */

/**
 * @brief  Create an AWS Signature canonical path.
 *
 * This function simply returns the fully-URL-encoded path.  However, if the path
 * is empty, then a single '/' is returned, as is required by Amazon for both V2
 * and V4 signatures (and presumably other versions too).
 *
 * @param  url  URL from which to extract the path.
 *
 * @return An AWS Signature canonical path.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 *
 * @todo   Move this to an AwsAbstractSignaturePrivate class?
 */
QString AwsAbstractSignature::canonicalPath(const QUrl &url) const
{
    QString path = QDir::cleanPath(QLatin1Char('/') + url.path(QUrl::FullyEncoded));

    // Restore the trailing '/' if QDir::cleanPath (rightly) removed one.
    if ((url.path().endsWith(QLatin1Char('/'))) && (!path.endsWith(QLatin1Char('/')))) {
        path += QLatin1Char('/');
    }

    return path;
}

/**
 * @brief  Create an AWS Signature canonical query.
 *
 * This function retuns an HTTP query string in Amazon's canonical form.  That is,
 * all query parameters are sorted by keys (**but not keys-then-values**), then
 * joined with `&` separators, in `key=value` pairs with both keys and values being
 * URL percent encoded.
 *
 * @param  query  Query to encode the HTTP query string from.
 *
 * @return An AWS Signature canonical path.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 *
 * @todo   Move this to an AwsAbstractSignaturePrivate class?
 */
QByteArray AwsAbstractSignature::canonicalQuery(const QUrlQuery &query) const
{
    typedef QPair<QString, QString> QStringPair;
    QList<QStringPair> list = query.queryItems(QUrl::FullyDecoded);
    qSort(list);
    QString result;
    foreach (const QStringPair &pair, list) {
        if (!result.isEmpty()) result += QLatin1Char('&');
        result += QString::fromUtf8(QUrl::toPercentEncoding(pair.first)) + QLatin1Char('=') +
                  QString::fromUtf8(QUrl::toPercentEncoding(pair.second));
    }
    return result.toUtf8();
}

/**
 * @brief  Create an AWS Signature request method string.
 *
 * This function simply converts QNetworkAccessManager operations (enum values)
 * to strings appropriate to use in AWS signatures.
 *
 * @param  operation  The network operation to convert to string.
 *
 * @return A string representation of \p operation, or an empty string if the
 *         operation is not recognised or otherwise unsupported.
 *
 * @todo   Move this to an AwsAbstractSignaturePrivate class?
 */
QString AwsAbstractSignature::httpMethod(const QNetworkAccessManager::Operation operation) const {
    switch (operation) {
        case QNetworkAccessManager::DeleteOperation: return QLatin1String("DELETE");
        case QNetworkAccessManager::HeadOperation:   return QLatin1String("HEAD");
        case QNetworkAccessManager::GetOperation:    return QLatin1String("GET");
        case QNetworkAccessManager::PostOperation:   return QLatin1String("POST");
        case QNetworkAccessManager::PutOperation:    return QLatin1String("PUT");
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, "AwsSignatureV4Private::toString", "invalid operation");
    }
    return QString(); // Operation was invalid / unsupported.
}

QTAWS_END_NAMESPACE
