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

/*!
 * \reimp
 */
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

/*!
 * \reimp
 * Returns \c 0.
 */
int AwsSignatureV0::version() const
{
    return 0;
}

/*!
 * \class QtAws::Core::AwsSignatureV0Private
 * \brief The AwsSignatureV0Private class provides private implementation for the AwsSignatureV0 class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsSignatureV0Private object with public implementation \a q.
 */
AwsSignatureV0Private::AwsSignatureV0Private(AwsSignatureV0 * const q) : AwsAbstractSignaturePrivate(q)
{

}

/*!
 * Adds AWS Signature Version 0 adornments to a AWS \a request.
 *
 * In addition to service-specific request parameters, Amazon requires that version
 * 1 signatures contain a number of common query parameters.  This functions adds
 * those query parameters to \a request if they're not already present.
 *
 * The query parameters added by this function, as required by Amazon, are:
 * \table
 * \header \li Parameter Name      \li Parameter Value
 * \row    \li \c AWSAccessKeyId   \li The AWS Access Key ID from \a credentials.
 * \row    \li \c SignatureVersion \li The version returned by AwsSignatureV0::version(); ie \c 0.
 * \row    \li \c Timestamp
 * \li Current UTC timestamp in ISO 8601 format, eg \c {2013-10-30T12:34:56Z}.
 * \note If \a request includes an \c Expires parameter, then \c Timestamp is not added.
 * \endtable
 *
 * \note The \c SignatureVersion header is optional for version 0 signatures,
 * but this function always includes it for clarity.
 *
 * \sa AwsAbstractCredentials::accessKeyId()
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
 * Returns the AWS Signature version 0 canonical query string for \a query.
 *
 * This function returns a string containing the concatenation of \c Action and
 * \c Timestamp (or \c Expires) query parameters.
 *
 * For example, for the following SQS query string:
 * \code
 *     ?Action=CreateQueue&QueueName=queue2&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=1&Expires=2007-01-12T12:00:00Z&Version=2006-04-01
 * \endcode
 *
 * this function will return the following canonical form:
 * \code
 *     CreateQueue2007-01-12T12:00:00Z
 * \endcode
 *
 * \note \a query must already contain an \c Action and either a \c Timestamp
 * or \c Expires query paramter. See adornRequest().
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
