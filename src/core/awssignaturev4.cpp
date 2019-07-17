/*
    Copyright 2013-2019 Paul Colby

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

#include "awssignaturev4.h"
#include "awssignaturev4_p.h"

#include "awsendpoint.h"

#include <QDebug>
#include <QMessageAuthenticationCode>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsSignatureV4
 * \brief The AwsSignatureV4 class provides V4 AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/*!
 * Constructs an AwsSignatureV4 object, with cryptographic hash algorithm \a hashAlgorithm.
 *
 * Use an instance of this object to provide Version 4 signatures for AWS services.
 *
 * \note  The AWS Signature Version 4 documentation is not explcit about which hash
 *        algorithms are supported by Amazon, however all documented examples use
 *        SHA256.
 */
AwsSignatureV4::AwsSignatureV4(const QCryptographicHash::Algorithm hashAlgorithm)
    : AwsAbstractSignature(new AwsSignatureV4Private(hashAlgorithm, this))
{

}

/*!
 * \reimp
 */
void AwsSignatureV4::sign(const AwsAbstractCredentials &credentials,
                          const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_D(const AwsSignatureV4);
    d->setAuthorizationHeader(credentials, operation, request, data, d->setDateHeader(request));
}

/*!
 * \reimp
 * Returns \c 4.
 */
int AwsSignatureV4::version() const
{
    return 4;
}

/*!
 * \class QtAws::Core::AwsSignatureV4Private
 * \brief The AwsSignatureV4Private class provides private implementation for the AwsSignatureV4 class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * \variable AwsSignatureV4Private::DateFormat
 * \brief The format V4 signatures use to represent \e dates in canonical form.
 */
const QLatin1String AwsSignatureV4Private::DateFormat("yyyyMMdd");

/*!
 * \variable AwsSignatureV4Private::DateTimeFormat
 * \brief The format V4 signatures use to represent \e timestamps in canonical form.
 */
const QLatin1String AwsSignatureV4Private::DateTimeFormat("yyyyMMddThhmmssZ");

/*!
 * Constructs an AwsSignatureV4Private object with \a hashAlgorithm, and public implementation \a q.
 */
AwsSignatureV4Private::AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV4 * const q)
    : AwsAbstractSignaturePrivate(q), hashAlgorithm(hashAlgorithm)
{

}

/*!
 * Returns the AWS Signature version 4 algorithm designation for \a algorithm.
 *
 * This function returns an algorithm designation, as defined by Amazon, for use with
 * V4 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha256`, this function will
 * return `AWS4-HMAC-SHA256`.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
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
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid algorithm");
            return "invalid-algorithm";
    }
}

/*!
 * Returns the AWS Signature version 3 authorization header value for
 * \a operation on \a request, with optional \c POST/ \c PUT \a payload
 * at \a timestamp, signed by \a credentials.
 *
 * This function builds an V4 signature, and returns it to the caller.  The returned
 * header value is then suitable for adding as a `Authorization` header in the HTTP
 * request, to be accepted by Amazon.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-signed-request-examples.html
 * \sa setAuthorizationHeader
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

/*!
 * Returns the AWS Signature version 4 canonical header string for the header
 * \a headerName with value \a headerValue.
 *
 * In canonical form, header name and value are combined with a single semi-colon
 * separator, with all whitespace removed from both, \e except for whitespace within
 * double-quotes.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 * \sa canonicalHeaders
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

/*!
 * Returns the AWS Signature version 4 canonical headers string for \a request.
 *
 * This function constructs a canonical string containing all of the headers
 * in the given request.
 *
 * \note   \a request will typically not include a \c Host header at this stage,
 *         however Qt will add an appropriate `Host` header when the request is
 *         performed.  So, if \a request does not include a \c Host header yet,
 *         this function will include a derived \c Host header in the canonical
 *         headers to allow for it.
 *
 * The \a signedHeaders parameter will be set to be semi-colon separated list
 * of the names of all headers included in the result.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 * \sa canonicalHeader
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

/*!
 * Returns the AWS Signature version 4 canonical request string for \a operation
 * on \a request, including optional \c POST / \c PUT \a payload.
 *
 * The \a signedHeaders parameter will be set to be semi-colon separated list
 * of the names of all headers included in the result.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
 */
QByteArray AwsSignatureV4Private::canonicalRequest(const QNetworkAccessManager::Operation operation,
                                                   const QNetworkRequest &request, const QByteArray &payload,
                                                   QByteArray * const signedHeaders) const
{
    return httpMethod(operation).toUtf8() + '\n' +
           canonicalPath(request.url()).toUtf8() + '\n' +
           canonicalQuery(QUrlQuery(request.url()))  + '\n' +
           canonicalHeaders(request, signedHeaders) + '\n' +
           *signedHeaders + '\n' +
           QCryptographicHash::hash(payload, hashAlgorithm).toHex();
}

/*!
 * Returns the AWS Signature version 4 credential scope for the given \a date,
 * \a region and \a service combination.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
 */
QByteArray AwsSignatureV4Private::credentialScope(const QDate &date, const QString &region, const QString &service) const
{
    return date.toString(DateFormat).toUtf8() + '/' + region.toUtf8() + '/' + service.toUtf8() + "/aws4_request";
}

/*!
 * Sets the authorization header on \a request, for \a operation on the
 * \a request with optional \c PUT / \c POST \a payload, at \a timestamp,
 * signed with \a credentials.
 *
 * This function will calculate the authorization header value and set it as
 * the \c Authorization HTTP header on \a request.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-signed-request-examples.html
 * \sa authorizationHeaderValue
 */
void AwsSignatureV4Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &payload,
                                                   const QDateTime &timestamp) const
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, payload, timestamp));
}

/*!
 * Sets the AWS custom date header on \a request to UTC \a dateTime.
 *
 * This function will set a custom \c x-amz-date header to the value of
 * \a dateTime, formatted to DateTimeFormat.
 *
 * \note Although Amazon labels this as a \c "date", it is in fact a full timestamp.
 *
 * Returns \a dateTime as a convenience to callers.
 */
QDateTime AwsSignatureV4Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) const
{
    Q_ASSERT(!request.hasRawHeader("x-amz-date"));
    request.setRawHeader("x-amz-date", dateTime.toString(DateTimeFormat).toUtf8());
    return dateTime;
}

/*!
 * Returns the AWS Signature versoin 4 signing key for the given
 * \a credentials, \a date, \a region and \a service combination.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-calculate-signature.html
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

/*!
 * Returns the AWS Signature version 4 string to sign for the given
 * \a algorithmDesignation, \a requestDate, \a credentialScope and
 * \a canonicalRequest combination.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
 * \sa algorithmDesignation
 * \sa canonicalRequest
 * \sa credentialScope
 */
QByteArray AwsSignatureV4Private::stringToSign(const QByteArray &algorithmDesignation, const QDateTime &requestDate,
                                               const QByteArray &credentialScope, const QByteArray &canonicalRequest) const
{
    return algorithmDesignation + '\n' +
           requestDate.toString(DateTimeFormat).toUtf8() + '\n' +
           credentialScope + '\n' +
           QCryptographicHash::hash(canonicalRequest, hashAlgorithm).toHex();
}

} // namespace Core
} // namespace QtAws
