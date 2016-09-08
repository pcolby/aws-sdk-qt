/*
    Copyright 2013-2016 Paul Colby

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

#include "dynamodbstreamsclient.h"
#include "dynamodbstreamsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  DynamoDBStreamsClient
 *
 * <fullname>Amazon DynamoDB Streams</fullname> <p>This is the Amazon DynamoDB Streams API Reference. This guide describes the low-level API actions for accessing streams and processing stream records. For information about application development with DynamoDB Streams, see the <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide//Streams.html">Amazon DynamoDB Developer Guide</a>.</p> <p>Note that this document is intended for use with the following DynamoDB documentation:</p> <ul> <li> <p> <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/">Amazon DynamoDB Developer Guide</a> </p> </li> <li> <p> <a href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/">Amazon DynamoDB API Reference</a> </p> </li> </ul> <p>The following are short descriptions of each low-level DynamoDB Streams API action, organized by function.</p> <ul> <li><p><i>DescribeStream</i> - Returns detailed information about a particular stream.</p></li> <li> <p><i>GetRecords</i> - Retrieves the stream records from within a shard.</p> </li> <li> <p><i>GetShardIterator</i> - Returns information on how to retrieve the streams record from a shard with a given shard ID.</p> </li> <li> <p><i>ListStreams</i> - Returns a list of all the streams associated with the current AWS account and endpoint.</p> </li> </ul>
 */

/**
 * @brief  Constructs a new DynamoDBStreamsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DynamoDBStreamsClient::DynamoDBStreamsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DynamoDBStreamsClientPrivate(this), parent)
{
    Q_D(DynamoDBStreamsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new DynamoDBStreamsClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
DynamoDBStreamsClient::DynamoDBStreamsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DynamoDBStreamsClientPrivate(this), parent)
{
    Q_D(DynamoDBStreamsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  DynamoDBStreamsClientPrivate
 *
 * @brief  Private implementation for DynamoDBStreamsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DynamoDBStreamsClientPrivate object.
 *
 * @param  q  Pointer to this object's public DynamoDBStreamsClient instance.
 */
DynamoDBStreamsClientPrivate::DynamoDBStreamsClientPrivate(DynamoDBStreamsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    /// @todo Get signature version from API description.
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
