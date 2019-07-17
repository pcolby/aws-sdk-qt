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

#include "awssignaturev3.h"
#include "awssignaturev3_p.h"

#include "awsendpoint.h"

#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QUuid>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsSignatureV3
 * \brief The AwsSignatureV3 class provides V3 AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 *
 * This class implements both \c AWS3 and \c AWS3-HTTPS varieties.
 *
 * \sa http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html
 * \sa http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
 */

/*!
 * Constructs an AwsSignatureV3 object, with cryptographic hash algorithm \a hashAlgorithm.
 *
 * Use an instance of this object to provide Version 3 signatures for AWS services.
 *
 * \note \a hashAlgorithm must be either QCryptographicHash::Sha1 or QCryptographicHash::Sha256.
 */
AwsSignatureV3::AwsSignatureV3(const QCryptographicHash::Algorithm hashAlgorithm)
    : AwsAbstractSignature(new AwsSignatureV3Private(hashAlgorithm, this))
{

}

/*!
 * \reimp
 */
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

/*!
 * \reimp
 * Returns \c 3.
 */
int AwsSignatureV3::version() const
{
    return 3;
}

/*!
 * \class QtAws::Core::AwsSignatureV3Private
 * \brief The AwsSignatureV3Private class provides private implementation for the AwsSignatureV3 class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsSignatureV2Private object with \a hashAlgorithm, and public implementation \a q.
 */
AwsSignatureV3Private::AwsSignatureV3Private(const QCryptographicHash::Algorithm hashAlgorithm,
                                             AwsSignatureV3 * const q)
    : AwsAbstractSignaturePrivate(q), hashAlgorithm(hashAlgorithm)
{

}

/*!
 * Returns the AWS Signature version 3 algorithm designation for \a algorithm.
 *
 * This function returns an algorithm designation, as defined by Amazon, for use with
 * V3 signatures.
 *
 * For example, if the algorith is `QCryptographicHash::Sha256`, this function will
 * return `HmacSHA256`.
 *
 * \sa http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
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

/*!
 * Returns the AWS Signature version 3 authorization header value for
 * \a operation on \a request, with optional \c POST/ \c PUT \a payload,
 * signed by \a credentials.
 *
 * This function builds a V3 signature, and returns it to the caller.  The returned
 * header value is then suitable for adding as an `Authorization` header in the HTTP
 * request, to be accepted by Amazon.
 *
 * \sa http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
 * \sa setAuthorizationHeader
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

/*!
 * Returns the AWS Signature version 3 canonical header string for the header
 * \a headerName with value \a headerValue.
 *
 * \note   Amazon documentation does not specify how to handle whitespace within
 *         quotes for V3 signatures, so here we use the same approach as V3
 *         signatures.  That is:
 *
 * In canonical form, header name and value are combined with a single semi-colon
 * separator, with all whitespace removed from both, _except_ for whitespace within
 * double-quotes.
 *
 * \note   This function is only applicable to the \c AWS3 format, not \c AWS3-HTTPS.
 *
 * \sa http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigV4-create-canonical-request.html
 * \sa canonicalHeaders
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

/*!
 * Returns the AWS Signature version 3 canonical headers string for \a request.
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
 * \note   This function is only applicable to the \c AWS3 format, not \c AWS3-HTTPS.
 *
 * The \a signedHeaders parameter will be set to be semi-colon separated list
 * of the names of all headers included in the result.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigV3-create-canonical-request.html
 * \sa canonicalHeader
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

/*!
 * Returns the AWS Signature version 3 canonical request string for \a operation
 * on \a request, including optional \c POST / \c PUT \a payload.
 *
 * Note, this function implments both \c AWS3 and \c AWS3-HTTPS variants of the
 * AWS Signature version 3 - which are quite different.
 *
 * The \a signedHeaders parameter will be set to be semi-colon separated list
 * of the names of all headers included in the result.
 *
 * \sa http://docs.aws.amazon.com/amazonswf/latest/developerguide/HMACAuth-swf.html
 * \sa http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/RESTAuthentication.html
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

/*!
 * Returns \c true of \a request is using the \c HTTPS scheme; \c false otherwise.
 */
bool AwsSignatureV3Private::isHttps(const QNetworkRequest &request)
{
    return (request.url().scheme() == QLatin1String("https"));
}

/*!
 * Sets the authorization header on \a request, for \a operation on the
 * \a request with optional \c PUT / \c POST \a payload, signed with \a
 * credentials.
 *
 * This function will calculate the authorization header value and set it as the `Authorization`
 * HTTP header on \a request.
 *
 * \sa http://docs.aws.amazon.com/general/latest/gr/sigV3-signed-request-examples.html
 * \sa authorizationHeaderValue
 */
void AwsSignatureV3Private::setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                                   const QNetworkAccessManager::Operation operation,
                                                   QNetworkRequest &request, const QByteArray &payload) const
{
    Q_ASSERT(!request.hasRawHeader("Authorization"));
    request.setRawHeader("Authorization", authorizationHeaderValue(credentials, operation, request, payload));
}

/*!
 * Sets the AWS custom date header on \a request to UTC \a dateTime.
 *
 * If \a request does not already contain an \c x-amz-date header, then this function
 * will set a custom \c x-amz-date header to the value of \a dateTime formatted like
 * \c {"Fri, 09 Sep 2011 23:36:00 GMT"}.
 *
 * \note \a dateTime must be in UTC, that is QDateTime::timeSpec() must be Qt::UTC.
 */
void AwsSignatureV3Private::setDateHeader(QNetworkRequest &request, const QDateTime &dateTime) const
{
    Q_ASSERT(dateTime.timeSpec() == Qt::UTC);
    if (!request.hasRawHeader("x-amz-date")) {
        request.setRawHeader("x-amz-date", dateTime.toString(QLatin1String("ddd, dd MMM yyyy hh:mm:ss 'GMT'")).toUtf8());
    }
}

} // namespace Core
} // namespace QtAws
