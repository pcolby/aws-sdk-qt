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

#include "awssignaturev0.h"
#include "awssignaturev0_p.h"

#include <QCryptographicHash>
#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsSignatureV0
 * \brief The AwsSignatureV0 class provides V0 AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 *
 * \note Amazon has officially deprecated signature Version 0 in favor of later, more secure
 * signatures, such as AwsSignatureV2 and AwsSignatureV4.
 *
 * As version 0 signatures are rightly regarded as \e insecure, this class will refuse to sign
 * requests that use insecure transports such as HTTP instead of HTTPS. However, insecure
 * signatures can be enabled (why would you want to?) by defining \c QTAWS_ALLOW_INSECURE_SIGNATURES
 * when compiling this library.
 *
 * \sa http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 */

/*!
 * Constructs an AwsSignatureV0 object.
 *
 * Use instances of this object to provide Version 0 signatures for AWS services.
 */
AwsSignatureV0::AwsSignatureV0() : AwsAbstractSignature(new AwsSignatureV0Private(this))
{

}

/*!
 * \internal
 *
 * Constructs an AwsSignatureV0 object with private implementation \a d.
 *
 * \note AwsSignatureV1 uses this constructor to extend this class.
 */
AwsSignatureV0::AwsSignatureV0(AwsSignatureV0Private * const d) : AwsAbstractSignature(d)
{

}

void AwsSignatureV0::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(operation) // Not included in V0 signatures.
    Q_UNUSED(data)      // Not included in V0 signatures.
    Q_D(const AwsSignatureV0);

    // Refuse to sign non-HTTPS requests, unless built with QTAWS_ALLOW_INSECURE_SIGNATURES defined.
#ifndef QTAWS_ALLOW_INSECURE_SIGNATURES
    if (request.url().scheme() != QString::fromLatin1("https")) {
        qWarning("AwsSignatureV%d::sign Refusing to sign insecure (non-HTTPS) request", version());
        Q_ASSERT_X(false, Q_FUNC_INFO, "insecure V1 signatures not enabled");
        return;
    }
#endif

    // Set the AWSAccessKeyId, SignatureVersion and Timestamp query items, if not already.
    d->adornRequest(request, credentials);

    // Calculate the signature.
    const QByteArray stringToSign = d->canonicalQuery(QUrlQuery(request.url().query()));
    const QString signature = QString::fromUtf8(QUrl::toPercentEncoding(QString::fromUtf8(
        QMessageAuthenticationCode::hash(stringToSign, credentials.secretKey().toUtf8(),
                                         QCryptographicHash::Sha1).toBase64())));

    // Append the signature to the request.
    QUrl url = request.url();
    url.setQuery(url.query() + QLatin1String("&Signature=") + signature);
    request.setUrl(url);
}

int AwsSignatureV0::version() const
{
    return 0;
}

/*!
 * @internal
 *
 * \class QtAws::Core::AwsSignatureV0Private
 *
 * @brief  Private implementation for AwsSignatureV0.
 *
 * @warning  This is an internal private implementation class, and as such external should
 *           code should **not** depend directly on anything contained within this class.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AwsSignatureV0Private object.
 *
 * @param  q  Pointer to this object's public AwsSignatureV0 instance.
 */
AwsSignatureV0Private::AwsSignatureV0Private(AwsSignatureV0 * const q) : AwsAbstractSignaturePrivate(q)
{

}

/*!
 * @internal
 *
 * @brief  Add AWS Signature Version 0 adornments to an AWS request.
 *
 * In addition to service-specific request parameters, Amazon requires that version
 * 1 signatures contain a number of common query parameters.  This functions adds
 * those query parameters to \a request if they're not already present.
 *
 * The query parameters added by this function, as required by Amazon, are:
 *   * `AWSAccessKeyId` - set to \a credentials.accessKeyId().
 *   * `SignatureVersion` - set to `0`.
 *   * `Timestamp` - set to a current UTC timestamp in an ISO 8601 format, like
 *                 `2013-10-30T12:34:56Z`, unless an `Expires` value is present,
 *                 in which case no `Timestamp` parameter is added.
 *
 * @note   The `SignatureVersion` header is optional for version 0 signatures, but
 *         this function always includes it for clarity.
 *
 * @param  request         Request to adorn.
 * @param  credentials     Credentials to use when adorning \a request.
 *
 * @see    http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 */
void AwsSignatureV0Private::adornRequest(QNetworkRequest &request,
                                         const AwsAbstractCredentials &credentials) const
{
    Q_Q(const AwsSignatureV0);

    // Set / add the necessary query items.
    QUrl url = request.url();
    QUrlQuery query(url);
    setQueryItem(query, QLatin1String("AWSAccessKeyId"), credentials.accessKeyId());
    setQueryItem(query, QLatin1String("SignatureVersion"), QString::fromLatin1("%1").arg(q->version()));

    // Amazon: "Query requests must include either Timestamp or Expires, but not both."
    // See http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
    if (!query.hasQueryItem(QLatin1String("Expires"))) {
        setQueryItem(query, QLatin1String("Timestamp"),
                        QString::fromUtf8(QUrl::toPercentEncoding(
                            QDateTime::currentDateTimeUtc().toString(QLatin1String("yyyy-MM-ddThh:mm:ssZ"))
                        )),
                        false); // Don't warn if its already set to something else.
    }

    // If we've touched the query items (likely), then update the request.
    if (query != QUrlQuery(url.query())) {
        qDebug() << url;
        url.setQuery(query);
        qDebug() << url;
        request.setUrl(url);
    }
}

/*!
 * @internal
 *
 * @brief  Create an AWS Signature version 0 canonical query.
 *
 * This function returns a string containing the concatenation of `Action` and
 * `timestamp` (or `Expires`) query parameters.
 *
 * For example, for the following SQS query string:
 *
 *     ?Action=CreateQueue&QueueName=queue2&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=1&Expires=2007-01-12T12:00:00Z&Version=2006-04-01
 *
 * this function will return the following canonical form:
 *
 *     CreateQueue2007-01-12T12:00:00Z
 *
 * @param  query  Query to encode the HTTP query string from.
 *
 * @pre    \a query must already contain an `Action` and either a `Timestamp` or
 *         `Expires` query paramter.  See adornRequest().
 *
 * @return An AWS Signature canonical query string.
 *
 * @see    adornRequest()
 * @see    http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 */
QByteArray AwsSignatureV0Private::canonicalQuery(const QUrlQuery &query) const
{
    Q_ASSERT_X(query.hasQueryItem(QLatin1String("Action")), Q_FUNC_INFO, "Action query parameter required");
    Q_ASSERT_X(query.hasQueryItem(QLatin1String("Timestamp")) || query.hasQueryItem(QLatin1String("Expires")),
               Q_FUNC_INFO, "Timestamp or Expires query parameter required");

    return (query.queryItemValue(QLatin1String("Action")) + query.queryItemValue(QLatin1String(
                (query.hasQueryItem(QLatin1String("Timestamp"))) ? "Timestamp" : "Expires"))).toUtf8();
}

} // namespace Core
} // namespace QtAws
