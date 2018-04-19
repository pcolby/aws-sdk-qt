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

#include "dynamodbstreamsclient.h"
#include "dynamodbstreamsclient_p.h"

#include "core/awssignaturev4.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "getrecordsrequest.h"
#include "getrecordsresponse.h"
#include "getsharditeratorrequest.h"
#include "getsharditeratorresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DynamoDBStreams
 * \brief The QtAws::DynamoDBStreams contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::DynamoDBStreamsClient
 * \brief The DynamoDBStreamsClient class provides access to the Amazon DynamoDB Streams service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDynamoDBStreams
 *
 *  <fullname>Amazon DynamoDB Streams</fullname>
 * 
 *  This is the Amazon DynamoDB Streams API Reference. This guide describes the low-level API actions for accessing streams
 *  and processing stream records. For information about application development with DynamoDB Streams, see the <a
 *  href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide//Streams.html">Amazon DynamoDB Developer
 * 
 *  Guide</a>>
 * 
 *  Note that this document is intended for use with the following DynamoDB
 * 
 *  documentation> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/">Amazon DynamoDB Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/">Amazon DynamoDB API Reference</a>
 * 
 *  </p </li> </ul>
 * 
 *  The following are short descriptions of each low-level DynamoDB Streams API action, organized by
 * 
 *  function> <ul> <li><p><i>DescribeStream</i> - Returns detailed information about a particular stream.</p></li> <li>
 * 
 *  <i>GetRecords</i> - Retrieves the stream records from within a
 * 
 *  shard> </li> <li>
 * 
 *  <i>GetShardIterator</i> - Returns information on how to retrieve the streams record from a shard with a given shard
 * 
 *  ID> </li> <li>
 * 
 *  <i>ListStreams</i> - Returns a list of all the streams associated with the current AWS account and
 */

/*!
 * \brief Constructs a DynamoDBStreamsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DynamoDBStreamsClient::DynamoDBStreamsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DynamoDBStreamsClientPrivate(this), parent)
{
    Q_D(DynamoDBStreamsClient);
    d->apiVersion = QStringLiteral("2012-08-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("streams.dynamodb");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon DynamoDB Streams");
    d->serviceName = QStringLiteral("dynamodb");
}

/*!
 * \overload DynamoDBStreamsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
DynamoDBStreamsClient::DynamoDBStreamsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DynamoDBStreamsClientPrivate(this), parent)
{
    Q_D(DynamoDBStreamsClient);
    d->apiVersion = QStringLiteral("2012-08-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("streams.dynamodb");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon DynamoDB Streams");
    d->serviceName = QStringLiteral("dynamodb");
}

/*!
 * Sends \a request to the DynamoDBStreamsClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a stream, including the current status of the stream, its Amazon Resource Name (ARN), the
 * composition of its shards, and its corresponding DynamoDB
 *
 * table> <note><p>You can call <i>DescribeStream</i> at a maximum rate of 10 times per second.</p></note>
 *
 * Each shard in the stream has a <code>SequenceNumberRange</code> associated with it. If the
 * <code>SequenceNumberRange</code> has a <code>StartingSequenceNumber</code> but no <code>EndingSequenceNumber</code>,
 * then the shard is still open (able to receive more stream records). If both <code>StartingSequenceNumber</code> and
 * <code>EndingSequenceNumber</code> are present, the that shared is closed and can no longer receive more
 */
DescribeStreamResponse * DynamoDBStreamsClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the DynamoDBStreamsClient service, and returns a pointer to an
 * GetRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the stream records from a given
 *
 * shard>
 *
 * Specify a shard iterator using the <code>ShardIterator</code> parameter. The shard iterator specifies the position in
 * the shard from which you want to start reading stream records sequentially. If there are no stream records available in
 * the portion of the shard that the iterator points to, <code>GetRecords</code> returns an empty list. Note that it might
 * take multiple calls to get to a portion of the shard that contains stream
 *
 * records> <note><p><code>GetRecords</code> can retrieve a maximum of 1 MB of data or 2000 stream records, whichever comes
 */
GetRecordsResponse * DynamoDBStreamsClient::getRecords(const GetRecordsRequest &request)
{
    return qobject_cast<GetRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the DynamoDBStreamsClient service, and returns a pointer to an
 * GetShardIteratorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a shard iterator. A shard iterator provides information about how to retrieve the stream records from within a
 * shard. Use the shard iterator in a subsequent <code>GetRecords</code> request to read the stream records from the
 */
GetShardIteratorResponse * DynamoDBStreamsClient::getShardIterator(const GetShardIteratorRequest &request)
{
    return qobject_cast<GetShardIteratorResponse *>(send(request));
}

/*!
 * Sends \a request to the DynamoDBStreamsClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of stream ARNs associated with the current account and endpoint. If the <code>TableName</code>
 * parameter is present, then <i>ListStreams</i> will return only the streams ARNs for that
 */
ListStreamsResponse * DynamoDBStreamsClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * \class QtAws::DynamoDBStreams::DynamoDBStreamsClientPrivate
 * \brief The DynamoDBStreamsClientPrivate class provides private implementation for DynamoDBStreamsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * Constructs a DynamoDBStreamsClientPrivate object with public implementation \a q.
 */
DynamoDBStreamsClientPrivate::DynamoDBStreamsClientPrivate(DynamoDBStreamsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DynamoDBStreams
} // namespace QtAws
