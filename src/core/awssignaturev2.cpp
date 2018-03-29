/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

namespace QtAws {
namespace Client {

/**
 * @class  AwsSignatureV2
 *
 * @brief  Implements AWS Signature Version 2.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */

/**
 * @brief  Constructs a new AwsSignatureV2 object.
 *
 * Use instances of this object to provide Version 2 signatures for AWS services.
 *
 * @param  hashAlgorithm  Hash algorithm for signatures.  Must be either QCryptographicHash::Sha1
 *                        or QCryptographicHash::Sha256 (default, recommended).
 */
AwsSignatureV2::AwsSignatureV2(const QCryptographicHash::Algorithm hashAlgorithm)
        : AwsAbstractSignature(new AwsSignatureV2Private(hashAlgorithm, this))
{
    Q_ASSERT((hashAlgorithm == QCryptographicHash::Sha1) || (hashAlgorithm == QCryptographicHash::Sha256));
}

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

int AwsSignatureV2::version() const
{
    return 2;
}

/**
 * @internal
 *
 * @class  AwsSignatureV2Private
 *
 * @brief  Private implementation for AwsSignatureV2.
 *
 * @warning  This is an internal private implementation class, and as such external should
 *           code should **not** depend directly on anything contained within this class.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsSignatureV2Private object.
 *
 * @param  algorithm  Hash algorithm for signatures.
 * @param  q          Pointer to this object's public AwsSignatureV2 instance.
 */
AwsSignatureV2Private::AwsSignatureV2Private(
        const QCryptographicHash::Algorithm algorithm, AwsSignatureV2 * const q)
    : AwsAbstractSignaturePrivate(q), hashAlgorithm(algorithm)
{

}

/**
 * @internal
 *
 * @brief  Add AWS Signature Version 2 adornments to an AWS request.
 *
 * In addition to service-specific request parameters, Amazon requires that version
 * 2 signatures contain a number of common query parameters.  This functions adds
 * those query parameters to \a request if they're not already present.
 *
 * The query parameters added by this function, as required by Amazon, are:
 *   * `AWSAccessKeyId` - set to \a credentials.accessKeyId().
 *   * `SignatureMethod` - set to `HMAC-SHA1` or `HMAC-SHA256`.
 *   * `SignatureVersion` - set to `2`.
 *   * `Timestamp` - set to a current UTC timestamp in an ISO 8601 format, like
 *                 `2013-10-30T12:34:56Z`.
 *
 * @param  request      Request to adorn.
 * @param  credentials  Credentials to use when adorning \a request.
 *
 * @see    signatureMethod
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
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

/**
 * @internal
 *
 * @brief  Create an AWS V2 Signature canonical request.
 *
 * This function creates a canonical representation of an AWS request as defined by
 * Amazon's V2 signature specification.
 *
 * For example, for the following HTTP `GET` request:
 *
 *     https://elasticmapreduce.amazonaws.com?Action=DescribeJobFlows&Version=2009-03-31&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=2SignatureMethod=HmacSHA256Timestamp=2011-10-03T15%3A19%3A30
 *
 * this function will return the following canonical form:
 *
 *     GET
 *     elasticmapreduce.amazonaws.com
 *     /
 *     AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&Action=DescribeJobFlows&SignatureMethod=HmacSHA256&SignatureVersion=2&Timestamp=2011-10-03T15%3A19%3A30&Version=2009-03-31
 *
 * @note  All URL components are encoded to UTF-8, as required by Amazon.
 *
 * @param  operation  The HTTP method being requested.
 * @param  url        The URL being request.
 *
 * @return An AWS V2 Signature canonical request.
 *
 * @see http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */
QByteArray AwsSignatureV2Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QUrl &url) const
{
    return httpMethod(operation).toUtf8() + '\n' +
           url.host().toUtf8() + '\n' +
           canonicalPath(url).toUtf8() + '\n' +
           canonicalQuery(QUrlQuery(url));
}

/**
 * @brief  Create an AWS V2 Signature method designation.
 *
 * This function returns a signature method designation, as defined by Amazon, for
 * use with V2 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha256`, this function will
 * return `HmacSHA256`.
 *
 * @note   Amazon only supports two algorithms for V2 signatures - SHA1 and SHA256.
 *
 * @param  algorithm  The hash algorithm to get the canonical designation for.
 *
 * @return An AWS V2 Signature method designation.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
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

} // namespace Client
} // namespace QtAws
