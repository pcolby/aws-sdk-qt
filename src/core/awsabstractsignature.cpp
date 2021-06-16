/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractsignature.h"
#include "awsabstractsignature_p.h"

#include <QDebug>
#include <QDir>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAbstractSignature
 * \brief The AwsAbstractSignature class provides an interface for generating AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * \internal
 *
 * Constructs an AwsAbstractSignature object.
 */
AwsAbstractSignature::AwsAbstractSignature() : d_ptr(new AwsAbstractSignaturePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs an AwsAbstractSignature object with private implementation \a d.
 */
AwsAbstractSignature::AwsAbstractSignature(AwsAbstractSignaturePrivate * const d) : d_ptr(d)
{

}

/*!
 * Destroys the AWS signature.
 */
AwsAbstractSignature::~AwsAbstractSignature() {
    delete d_ptr;
}

/*!
 * \fn void AwsAbstractSignature::sign(const AwsAbstractCredentials &credentials,
 *                                     const QNetworkAccessManager::Operation operation,
 *                                     QNetworkRequest &request, const QByteArray &data) const
 *
 * Sings the AWS network \a request using the supplied \a credentials.
 *
 * The network \a operation, and optional \c {POST/PUT} \a data may be used in
 * the signing process, according to the implemented AWS signature version.
 *
 * \note \a credentials must be valid before calling this function.  So, for
 * example, if \a credentials has expired, and is refreshable, it is the
 * caller's responsibility to refresh the credentials before calling this
 * function.
 *
 * The signature if added to the \a request object itself (ie \a request will
 * be modified by the call).
 */

/*!
 * \class QtAws::Core::AwsAbstractSignaturePrivate
 * \brief The AwsAbstractSignaturePrivate class provides private implementation for the AwsAbstractSignature class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAbstractSignaturePrivate object with public implementation \a q.
 */
AwsAbstractSignaturePrivate::AwsAbstractSignaturePrivate(AwsAbstractSignature * const q) : q_ptr(q)
{

}

/*!
 * Destroys the AWS signatures's private object.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractSignaturePrivate::~AwsAbstractSignaturePrivate()
{

}

/*!
 * Returns an AWS Signature canonical path for \a url.
 *
 * This function simply returns the fully-URL-encoded path.  However, if the path
 * is empty, then a single \c / is returned, as is required by Amazon for both V2
 * and V4 signatures (and presumably other versions too).
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 */
QString AwsAbstractSignaturePrivate::canonicalPath(const QUrl &url) const
{
    QString path = QDir::cleanPath(url.path(QUrl::FullyEncoded));
    if (path.isEmpty()) {
        return QString::fromLatin1("/");
    }

    // If the path begins with "//", remove one of the redundant slashes.
    // Note, this is only needed on Windows, because there QDir::speparator is
    // '\', and internally QDir::cleanPath swaps all separators to '/', before
    // calling qt_normalizePathSegments with allowUncPaths set to true, so that
    // '//' is preserved to allow of Windows UNC paths beginning with '\\'.
    // This should probably be reported as a bug in Qt::cleanPath("//...").
#ifdef Q_OS_WIN
    if (path.startsWith(QLatin1String("//"))) {
        path.remove(0, 1); // Remove the first of two forward slashes.
    }
#endif

    // Restore the trailing '/' if QDir::cleanPath (rightly) removed one.
    if ((url.path().endsWith(QLatin1Char('/'))) && (!path.endsWith(QLatin1Char('/')))) {
        path += QLatin1Char('/');
    }

    return path;
}

/*!
 * Returns an AWS Signature canonical query string for \a query.
 *
 * This function returns an HTTP query string in Amazon's canonical form.  That is,
 * all query parameters are sorted by keys (\b {but not keys-then-values}), then
 * joined with \c & separators, in \c {key=value} pairs with both keys and values
 * being URL percent encoded.
 *
 * \note   The canonical form produced by this function is used by Amazon's later
 *         signature formats (versions 2, 3 and 4), but not their earlier formats
 *         (versions 0 and 1).
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 */
QByteArray AwsAbstractSignaturePrivate::canonicalQuery(const QUrlQuery &query) const
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

/*!
 * Returns the AWS Signature request method string for \a operation.
 *
 * This function simply converts QNetworkAccessManager operations (enum values)
 * to strings appropriate to use in AWS signatures.
 *
 * If \a operation is not a valid AWS network operation a null string will be
 * returned.
 */
QString AwsAbstractSignaturePrivate::httpMethod(const QNetworkAccessManager::Operation operation) const
{
    switch (operation) {
        case QNetworkAccessManager::DeleteOperation: return QLatin1String("DELETE");
        case QNetworkAccessManager::HeadOperation:   return QLatin1String("HEAD");
        case QNetworkAccessManager::GetOperation:    return QLatin1String("GET");
        case QNetworkAccessManager::PostOperation:   return QLatin1String("POST");
        case QNetworkAccessManager::PutOperation:    return QLatin1String("PUT");
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
    return QString(); // Operation was invalid / unsupported.
}

/*!
 * Sets the pair \a key = \a value in \a query, checking for existing values first.
 *
 * This function is a light wrapper around QUrlQuery::addQueryItem() that first
 * checks for existing values.  Existing values will not be overwritten, instead
 * if existing values are found, this function will simply check if the exsting
 * value matches the desired \a value, and if not, will return \c false and
 * optionally (if \a warnOnNonIdenticalDuplicate is \c true) issue a qWarning().
 *
 * Typically, when setting something that must be a specific value, such as an
 * access key ID, \a warnOnNonIdenticalDuplicate would be \c true. However, when
 * setting query items as a fall-back default, such as a current timestamp,
 * \a warnOnNonIdenticalDuplicate would typically be set to \c false.
 *
 * Returns \c true if the query item was set successfully or was already set to
 * the requested value previously; \c false otherwise.
 */
bool AwsAbstractSignaturePrivate::setQueryItem(QUrlQuery &query, const QString &key, const QString &value,
                                               const bool warnOnNonIdenticalDuplicate) const
{
    if (query.hasQueryItem(key)) {
        const QString existingValue = query.queryItemValue(key, QUrl::FullyEncoded);
        const bool existingQueryItemIsIdentical = (existingValue == value);
        if ((warnOnNonIdenticalDuplicate) && (!existingQueryItemIsIdentical)) {
            qWarning() << "AwsAbstractSignature::setQueryItem Not overwriting existing value for key"
                       << key << ':' << existingValue;
        }
        return existingQueryItemIsIdentical;
    }
    query.addQueryItem(key, value);
    return true;
}

/*!
 * \fn int AwsAbstractSignature::version() const
 *
 * Returns the AWS Signature version implemented by this class.
 *
 * Derived classes must implement this function to report the version of
 * the AWS Signature implemented by the class.
 */

} // namespace Core
} // namespace QtAws
