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

#include "dynamodbclient.h"
#include "dynamodbclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DynamoDB {

/**
 * @class  DynamoDBClient
 *
 * @brief  Client for Amazon DynamoDB
 *
 * <fullname>Amazon DynamoDB</fullname>
 *
 * Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 * scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 * that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 * cluster
 *
 * scaling>
 *
 * With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 * request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 * degradation, and use the AWS Management Console to monitor resource utilization and performance
 *
 * metrics>
 *
 * DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 * throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 * solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 * built-in high availability and data durability.
 */

/**
 * @brief  Constructs a new DynamoDBClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DynamoDBClient::DynamoDBClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DynamoDBClientPrivate(this), parent)
{
    Q_D(DynamoDBClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new DynamoDBClient object.
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
DynamoDBClient::DynamoDBClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DynamoDBClientPrivate(this), parent)
{
    Q_D(DynamoDBClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  DynamoDBClientPrivate
 *
 * @brief  Private implementation for DynamoDBClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DynamoDBClientPrivate object.
 *
 * @param  q  Pointer to this object's public DynamoDBClient instance.
 */
DynamoDBClientPrivate::DynamoDBClientPrivate(DynamoDBClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DynamoDB
} // namespace AWS
