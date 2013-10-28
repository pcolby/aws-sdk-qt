/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awssignaturev1.h"
#include "awssignaturev1_p.h"

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0) && QT_VERSION < QT_VERSION_CHECK(5, 1, 0)
#include "qmessageauthenticationcode.h"
#else
#include <QMessageAuthenticationCode>
#endif

#include <QNetworkRequest>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV1
 *
 * @brief  Implements AWS Signature Version 1 \ref deprecated "(deprecated by Amazon)"
 *
 * @deprecated  Amazon has officially deprecated signature Version 1 in favor of later,
 *              more secure signatures, such as AwsSignatureV2 and AwsSignatureV4.
 *
 * As version 1 signatures are rightly regarded as *insecure*, this class will refuse to sign
 * requests that use insecure transports such as HTTP instead of HTTPS. However, insecure
 * signatures can be enabled (why would you want to?) by defining `ALLOW_INSECURE_V1_SIGNATURES`
 * when compiling this library.
 *
 * @see  http://docs.aws.amazon.com/AWSSecurityCredentials/1.0/AboutAWSCredentials.html
 * @see  http://lmgtfy.com/?q=aws+signature+version+1+is+insecure
 */

/**
 * @brief  Constructs a new AwsSignatureV1 object.
 *
 * Use instances of this object to provide Version 1 signatures for AWS services.
 *
 * @param  hashAlgorithm  Hash algorithm for signatures.  Must be either QCryptographicHash::Sha1
 *                        or QCryptographicHash::Sha256 (default, recommended).
 */
AwsSignatureV1::AwsSignatureV1(const QCryptographicHash::Algorithm hashAlgorithm)
        : d_ptr(new AwsSignatureV1Private(this))
{
    Q_ASSERT((hashAlgorithm == QCryptographicHash::Sha1) || (hashAlgorithm == QCryptographicHash::Sha256));
    Q_D(AwsSignatureV1);
    d->hashAlgorithm = hashAlgorithm;
}

/**
 * @brief AwsSignatureV1 destructor.
 */
AwsSignatureV1::~AwsSignatureV1()
{
    delete d_ptr;
}

void AwsSignatureV1::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(data) // Not included in V1 signatures.

    // Calculate the signature.
    Q_D(const AwsSignatureV1);
    const QByteArray stringToSign = d->canonicalRequest(operation, request.url());
    const QString signature = QString::fromUtf8(QUrl::toPercentEncoding(QString::fromUtf8(
        QMessageAuthenticationCode::hash(stringToSign, credentials.secretKey().toUtf8(),
                                         d->hashAlgorithm).toBase64())));

    // Append the signature to the request.
    QUrl url = request.url();
    url.setQuery(url.query() + QLatin1String("&Signature=") + signature);
    request.setUrl(url);
}

/**
 * @internal
 *
 * @class  AwsSignatureV1Private
 *
 * @brief  Private implementation for AwsSignatureV1.
 *
 * @warning  This is an internal private implementation class, and as such external should
 *           code should **not** depend directly on anything contained within this class.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsSignatureV1Private object.
 *
 * @param  q  Pointer to this object's public AwsSignatureV1 instance.
 */
AwsSignatureV1Private::AwsSignatureV1Private(AwsSignatureV1 * const q) : q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  Create an AWS V1 Signature canonical request.
 *
 * This function creates a canonical representation of an AWS request as defined by
 * Amazon's V1 signature specification.
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
 * @return An AWS V1 Signature canonical request.
 *
 * @see http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
 */
QByteArray AwsSignatureV1Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QUrl &url) const
{
    Q_Q(const AwsSignatureV1);
    return q->httpMethod(operation).toUtf8() + '\n' +
           url.host().toUtf8() + '\n' +
           q->canonicalPath(url).toUtf8() + '\n' +
           q->canonicalQuery(QUrlQuery(url));
}

QTAWS_END_NAMESPACE
