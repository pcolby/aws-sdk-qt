/*
    Copyright 2013-2021 Paul Colby

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

#include "awssignaturev1.h"
#include "awssignaturev1_p.h"

#include <QCryptographicHash>
#include <QDebug>
#include <QMessageAuthenticationCode>
#include <QNetworkRequest>
#include <QUrl>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsSignatureV1
 * \brief The AwsSignatureV1 class provides V1 AWS signatures.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 *
 * \note  Amazon has officially deprecated signature Version 1 in favor of later, more secure
 * signatures, such as AwsSignatureV2 and AwsSignatureV4.
 *
 * As version 1 signatures are rightly regarded as \e insecure, this class will refuse to sign
 * requests that use insecure transports such as HTTP instead of HTTPS. However, insecure
 * signatures can be enabled (why would you want to?) by defining \c QTAWS_ALLOW_INSECURE_SIGNATURES
 * when compiling this library.
 *
 * \sa http://s3.amazonaws.com/awsdocs/SQS/20070501/sqs-dg-20070501.pdf
 * \sa http://lmgtfy.com/?q=aws+signature+version+1+is+insecure
 */

/*!
 * Constructs an AwsSignatureV1 object.
 *
 * Use instances of this object to provide Version 1 signatures for AWS services.
 */
AwsSignatureV1::AwsSignatureV1() : AwsSignatureV0(new AwsSignatureV1Private(this))
{

}

/*!
 * \reimp
 * Returns \c 1.
 */
int AwsSignatureV1::version() const
{
    return 1;
}

/*!
 * \class QtAws::Core::AwsSignatureV1Private
 * \brief The AwsSignatureV1Private class provides private implementation for the AwsSignatureV1 class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsSignatureV1Private object with public implementation \a q.
 */
AwsSignatureV1Private::AwsSignatureV1Private(AwsSignatureV1 * const q) : AwsSignatureV0Private(q)
{

}

/*!
 * Returns the AWS Signature version 1 canonical query string for \a query.
 *
 * This function returns a string containing all non-empty query parameters in
 * sorted order (case-insensitive), with no separators at all.
 *
 * For example, for the following SQS query string:
 * \code
 *     ?Action=CreateQueue&QueueName=queue2&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE&SignatureVersion=1&Expires=2007-01-12T12:00:00Z&Version=2006-04-01
 * \endcode
 *
 * this function will return the following canonical form:
 * \code
 *     ActionCreateQueueAWSAccessKeyIdAKIAIOSFODNN7EXAMPLEExpires2007-01-12T12:00:00ZQueueNamequeue2SignatureVersion1Version2006-04-01
 * \endcode
 *
 * This function is very similar to AwsAbstractSignaturePrivate::canonicalQuery(), except
 * that:
 * \list
 * \li this function sorts case-insensitively, whereas
 *     AwsAbstractSignaturePrivate::canonicalQuery() uses a byte sort (ie is
 *     case sensitive); and
 * \li this function excludes parameters with empty values, where
 *     AwsAbstractSignaturePrivate::canonicalQuery() includes all query
 *     parameters, regardless of content; and
 * \li this function does not use any separators in the generated string,
 *     whereas AwsAbstractSignaturePrivate::canonicalQuery() uses \c '&' and
 *     \c '=' separators just as you would expect to see them in a typical
 *     query string; and
 * \li this function does not perform any URL encoding of the query parameters,
 *     whereas AwsAbstractSignaturePrivate::canonicalQuery() URL encodes both
 *     parameter keys and values.
 * \endlist
 *
 * The AwsAbstractSignaturePrivate::canonicalQuery() function is used by the later signature
 * algorithms, such as AwsSignatureV2 and AwsSignatureV4, as required by Amazon. Instead
 * this function is specific to version 1 signatures.
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

/*!
 * \typedef AwsSignatureV1Private::QStringPair
 *
 * Synonym for QPair<QString, QString>.
 */

/*!
 * Returns \c true if if \a pair1 less than \a pair2, when ignoring case;
 * \c false otherwise.
 *
 * Comparison is performed in a case-insenstive manner, on the keys of each
 * pair first, then if equal, on the values of each pair.
 *
 * This static function is used by canonicalQuery() to sort query string
 * parameters in case-insensitive order, via Qt's qSort function.
 */
bool AwsSignatureV1Private::caseInsensitiveLessThan(const QStringPair &pair1, const QStringPair &pair2)
{
    if (pair1.first.toLower() < pair2.first.toLower())
        return true;
    if (pair1.first.toLower() > pair2.first.toLower())
        return false;
    return (pair1.second.toLower() < pair2.second.toLower());
}

} // namespace Core
} // namespace QtAws
