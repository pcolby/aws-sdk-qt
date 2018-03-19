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

#include "mqclient.h"
#include "mqclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MQ {

/**
 * @class  MqClient
 *
 * @brief  Client for AmazonMQ
 *
 * Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 * brokers in the cloud. A message broker allows software applications and components to communicate using various
 */

/**
 * @brief  Constructs a new MqClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MqClient::MqClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MqClientPrivate(this), parent)
{
    Q_D(MqClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("mq");
}

/**
 * @brief  Constructs a new MqClient object.
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
MqClient::MqClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MqClientPrivate(this), parent)
{
    Q_D(MqClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("mq");
}

/// @todo override getEndpoint() to use mq.

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBrokerResponse * MqClient::createBroker(const CreateBrokerRequest &request)
{

}

/**
 * Creates a new configuration for the specified configuration name. Amazon MQ uses the default configuration (the engine
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConfigurationResponse * MqClient::createConfiguration(const CreateConfigurationRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserResponse * MqClient::createUser(const CreateUserRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBrokerResponse * MqClient::deleteBroker(const DeleteBrokerRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserResponse * MqClient::deleteUser(const DeleteUserRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeBrokerResponse * MqClient::describeBroker(const DescribeBrokerRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationResponse * MqClient::describeConfiguration(const DescribeConfigurationRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConfigurationRevisionResponse * MqClient::describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserResponse * MqClient::describeUser(const DescribeUserRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBrokersResponse * MqClient::listBrokers(const ListBrokersRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConfigurationRevisionsResponse * MqClient::listConfigurationRevisions(const ListConfigurationRevisionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListConfigurationsResponse * MqClient::listConfigurations(const ListConfigurationsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUsersResponse * MqClient::listUsers(const ListUsersRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootBrokerResponse * MqClient::rebootBroker(const RebootBrokerRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateBrokerResponse * MqClient::updateBroker(const UpdateBrokerRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConfigurationResponse * MqClient::updateConfiguration(const UpdateConfigurationRequest &request)
{

}

/**
 *
 * @param  request Request to send to AmazonMQ.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserResponse * MqClient::updateUser(const UpdateUserRequest &request)
{

}

/**
 * @internal
 *
 * @class  MqClientPrivate
 *
 * @brief  Private implementation for MqClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MqClientPrivate object.
 *
 * @param  q  Pointer to this object's public MqClient instance.
 */
MqClientPrivate::MqClientPrivate(MqClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MQ
} // namespace AWS
