/*
    Copyright 2013-2018 Paul Colby

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

#include "awssignaturev3.h"
#include "awssignaturev3_p.h"

#include "awsendpoint.h"

#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QUuid>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV3
 *
 * @brief  Implements AWS Signature Version 3.
 *
 * This class implements both `AWS3` and `AWS3-HTTPS` varieties.
 *
 * @see    http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html (AWS3)
 * @see    http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html (AWS3-HTTPS)
 */

/**
 * @brief  Constructs a new AwsSignatureV3 object.
 *
 * Use instances of this object to provide Version 3 signatures for AWS services.
 *
 * @param  hashAlgorithm  Hash algorithm for signatures.  Must be either QCryptographicHash::Sha1
 *                        or QCryptographicHash::Sha256 (default, recommended).
 */
AwsSignatureV3::AwsSignatureV3(const QCryptographicHash::Algorithm hashAlgorithm)
    : AwsAbstractSignature(new AwsSignatureV3Private(hashAlgorithm, this))
{

}

void AwsSignatureV3::sign(const AwsAbstractCredentials &credentials,
                          const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_D(const AwsSignatureV3);

    // Note, the use of a nonce value with AWS3-HTTPS is undocumented, but done by the
    // official Java SDK, and worth copying for additional security.
    if ((d->isHttps(request)) && (!request.hasRawHeader("x-amz-nonce"))) {
        request.setRawHeader("x-amz-nonce", QUuid::createUuid().toByteArray().mid(1,36));
    }

    d->setDateHeader(request);
    d->setAuthorizationHeader(credentials, operation, request, data);
}

int AwsSignatureV3::version() const
{
    return 3;
}

/**
 * @internal
 *
 * @class  AwsSignatureV3Private
 *
 * @brief  Private implementation for AwsSignatureV3.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsSignatureV3Private object.
 *
 * @param  hashAlgorithm  The algorithm to use during various stages of signing.
 * @param  q              Pointer to this object's public AwsSignatureV3 instance.
 */
AwsSignatureV3Private::AwsSignatureV3Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV3 * const q)
    : AwsAbstractSignaturePrivate(q), hashAlgorithm(hashAlgorithm)
{

}

/**
 * @brief  Create an AWS V3 Signature algorithm designation.
 *
 * This function returns an algorithm designation, as defined by Amazon, for use with
 * V3 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha256`, this function will
 * return `HmacSHA256`.
 *
 * @param  algorithm  The hash algorithm to get the canonical designation for.
 *
 * @return An AWS V3 Signature algorithm designation.
 *
 * @see    http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
 */
QByteArray AwsSignatureV3Private::algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const
{
    switch (algorithm) {
        case QCryptographicHash::Sha1:     return "HmacSHA1";
        case QCryptographicHash::Sha256:   return "HmacSHA256";
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid algorithm");
            return "invalid-algorithm";
    }
}

/**
 * @brief  Create an AWS V3 Signature authorization header value.
 *
 * This function builds a V3 signature, and returns it to the caller.  The returned
 * header value is then suitable for adding as an `Authorization` header in the HTTP
 * request, to be accepted by Amazon.
 *
 * @param  credentials  The AWS credentials to use to sign the request.
 * @param  operation    The HTTP method being used for the request.
 * @param  request      The network request to generate a signature for.
 * @param  payload      Optional data being submitted in the request (eg for `PUT` and `POST` operations).
 *
 * @return  An AWS V3 Signature authorization header value.
 *
 * @see    http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
 * @see    setAuthorizationHeader
 */
QByteArray AwsSignatureV3Private::authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                                           const QNetworkAccessManager::Operation operation,
                                                           QNetworkRequest &request, const QByteArray &payload) const
{
    // Calculate the signature.
    QByteArray signedHeaders;
    QByteArray stringToSign = canonicalRequest(operation, request, payload, &signedHeaders);
    if (!isHttps(request)) {
        stringToSign = QCryptographicHash::hash(stringToSign, hashAlgorithm);
    }
    const QByteArray signature = QMessageAuthenticationCode::hash(
                stringToSign, credentials.secretKey().toUtf8(), hashAlgorithm);

    // Build and return the authorization header value.
    return
        QByteArray((isHttps(request)) ? "AWS3-HTTPS " : "AWS3 ") +
        "AWSAccessKeyId=" + credentials.accessKeyId().toUtf8() + ","
        "Algorithm=" + algorithmDesignation(hashAlgorithm) + "," +
        ((!isHttps(request)) ? "SignedHeaders=" + signedHeaders + ',' : "") +
        "Signature=" + signature.toBase64();
}

