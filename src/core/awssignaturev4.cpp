#include "awssignaturev4.h"
#include "awssignaturev4_p.h"

#include "awsendpoint.h"

#include <QDebug>
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

/**
 * @brief AwsSignatureV4 destructor.
 */
AwsSignatureV4::~AwsSignatureV4()
{
    delete d_ptr;
}

void AwsSignatureV4::sign(const AwsAbstractCredentials &credentials,
                          const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_D(const AwsSignatureV4);
    d->setAuthorizationHeader(credentials, operation, request, data, d->setDateHeader(request));
}

/**
 * @class  AwsSignatureV4Private
 *
 * @brief  Private implementation for AwsSignatureV4.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

const QLatin1String AwsSignatureV4Private::DateFormat("yyyyMMdd");
const QLatin1String AwsSignatureV4Private::DateTimeFormat("yyyyMMddThhmmssZ");

AwsSignatureV4Private::AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV4 * const q)
    : hashAlgorithm(hashAlgorithm), q_ptr(q)
{

}

QByteArray AwsSignatureV4Private::algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const
{
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
            return "invalid-algorithm";
    }
}

QByteArray AwsSignatureV4Private::authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                                           const QNetworkAccessManager::Operation operation,
                                                           QNetworkRequest &request, const QByteArray &payload,
                                                           const QDateTime &timestamp) const
{
    const QByteArray algorithmDesignation = this->algorithmDesignation(hashAlgorithm);
    const AwsEndpoint endpoint(request.url().host());

    const QByteArray credentialScope = this->credentialScope(timestamp.date(), endpoint.regionName(), endpoint.serviceName());
    QByteArray signedHeaders;
    const QByteArray canonicalRequest = this->canonicalRequest(operation, request, payload, &signedHeaders);

    const QByteArray stringToSign = this->stringToSign(algorithmDesignation, timestamp, credentialScope, canonicalRequest);
    const QByteArray signingKey = this->signingKey(credentials, timestamp.date(), endpoint.regionName(), endpoint.serviceName());
    const QByteArray signature = QMessageAuthenticationCode::hash(stringToSign, signingKey, hashAlgorithm);

    return algorithmDesignation + " Credential=" + credentials.accessKeyId().toUtf8() + '/' + credentialScope +
            ", SignedHeaders=" + signedHeaders + ", Signature=" + signature.toHex();
}

QByteArray AwsSignatureV4Private::canonicalHeader(const QByteArray &headerName, const QByteArray &headerValue) const
{
    QByteArray header = headerName.toLower() + ':';
    const QByteArray trimmedHeaderValue = headerValue.trimmed();
    bool isInQuotes = false;
    char previousChar = '\0';
    for (int index = 0; index < trimmedHeaderValue.size(); ++index) {
        char thisChar = trimmedHeaderValue.at(index);
        header += thisChar;
        if (isInQuotes) {
            if ((thisChar == '"') && (previousChar != '\\'))
                isInQuotes = false;
        } else {
            if ((thisChar == '"') && (previousChar != '\\')) {
                isInQuotes = true;
            } else if (isspace(thisChar)) {
                while ((index < trimmedHeaderValue.size()-1) &&
                       (isspace(trimmedHeaderValue.at(index+1))))
                    ++index;
            }
        }
        previousChar = thisChar;
    }
    return header;
}

QByteArray AwsSignatureV4Private::canonicalHeaders(const QNetworkRequest &request, QByteArray * const signedHeaders) const
{
    Q_CHECK_PTR(signedHeaders);
    signedHeaders->clear();

    /* Note, Amazon says we should combine duplicate headers with comma separators...
     * conveniently for us, QNetworkRequest requires that to have been done already.
     * See note in QNetworkRequest::setRawHeader.
     */

    // Convert the raw headers list to a map to sort on (lowercased) header names only.
    QMap<QByteArray,QByteArray> headers;
    foreach (const QByteArray &rawHeader, request.rawHeaderList()) {
        headers.insert(rawHeader.toLower(), request.rawHeader(rawHeader));
    }
    // The "host" header is not included in QNetworkRequest::rawHeaderList, but will be sent by Qt.
    headers.insert("host", request.url().host().toUtf8());

    // Convert the headers map to a canonical string, keeping track of which headers we've included too.
    QByteArray canonicalHeaders;
    for (QMap<QByteArray,QByteArray>::const_iterator iter = headers.constBegin(); iter != headers.constEnd(); ++iter) {
        canonicalHeaders += canonicalHeader(iter.key(), iter.value()) + '\n';
        if (!signedHeaders->isEmpty()) *signedHeaders += ';';
        *signedHeaders += iter.key();
    }
    return canonicalHeaders;
}

QByteArray AwsSignatureV4Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QNetworkRequest &request, const QByteArray &payload,
                                                   QByteArray * const signedHeaders) const
{
    Q_Q(const AwsSignatureV4);
    return q->httpMethod(operation).toUtf8() + '\n' +
           q->canonicalPath(request.url()).toUtf8() + '\n' +
           q->canonicalQuery(QUrlQuery(request.url()))  + '\n' +
           canonicalHeaders(request, signedHeaders) + '\n' +
           *signedHeaders + '\n' +
           QCryptographicHash::hash(payload, hashAlgorithm).toHex();
}

QByteArray AwsSignatureV4Private::credentialScope(const QDate &date, const QString &region, const QString &service) const
{
    return date.toString(DateFormat).toUtf8() + '/' + region.toUtf8() + '/' + service.toUtf8() + "/aws4_request";
}

void AwsSignatureV4Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &payload,
                                                   const QDateTime &timestamp) const
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, payload, timestamp));
}

QDateTime AwsSignatureV4Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) const
{
    Q_ASSERT(!request.hasRawHeader("x-amz-date"));
    request.setRawHeader("x-amz-date", dateTime.toString(DateTimeFormat).toUtf8());
    return dateTime;
}

QByteArray AwsSignatureV4Private::signingKey(const AwsAbstractCredentials &credentials, const QDate &date,
                                             const QString &region, const QString &service) const
{
    return QMessageAuthenticationCode::hash("aws4_request",
           QMessageAuthenticationCode::hash(service.toUtf8(),
           QMessageAuthenticationCode::hash(region.toUtf8(),
           QMessageAuthenticationCode::hash(date.toString(DateFormat).toUtf8(), "AWS4"+credentials.secretKey().toUtf8(),
           hashAlgorithm), hashAlgorithm), hashAlgorithm), hashAlgorithm);
}

QByteArray AwsSignatureV4Private::stringToSign(const QByteArray &algorithmDesignation, const QDateTime &requestDate,
                                               const QByteArray &credentialScope, const QByteArray &canonicalRequest) const
{
    return algorithmDesignation + '\n' +
           requestDate.toString(DateTimeFormat).toUtf8() + '\n' +
           credentialScope + '\n' +
           QCryptographicHash::hash(canonicalRequest, hashAlgorithm).toHex();
}

QTAWS_END_NAMESPACE
