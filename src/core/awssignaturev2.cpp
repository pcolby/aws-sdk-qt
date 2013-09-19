#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

QTAWS_BEGIN_NAMESPACE

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
        : d_ptr(new AwsSignatureV2Private(this))
{
    Q_ASSERT((hashAlgorithm == QCryptographicHash::Sha1) || (hashAlgorithm == QCryptographicHash::Sha256));
    Q_D(AwsSignatureV2);
    d->hashAlgorithm = hashAlgorithm;
}

/**
 * @brief AwsSignatureV2 destructor.
 */
AwsSignatureV2::~AwsSignatureV2()
{
    delete d_ptr;
}

void AwsSignatureV2::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(data) // Not included in V2 signatures.

    // Calculate the signature.
    Q_D(const AwsSignatureV2);
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
 * @param  q  Pointer to this object's public AwsSignatureV2 instance.
 */
AwsSignatureV2Private::AwsSignatureV2Private(AwsSignatureV2 * const q) : q_ptr(q)
{

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
    Q_Q(const AwsSignatureV2);
    return q->httpMethod(operation).toUtf8() + '\n' +
           url.host().toUtf8() + '\n' +
           q->canonicalPath(url).toUtf8() + '\n' +
           q->canonicalQuery(QUrlQuery(url));
}

QTAWS_END_NAMESPACE