/**
 * @brief  Create an AWS V3 Signature canonical header string.
 *
 * @note   Amazon documentation does not specify how to handle whitespace within
 *         quotes for V3 signatures, so here we use the same approach as V3
 *         signatures.  That is:
 *
 * In canonical form, header name and value are combined with a single semi-colon
 * separator, with all whitespace removed from both, _except_ for whitespace within
 * double-quotes.
 *
 * @note   This function is only applicable to the `AWS3` format, not `AWS3-HTTPS`.
 *
 * @param  headerName   Name of the HTTP header to convert to canonical form.
 * @param  headerValue  Value of the HTTP header to convert to canonical form.
 *
 * @return  An AWS V3 Signature canonical header string.
 *
 * @see    http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigV4-create-canonical-request.html
 * @see    canonicalHeaders
 */
QByteArray AwsSignatureV3Private::canonicalHeader(const QByteArray &headerName, const QByteArray &headerValue) const
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
 * @brief  Create an AWS V3 Signature canonical headers string.
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
 * @note   This function is only applicable to the `AWS3` format, not `AWS3-HTTPS`.
 *
 * @param[in]  request        The network request to fetch the canonical headers from.
 * @param[out] signedHeaders  A semi-colon separated list of the names of all headers
 *                            included in the result.
 *
 * @return  An AWS V3 Signature canonical headers string.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigV3-create-canonical-request.html
 * @see    canonicalHeader
 */
QByteArray AwsSignatureV3Private::canonicalHeaders(const QNetworkRequest &request, QByteArray * const signedHeaders) const
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
        // Only include "host" and "x-amz-*" headers. Note, Amazon documentation states that latter as
        // "x-amz-" (ie with the trailing '-'), yet the official Amazon Java SDK tests for a "x-amz"
        // prefix. Thus the Java SDK would include headers with keys like "x-amzfoo", but here we do not
        // since that would disagree with the official documentation.
        if ((iter.key() == "host") || (iter.key().startsWith("x-amz-"))) {
            canonicalHeaders += canonicalHeader(iter.key(), iter.value()) + '\n';
            if (!signedHeaders->isEmpty()) *signedHeaders += ';';
            *signedHeaders += iter.key();
        }
    }
    return canonicalHeaders;
}

/**
 * @brief  Create an AWS V3 Signature canonical request.
 *
 * Note, this function implments both `AWS3` and `AWS3-HTTPS` variants of the
 * AWS Signature version 3 - which are quite different.
 *
 * @param[in]  operation      The HTTP method being used for the request.
 * @param[in]  request        The network request to generate a canonical request for.
 * @param[in]  payload        Optional data being submitted in the request (eg for `PUT` and `POST` operations).
 * @param[out] signedHeaders  A semi-colon separated list of the names of all headers
 *                            included in the result.
 *
 * @return  An AWS V3 Signature canonical request.
 *
 * @see  http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html (AWS3)
 * @see  http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html (AWS3-HTTPS)
 */
QByteArray AwsSignatureV3Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QNetworkRequest &request, const QByteArray &payload,
                                                   QByteArray * const signedHeaders) const
{
    // AWS3-HTTPS
    if (isHttps(request)) {
        Q_ASSERT((request.hasRawHeader("x-amz-date")) || (request.hasRawHeader("Date")));
        QByteArray canonicalRequest = request.rawHeader(request.hasRawHeader("x-amz-date") ? "x-amz-date" : "Date");
        if (request.hasRawHeader("x-amz-nonce")) {
            canonicalRequest += request.rawHeader("x-amz-nonce");
        }
        return canonicalRequest;
    }

    // AWS3
    return httpMethod(operation).toUtf8() + '\n' +
           canonicalPath(request.url()).toUtf8() + '\n' +
           canonicalQuery(QUrlQuery(request.url()))  + '\n' +
           canonicalHeaders(request, signedHeaders) + '\n' +
           payload;
}

/**
 * @brief  Does a request use the HTTPS scheme?
 *
 * @param  request  The network request to evaluate.
 *
 * @return `true` if \a request uses the HTTPS scheme, `false` otherwise.
 */
bool AwsSignatureV3Private::isHttps(const QNetworkRequest &request)
{
    return (request.url().scheme() == QLatin1String("https"));
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
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/sigV3-signed-request-examples.html
 * @see    authorizationHeaderValue
 */
void AwsSignatureV3Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &payload) const
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, payload));
}

/**
 * @brief   Set the AWS custom date header.
 *
 * If \a request does not already contain an `x-amz-date` header, then this function
 * will set a custom `x-amz-date` header to the value of \p dateTime formatted like
 * "Fri, 09 Sep 2011 23:36:00 GMT".
 *
 * @param   request   The network request to add the date header to.
 * @param   dateTime  The timestamp (in UTC) to set the date header's value to.
 */
void AwsSignatureV3Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) const
{
    Q_ASSERT(dateTime.timeSpec() == Qt::UTC);
    if (!request.hasRawHeader("x-amz-date")) {
        request.setRawHeader("x-amz-date", dateTime.toString(QLatin1String("ddd, dd MMM yyyy hh:mm:ss 'GMT'")).toUtf8());
    }
}

QTAWS_END_NAMESPACE
