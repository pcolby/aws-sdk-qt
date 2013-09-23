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

#include "awssignaturev4.h"
#include "awssignaturev4_p.h"

#include "awsendpoint.h"

#include <QDebug>

#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0) && QT_VERSION < QT_VERSION_CHECK(5, 1, 0)
#include "qmessageauthenticationcode.h"
#else
#include <QMessageAuthenticationCode>
#endif

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
 *
 * @param  hashAlgorithm  The algorithm to use during various stages of signing.
 *
 * @note  The AWS Signature Version 4 documentation is not explcit about which hash
 *        algorithms are supported by Amazon, however all documented examples use
 *        SHA256.
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
 * @internal
 *
 * @class  AwsSignatureV4Private
 *
 * @brief  Private implementation for AwsSignatureV4.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/// Format V4 signatures use to represent dates in canonical form.
const QLatin1String AwsSignatureV4Private::DateFormat("yyyyMMdd");

/// Format V4 signatures use to represent timestamps in canonical form.
const QLatin1String AwsSignatureV4Private::DateTimeFormat("yyyyMMddThhmmssZ");

/**
 * @brief  Constructs a new AwsSignatureV4Private object.
 *
 * @param  hashAlgorithm  The algorithm to use during various stages of signing.
 * @param  q              Pointer to this object's public AwsSignatureV4 instance.
 */
AwsSignatureV4Private::AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV4 * const q)
    : hashAlgorithm(hashAlgorithm), q_ptr(q)
{

}

/**
 * @brief  Create an AWS V4 Signature algorithm designation.
 *
 * This function returns an algorithm designation, as defined by Amazon, for use with
 * V4 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha3_256`, this function will
 * return `AWS4-HMAC-SHA256`.
 *
 * @param  algorithm  The hash algorithm to get the canonical designation for.
 *
 * @return  An AWS V4 Signature algorithm designation.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
 */
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

/**
 * @brief  Create an AWS V4 Signature authorization header value.
 *
 * This function builds an V4 signature, and returns it to the caller.  The returned
 * header value is then suitable for adding as a `Authorization` header in the HTTP
 * request, to be accepted by Amazon.
 *
 * @param  credentials  The AWS credentials to use to sign the request.
 * @param  operation    The HTTP method being used for the request.
 * @param  request      The network request to generate a signature for.
 * @param  payload      Optional data being submitted in the request (eg for `PUT` and `POST` operations).
 * @param  timestamp    The timestamp to use when signing the request.
 *
 * @return  An AWS V4 Signature authorization header value.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-signed-request-examples.html
 * @see    setAuthorizationHeader
 */
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

/**
 * @brief  Create an AWS V4 Signature canonical header string.
 *
 * In canonical form, header name and value are combined with a single semi-colon
 * separator, with all whitespace removed from both, _except_ for whitespace within
 * double-quotes.
 *
 * @param  headerName   Name of the HTTP header to convert to canonical form.
 * @param  headerValue  Value of the HTTP header to convert to canonical form.
 *
 * @return  An AWS V4 Signature canonical header string.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 * @see    canonicalHeaders
 */
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

/**
 * @brief  Create an AWS V4 Signature canonical headers string.
 *
 * This function constructs a canonical string containing all of the headers
 * in the given request.
 *
 * @note   \p request will typically not include a `Host` header at this stage,
 *         however Qt will add an appropriate `Host` header when the request is
 *         performed.  So, if \p request does not include a `Host` header yet,
 *         this function will include a derived `Host` header in the canonical
 *         headers to allow for it.
 *
 * @param[in]  request        The network request to fetch the canonical headers from.
 * @param[out] signedHeaders  A semi-colon separated list of the names of all headers
 *                            included in the result.
 *
 * @return  An AWS V4 Signature canonical headers string.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 * @see    canonicalHeader
 */
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

/**
 * @brief  Create an AWS V4 Signature canonical request.
 *
 * @param[in]  operation      The HTTP method being used for the request.
 * @param[in]  request        The network request to generate a canonical request for.
 * @param[in]  payload        Optional data being submitted in the request (eg for `PUT` and `POST` operations).
 * @param[out] signedHeaders  A semi-colon separated list of the names of all headers
 *                            included in the result.
 *
 * @return  An AWS V4 Signature canonical request.
 *
 * @see     http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 */
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

