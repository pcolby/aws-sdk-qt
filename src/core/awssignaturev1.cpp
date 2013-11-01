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

#include <QCryptographicHash>
#include <QDebug>
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
 * @see  http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 * @see  http://lmgtfy.com/?q=aws+signature+version+1+is+insecure
 */

/**
 * @brief  Constructs a new AwsSignatureV1 object.
 *
 * Use instances of this object to provide Version 1 signatures for AWS services.
 */
AwsSignatureV1::AwsSignatureV1()
        : d_ptr(new AwsSignatureV1Private(this))
{
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
    Q_UNUSED(operation) // Not included in V1 signatures.
    Q_UNUSED(data)      // Not included in V1 signatures.
    Q_D(const AwsSignatureV1);

    // Refuse to sign non-HTTPS requests, unless built with ALLOW_INSECURE_V1_SIGNATURES defined.
#ifndef ALLOW_INSECURE_V1_SIGNATURES
    if (request.url().scheme() != QString::fromLatin1("https")) {
        qWarning("AwsSignatureV1::sign Refusing to sign insecure (non-HTTPS) request");
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
 * @brief  Add AWS Signature Version 1 adornments to an AWS request.
 *
 * In addition to service-specific request parameters, Amazon requires that version
 * 1 signatures contain a number of common query parameters.  This functions adds
 * those query parameters to \a request if they're not already present.
 *
 * The query parameters added by this function, as required by Amazon, are:
 *   * `AWSAccessKeyId` - set to \a credentials.accessKeyId().
 *   * `SignatureVersion` - set to `1`.
 *   * `Timestamp` - set to a current UTC timestamp in an ISO 8601 format, like
 *                 `2013-10-30T12:34:56Z`, unless an `Expires` value is present,
 *                 in which case no `Timestamp` parameter is added.
 *
 * @param  request      Request to adorn.
 * @param  credentials  Credentials to use when adorning \a request.
 *
 * @see    http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 */
void AwsSignatureV1Private::adornRequest(QNetworkRequest &request,
                                         const AwsAbstractCredentials &credentials) const
{
    Q_Q(const AwsSignatureV1);

    // Set / add the necessary query items.
    QUrl url = request.url();
    QUrlQuery query(url);
    q->setQueryItem(query, QLatin1String("AWSAccessKeyId"), credentials.accessKeyId());
    q->setQueryItem(query, QLatin1String("SignatureVersion"), QLatin1String("1"));

    // Amazon: "Query requests must include either Timestamp or Expires, but not both."
    // See http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
    if (!query.hasQueryItem(QLatin1String("Expires"))) {
        q->setQueryItem(query, QLatin1String("Timestamp"),
                        QString::fromUtf8(QUrl::toPercentEncoding(
                            QDateTime::currentDateTimeUtc().toString(QLatin1String("yyyy-MM-ddThh:mm:ssZ"))
                        )),
                        false); // Don't warn if its already set to something else.
    }

    // If we've touched the query items (likely), then update the request.
    if (query != QUrlQuery(url.query())) {
        qDebug() << Q_FUNC_INFO << url;
        url.setQuery(query);
        qDebug() << Q_FUNC_INFO << url;
        request.setUrl(url);
    }
}

/**
 * @internal
 *
 * @brief  Create an AWS Signature version 1 canonical query.
 *
 * This function returns a string containing all non-empty query parameters in
 * sorted order (case-insensitive), with no separators at all.
 *
 * For example, for the following SQS query string:
 *
 *     ?Action=CreateQueue&QueueName=queue2&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=1&Expires=2007-01-12T12:00:00Z&Version=2006-04-01
 *
 * this function will return the following canonical form:
 *
 *     ActionCreateQueueAWSAccessKeyIdAKIAIOSFODNN7EXAMPLEExpires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01
 *
 * This function is very similar to AwsAbstractSignature::canonicalQuery(), except
 * that:
 *   1. this function sorts case-insensitively, whereas AwsAbstractSignature::canonicalQuery()
 *      use a byte sort (ie is case sensitive); and
 *   2. this function excludes parameters with empty values, where
 *      AwsAbstractSignature::canonicalQuery() includes all query parameters, regardless
 *      of content; and
 *   3. this function does not use any separators in the generated string, whereas
 *      AwsAbstractSignature::canonicalQuery() uses `&` and `=` separators just as
 *      you would expect to see them in a typical query string; and
 *   4. this function does not perform any URL encoding of the query parameters,
 *      whereas AwsAbstractSignature::canonicalQuery() URL encodes both parameter
 *      keys and values.
 *
 * The AwsAbstractSignature::canonicalQuery() function is used by the later signature
 * algorithms, such as AwsSignatureV2 and AwsSignatureV4, as required by Amazon. Instead
 * this function is specific to version 1 signatures.
 *
 * @param  query  Query to encode the HTTP query string from.
 *
 * @return An AWS Signature canonical query string.
 *
 * @see    http://docs.aws.amazon.com/AmazonDevPay/latest/DevPayDeveloperGuide/LSAPI_Auth_REST.html#CalculatingHMACSignature
 */
QByteArray AwsSignatureV1Private::canonicalQuery(const QUrlQuery &query) const
{
    QList<QStringPair> list = query.queryItems(QUrl::FullyDecoded);
    qSort(list.begin(), list.end(), AwsSignatureV1Private::caseInsensitiveLessThan);
    QString result;
    foreach (const QStringPair &pair, list) {
        if (!pair.second.isEmpty()) {
            result += pair.first + pair.second;
        }
    }
    return result.toUtf8();
}

/**
 * @internal
 *
 * @brief  Is a key-value pair less than another key-value pair?
 *
 * This static function is used by the canonicalQuery function to sort query string
 * parameters in case-insensitive order, via Qt's qSort function.
 *
 * @param  pair1  The first key-value (query string parameter) pair.
 * @param  pair2  The second key-value (query string parameter) pair.
 *
 * @returns `true` if \a pair1 is less than \a pair2.
 */
bool AwsSignatureV1Private::caseInsensitiveLessThan(const QStringPair &pair1, const QStringPair &pair2)
{
    if (pair1.first.toLower() < pair2.first.toLower())
        return true;
    if (pair1.first.toLower() > pair2.first.toLower())
        return false;
    return (pair1.second.toLower() < pair2.second.toLower());
}

QTAWS_END_NAMESPACE
