/*
    Copyright 2013-2020 Paul Colby

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

#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsSignatureV2
 * \brief The AwsSignatureV2 class provides V2 AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */

/*!
 * Constructs an AwsSignatureV2 object, with cryptographic hash algorithm \a hashAlgorithm.
 *
 * Use an instance of this object to provide Version 2 signatures for AWS services.
 *
 * \note \a hashAlgorithm must be either QCryptographicHash::Sha1 or QCryptographicHash::Sha256.
 */
AwsSignatureV2::AwsSignatureV2(const QCryptographicHash::Algorithm hashAlgorithm)
        : AwsAbstractSignature(new AwsSignatureV2Private(hashAlgorithm, this))
{
    Q_ASSERT((hashAlgorithm == QCryptographicHash::Sha1) || (hashAlgorithm == QCryptographicHash::Sha256));
}

/*!
 * \reimp
 */
void AwsSignatureV2::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(data) // Not included in V2 signatures.
    Q_D(const AwsSignatureV2);

    // Set the AccessKeyId, SignatureMethod, SignatureVersion and Timestamp query items, if not already.
    d->adornRequest(request, credentials);

    // Calculate the signature.
    const QByteArray stringToSign = d->canonicalRequest(operation, request.url());
    const QString signature = QString::fromUtf8(QUrl::toPercentEncoding(QString::fromUtf8(
        QMessageAuthenticationCode::hash(stringToSign, credentials.secretKey().toUtf8(),
                                         d->hashAlgorithm).toBase64())));

    // Append the signature to the request.
    QUrl url = request.url();
    url.setQuery(url.query() + QLatin1String("&Signature=") + signature);
    request.setUrl(url);
}

/*!
 * \reimp
 * Returns \c 2.
 */
int AwsSignatureV2::version() const
{
    return 2;
}

/*!
 * \class QtAws::Core::AwsSignatureV2Private
 * \brief The AwsSignatureV2Private class provides private implementation for the AwsSignatureV2 class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsSignatureV2Private object with hash \a algorithm, and public implementation \a q.
 */
AwsSignatureV2Private::AwsSignatureV2Private(const QCryptographicHash::Algorithm algorithm, AwsSignatureV2 * const q)
    : AwsAbstractSignaturePrivate(q), hashAlgorithm(algorithm)
{

}

/*!
 * Adds AWS Signature Version 2 adornments to a AWS \a request.
 *
 * In addition to service-specific request parameters, Amazon requires that version
 * 2 signatures contain a number of common query parameters.  This functions adds
 * those query parameters to \a request if they're not already present.
 *
 * The query parameters added by this function, as required by Amazon, are:
 * \table
 * \header \li Parameter Name      \li Parameter Value
 * \row    \li \c AWSAccessKeyId   \li The AWS Access Key ID from \a credentials.
 * \row    \li \c SignatureMethod  \li The value returned by signatureMethod();
 *                                     ie \c "HMAC-SHA1" or \c "HMAC-SHA256"
 * \row    \li \c SignatureVersion \li \c "2".
 * \row    \li \c Timestamp        \li Current UTC timestamp in ISO 8601 format,
 *                                     eg \c {2013-10-30T12:34:56Z}.
 * \endtable
 */
void AwsSignatureV2Private::adornRequest(QNetworkRequest &request,
                                         const AwsAbstractCredentials &credentials) const
{
    // Set / add the necessary query items.
    QUrl url = request.url();
    QUrlQuery query(url);
    setQueryItem(query, QLatin1String("AWSAccessKeyId"), credentials.accessKeyId());
    setQueryItem(query, QLatin1String("SignatureVersion"), QLatin1String("2"));
    setQueryItem(query, QLatin1String("SignatureMethod"), QString::fromUtf8(signatureMethod(hashAlgorithm)));
    setQueryItem(query, QLatin1String("Timestamp"),
                    QString::fromUtf8(QUrl::toPercentEncoding(
                        QDateTime::currentDateTimeUtc().toString(QLatin1String("yyyy-MM-ddThh:mm:ssZ"))
                    )),
                    false); // Don't warn if its already set to something else.

    // If we've touched the query items (likely), then update the request.
    if (query != QUrlQuery(url)) {
        qDebug() << url;
        url.setQuery(query);
        qDebug() << url;
        request.setUrl(url);
    }
}

/*!
 * Returns the AWS Signature version 2 canonical query string for \a operation
 * on \a url.
 *
 * This function creates a canonical representation of an AWS request as defined by
 * Amazon's V2 signature specification.
 *
 * For example, for the following HTTP `GET` request:
 * \code
 *     https://elasticmapreduce.amazonaws.com?Action=DescribeJobFlows&Version=2009-03-31&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=2SignatureMethod=HmacSHA256Timestamp=2011-10-03T15%3A19%3A30
 * \endcode
 *
 * this function will return the following canonical form:
 * \code
 *     GET
 *     elasticmapreduce.amazonaws.com
 *     /
 *     AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&Action=DescribeJobFlows&SignatureMethod=HmacSHA256&SignatureVersion=2&Timestamp=2011-10-03T15%3A19%3A30&Version=2009-03-31
 * \endcode
 *
 * \note All URL components are encoded to UTF-8, as required by Amazon.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */
QByteArray AwsSignatureV2Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QUrl &url) const
{
    return httpMethod(operation).toUtf8() + '\n' +
           url.host().toUtf8() + '\n' +
           canonicalPath(url).toUtf8() + '\n' +
           canonicalQuery(QUrlQuery(url));
}

/*!
 * Returns an AWS V2 Signature method designation for \a algorithm.
 *
 * This function returns a signature method designation, as defined by Amazon, for
 * use with V2 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha256`, this function will
 * return `HmacSHA256`.
 *
 * \note Amazon only supports two algorithms for V2 signatures - SHA1 and SHA256.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */
QByteArray AwsSignatureV2Private::signatureMethod(const QCryptographicHash::Algorithm algorithm) const
{
    switch (algorithm) {
        case QCryptographicHash::Sha1:     return "HmacSHA1";
        case QCryptographicHash::Sha256:   return "HmacSHA256";
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid algorithm");
            return "invalid-algorithm";
    }
}

} // namespace Core
} // namespace QtAws