/**
 * @brief  Create an AWS V4 Signature credential scope.
 *
 * @param  date     Date to include in the credential scope.
 * @param  region   Region name to include in the credential scope.
 * @param  service  Service name to include in the credential scope.
 *
 * @return An AWS V4 Signature credential scope.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
 */
QByteArray AwsSignatureV4Private::credentialScope(const QDate &date, const QString &region, const QString &service) const
{
    return date.toString(DateFormat).toUtf8() + '/' + region.toUtf8() + '/' + service.toUtf8() + "/aws4_request";
}

/**
 * @brief  Set authorization header on a network request.
 *
 * This function will calculate the authorization header value and set it as the `Authorization`
 * HTTP header on \p request.
 *
 * @param[in]     credentials  The AWS credentials to use to sign the request.
 * @param[in]     operation    The HTTP method being used for the request.
 * @param[in,out] request      The network request to add the authorization header to.
 * @param[in]     payload      Optional data being submitted in the request (eg for `PUT` and `POST` operations).
 * @param[in]     timestamp    The timestamp to use when signing the request.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-signed-request-examples.html
 * @see    authorizationHeaderValue
 */
void AwsSignatureV4Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &payload,
                                                   const QDateTime &timestamp) const
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, payload, timestamp));
}

/**
 * @brief   Set the AWS custom date header.
 *
 * This function will set a custom `x-amz-date` header to the value of \p dateTime
 * formatted to AwsSignatureV4Private::DateTimeFormat.
 *
 * @note    Although Amazon labels this as a "date", it is in fact a full timestamp.
 *
 * @param   request   The network request to add the date header to.
 * @param   dateTime  The timestamp to set the date header's value to.
 *
 * @return  \p dateTime verbatim (just a convenience for some callers).
 */
QDateTime AwsSignatureV4Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) const
{
    Q_ASSERT(!request.hasRawHeader("x-amz-date"));
    request.setRawHeader("x-amz-date", dateTime.toString(DateTimeFormat).toUtf8());
    return dateTime;
}

/**
 * @brief  Create an AWS V4 Signature signing key.
 *
 * @param  credentials  AWS credentials to use when generating the signing key.
 * @param  date         Date to include in the signing key.
 * @param  region       Region name to include in the signing key.
 * @param  service      Service name to include in the signing key.
 *
 * @return An AWS V4 Signature signing key.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-calculate-signature.html
 */
QByteArray AwsSignatureV4Private::signingKey(const AwsAbstractCredentials &credentials, const QDate &date,
                                             const QString &region, const QString &service) const
{
    return QMessageAuthenticationCode::hash("aws4_request",
           QMessageAuthenticationCode::hash(service.toUtf8(),
           QMessageAuthenticationCode::hash(region.toUtf8(),
           QMessageAuthenticationCode::hash(date.toString(DateFormat).toUtf8(), "AWS4"+credentials.secretKey().toUtf8(),
           hashAlgorithm), hashAlgorithm), hashAlgorithm), hashAlgorithm);
}

/**
 * @brief  Create an AWS V4 Signature string to sign.
 *
 * @param  algorithmDesignation  AWS designation for the hash algorithm used to sign the request.
 * @param  requestDate           AWS request timestamp.
 * @param  credentialScope       Aws credential scope used to sign the request.
 * @param  canonicalRequest      AWS request in canonical form.
 *
 * @return An AWS V4 Signature string to sign.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
 * @see    algorithmDesignation
 * @see    canonicalRequest
 * @see    credentialScope
 */
QByteArray AwsSignatureV4Private::stringToSign(const QByteArray &algorithmDesignation, const QDateTime &requestDate,
                                               const QByteArray &credentialScope, const QByteArray &canonicalRequest) const
{
    return algorithmDesignation + '\n' +
           requestDate.toString(DateTimeFormat).toUtf8() + '\n' +
           credentialScope + '\n' +
           QCryptographicHash::hash(canonicalRequest, hashAlgorithm).toHex();
}

QTAWS_END_NAMESPACE
