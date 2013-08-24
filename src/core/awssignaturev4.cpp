#include "awssignaturev4.h"
#include "awssignaturev4_p.h"

#include <QMessageAuthenticationCode>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV4
 *
 * @brief  Implements AWS Signature Version 4.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsSignatureV4 object.
 *
 * Use instances of this object to provide Version 4 signatures for AWS services.
 */
AwsSignatureV4::AwsSignatureV4(const QCryptographicHash::Algorithm hashAlgorithm)
    : d_ptr(new AwsSignatureV4Private(hashAlgorithm, this))
{

}

void AwsSignatureV4::sign(const AwsAbstractCredentials &credentials,
                          const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data
) const {
    Q_D(const AwsSignatureV4);
    d->setAuthorizationHeader(credentials, operation, request, data, d->setDateHeader(request));
}

const QLatin1String AwsSignatureV4Private::DateFormat("yyyyMMdd");
const QLatin1String AwsSignatureV4Private::DateTimeFormat("yyyyMMddThhmmssZ");
const QLatin1Char   AwsSignatureV4Private::newLine('\n');

AwsSignatureV4Private::AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV4 * const q)
    : hashAlgorithm(hashAlgorithm), q_ptr(q)
{

}

QByteArray AwsSignatureV4Private::algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const
{
    /// @todo  Move this to another class.
    switch (algorithm) {
        case QCryptographicHash::Md4:      return "AWS4-HMAC-MD4";
        case QCryptographicHash::Md5:      return "AWS4-HMAC-MD5";
        case QCryptographicHash::Sha1:     return "AWS4-HMAC-SHA1";
        case QCryptographicHash::Sha224:   return "AWS4-HMAC-SHA224";
        case QCryptographicHash::Sha256:   return "AWS4-HMAC-SHA256";
        case QCryptographicHash::Sha384:   return "AWS4-HMAC-SHA384";
        case QCryptographicHash::Sha512:   return "AWS4-HMAC-SHA512";
        case QCryptographicHash::Sha3_224: // fall through for now.
        case QCryptographicHash::Sha3_256: // fall through for now.
        case QCryptographicHash::Sha3_384: // fall through for now.
        case QCryptographicHash::Sha3_512: // fall through for now.
        default:
            Q_ASSERT_X(false, "AwsSignatureV4Private::algorithmDesignation", "invalid algorithm");
    }
}

QByteArray AwsSignatureV4Private::authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                                           const QNetworkAccessManager::Operation operation,
                                                           QNetworkRequest &request, const QByteArray &data,
                                                           const QDateTime &timestamp) const
{
    const QByteArray algorithm = algorithmDesignation(hashAlgorithm);
    const QString region = extractRegion(request.url());
    const QString scope = credentialScope(timestamp.date(), request.url(), region);
    const QString service = QLatin1String("iam"); /// @todo Something like AwsUrl::service.

    const QByteArray stringToSign = this->stringToSign(algorithm, operation, request, data);
    const QByteArray signingKey = this->signingKey(credentials, timestamp.date(), region, service);
    const QByteArray signature = QMessageAuthenticationCode::hash(stringToSign, signingKey, QCryptographicHash::Sha1);

    return algorithm + " Credential=" + credentials.accessKeyId().toUtf8() + '/' + scope.toUtf8() +
            "SignedHeaders=" + signedHeaders(request) + "Signature=" + signature;
}

QString AwsSignatureV4Private::canonicalQuery(const QUrlQuery &query) const {
    typedef QPair<QString, QString> QStringPair;
    QList<QStringPair> list = query.queryItems(QUrl::FullyEncoded);
    qSort(list);
    QString result;
    foreach (const QStringPair &pair, list) {
        if (!result.isEmpty()) result += QLatin1Char('&');
        result += QString::fromUtf8(QUrl::toPercentEncoding(pair.first)) + QLatin1Char('=') +
                  QString::fromUtf8(QUrl::toPercentEncoding(pair.second));
    }
    return result;
}

QString AwsSignatureV4Private::canonicalRequest(
        const QNetworkAccessManager::Operation operation,
        const QNetworkRequest &request) const
{
    return httpMethod(operation) + QLatin1Char('\n') +
           canonicalUri(request.url()) + QLatin1Char('\n') +
           canonicalQuery(QUrlQuery(request.url()))  + QLatin1Char('\n') +
           canonicalHeaders(request) + QLatin1Char('\n') +
            QCryptographicHash::hash(data, hashAlgorithm).toHex();
}

QString AwsSignatureV4Private::canonicalUri(const QUrl &url) const
{
    QString path = url.path(QUrl::FullyEncoded);
    if (path.isEmpty()) {
        path = QLatin1Char('/');
    }
    return path;
}

QString AwsSignatureV4Private::credentialScope(const QDate &date, const QUrl &url, const QString &region) const
{
    const QLatin1Char separator('/');
    return date.toString(DateFormat) + separator + region + separator + service + QLatin1String("aws_request");
}

QString AwsSignatureV4Private::extractRegion(const QUrl &url) const
{
    /// @todo  Repalce this with something like AwsRegion::fromUrl();
    return "us-east-1";
}

QString AwsSignatureV4Private::httpMethod(const QNetworkAccessManager::Operation operation) const {
    switch (operation) {
        case QNetworkAccessManager::DeleteOperation: return QLatin1String("DELETE");
        case QNetworkAccessManager::HeadOperation:   return QLatin1String("HEAD");
        case QNetworkAccessManager::GetOperation:    return QLatin1String("GET");
        case QNetworkAccessManager::PostOperation:   return QLatin1String("POST");
        case QNetworkAccessManager::PutOperation:    return QLatin1String("PUT");
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            Q_ASSERT_X(false, "AwsSignatureV4Private::toString", "invalid operation");
    }
    return QString();
}

void AwsSignatureV4Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &data,
                                                   const QDateTime &timestamp)
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, data, timestamp));
}

QDateTime AwsSignatureV4Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) {
    Q_ASSERT(!request.hasRawHeader("x-amz-date"));
    request.setRawHeader("x-amz-date", dateTime.toString(DateTimeFormat));
    return dateTime;
}

QString AwsSignatureV4Private::signingKey(const AwsAbstractCredentials &credentials,
                                          const QDate &date,
                                          const QString &region,
                                          const QString &service
) const {
    return QMessageAuthenticationCode::hash("aws4_request",
           QMessageAuthenticationCode::hash("service (eg iam)",
           QMessageAuthenticationCode::hash("xx-region-1",
           QMessageAuthenticationCode::hash(date, credentials.secretKey().toUtf8()
    ))));
}


QByteArray AwsSignatureV4Private::stringToSign(const QString &algorithmDesignation,
                                               const QDateTime &requestDate,
                                               const QNetworkRequest &credentialScope,
                                               const QByteArray &canonicalRequest)
{
    return algorithmDesignation + newLine +
           requestDate.toString(DateFormat)
           date + QLatin1Char('\n') + // get date from headers.
           credentialScope + QLatin1Char('\n') +
            hash(canonicalRequest()).asHex();
}

QTAWS_END_NAMESPACE
