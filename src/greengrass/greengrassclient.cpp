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

#include "greengrassclient.h"
#include "greengrassclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Greengrass {

/**
 * @class  GreengrassClient
 *
 * @brief  Client for AWS Greengrass
 *
 * AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 * still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 * quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 */

/**
 * @brief  Constructs a new GreengrassClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
GreengrassClient::GreengrassClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GreengrassClientPrivate(this), parent)
{
    Q_D(GreengrassClient);
    d->apiVersion = QStringLiteral("2017-06-07");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Greengrass");
    d->serviceName = QStringLiteral("greengrass");
}

/**
 * @brief  Constructs a new GreengrassClient object.
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
GreengrassClient::GreengrassClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GreengrassClientPrivate(this), parent)
{
    Q_D(GreengrassClient);
    d->apiVersion = QStringLiteral("2017-06-07");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("greengrass");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Greengrass");
    d->serviceName = QStringLiteral("greengrass");
}

/// @todo override getEndpoint() to use greengrass.

/**
 * Associates a role with a group. The role will be used by the AWS Greengrass core in order to access AWS cloud services.
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateRoleToGroupResponse * GreengrassClient::associateRoleToGroup(const AssociateRoleToGroupRequest &request)
{

}

/**
 * Associates a role which is used by AWS Greengrass. AWS Greengrass uses the role to access your Lambda functions and AWS
 * IoT resources. This is necessary for deployments to succeed. It needs to have minimum permissions in policy
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateServiceRoleToAccountResponse * GreengrassClient::associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request)
{

}

/**
 * Creates a core definition. You may optionally provide the initial version of the core definition or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCoreDefinitionResponse * GreengrassClient::createCoreDefinition(const CreateCoreDefinitionRequest &request)
{

}

/**
 * Creates a version of a core definition that has already been defined. AWS Greengrass Groups must each contain exactly 1
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCoreDefinitionVersionResponse * GreengrassClient::createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeploymentResponse * GreengrassClient::createDeployment(const CreateDeploymentRequest &request)
{

}

/**
 * Creates a device definition. You may optinally provide the initial version of the device definition or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeviceDefinitionResponse * GreengrassClient::createDeviceDefinition(const CreateDeviceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDeviceDefinitionVersionResponse * GreengrassClient::createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request)
{

}

/**
 * Creates a Lambda function definition which contains a list of Lambda functions and their configurations to be used in a
 * group. You can create an initial version of the definition by providing a list of Lambda functions and their
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFunctionDefinitionResponse * GreengrassClient::createFunctionDefinition(const CreateFunctionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateFunctionDefinitionVersionResponse * GreengrassClient::createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request)
{

}

/**
 * Creates a group. You may optionally provide the initial version of the group or use ''CreateGroupVersion'' at a later
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * GreengrassClient::createGroup(const CreateGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupCertificateAuthorityResponse * GreengrassClient::createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupVersionResponse * GreengrassClient::createGroupVersion(const CreateGroupVersionRequest &request)
{

}

/**
 * Creates a logger definition. You may optionally provide the initial version of the logger definition or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoggerDefinitionResponse * GreengrassClient::createLoggerDefinition(const CreateLoggerDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoggerDefinitionVersionResponse * GreengrassClient::createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request)
{

}

/**
 * Creates a resource definition which contains a list of resources to be used in a group. You can create an initial
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceDefinitionResponse * GreengrassClient::createResourceDefinition(const CreateResourceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceDefinitionVersionResponse * GreengrassClient::createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSoftwareUpdateJobResponse * GreengrassClient::createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request)
{

}

/**
 * Creates a subscription definition. You may optionally provide the initial version of the subscription definition or use
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubscriptionDefinitionResponse * GreengrassClient::createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSubscriptionDefinitionVersionResponse * GreengrassClient::createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCoreDefinitionResponse * GreengrassClient::deleteCoreDefinition(const DeleteCoreDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDeviceDefinitionResponse * GreengrassClient::deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteFunctionDefinitionResponse * GreengrassClient::deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * GreengrassClient::deleteGroup(const DeleteGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoggerDefinitionResponse * GreengrassClient::deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourceDefinitionResponse * GreengrassClient::deleteResourceDefinition(const DeleteResourceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSubscriptionDefinitionResponse * GreengrassClient::deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateRoleFromGroupResponse * GreengrassClient::disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateServiceRoleFromAccountResponse * GreengrassClient::disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAssociatedRoleResponse * GreengrassClient::getAssociatedRole(const GetAssociatedRoleRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetConnectivityInfoResponse * GreengrassClient::getConnectivityInfo(const GetConnectivityInfoRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCoreDefinitionResponse * GreengrassClient::getCoreDefinition(const GetCoreDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCoreDefinitionVersionResponse * GreengrassClient::getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeploymentStatusResponse * GreengrassClient::getDeploymentStatus(const GetDeploymentStatusRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceDefinitionResponse * GreengrassClient::getDeviceDefinition(const GetDeviceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceDefinitionVersionResponse * GreengrassClient::getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionDefinitionResponse * GreengrassClient::getFunctionDefinition(const GetFunctionDefinitionRequest &request)
{

}

/**
 * Retrieves information about a Lambda function definition version, such as which Lambda functions are included in the
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetFunctionDefinitionVersionResponse * GreengrassClient::getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupResponse * GreengrassClient::getGroup(const GetGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupCertificateAuthorityResponse * GreengrassClient::getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupCertificateConfigurationResponse * GreengrassClient::getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupVersionResponse * GreengrassClient::getGroupVersion(const GetGroupVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoggerDefinitionResponse * GreengrassClient::getLoggerDefinition(const GetLoggerDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetLoggerDefinitionVersionResponse * GreengrassClient::getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceDefinitionResponse * GreengrassClient::getResourceDefinition(const GetResourceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResourceDefinitionVersionResponse * GreengrassClient::getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServiceRoleForAccountResponse * GreengrassClient::getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionDefinitionResponse * GreengrassClient::getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSubscriptionDefinitionVersionResponse * GreengrassClient::getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCoreDefinitionVersionsResponse * GreengrassClient::listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCoreDefinitionsResponse * GreengrassClient::listCoreDefinitions(const ListCoreDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeploymentsResponse * GreengrassClient::listDeployments(const ListDeploymentsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeviceDefinitionVersionsResponse * GreengrassClient::listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeviceDefinitionsResponse * GreengrassClient::listDeviceDefinitions(const ListDeviceDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFunctionDefinitionVersionsResponse * GreengrassClient::listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListFunctionDefinitionsResponse * GreengrassClient::listFunctionDefinitions(const ListFunctionDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupCertificateAuthoritiesResponse * GreengrassClient::listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupVersionsResponse * GreengrassClient::listGroupVersions(const ListGroupVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * GreengrassClient::listGroups(const ListGroupsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLoggerDefinitionVersionsResponse * GreengrassClient::listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListLoggerDefinitionsResponse * GreengrassClient::listLoggerDefinitions(const ListLoggerDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceDefinitionVersionsResponse * GreengrassClient::listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceDefinitionsResponse * GreengrassClient::listResourceDefinitions(const ListResourceDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionDefinitionVersionsResponse * GreengrassClient::listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSubscriptionDefinitionsResponse * GreengrassClient::listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetDeploymentsResponse * GreengrassClient::resetDeployments(const ResetDeploymentsRequest &request)
{

}

/**
 * Updates the connectivity information for the core. Any devices that belong to the group which has this core will receive
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConnectivityInfoResponse * GreengrassClient::updateConnectivityInfo(const UpdateConnectivityInfoRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCoreDefinitionResponse * GreengrassClient::updateCoreDefinition(const UpdateCoreDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeviceDefinitionResponse * GreengrassClient::updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateFunctionDefinitionResponse * GreengrassClient::updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupResponse * GreengrassClient::updateGroup(const UpdateGroupRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupCertificateConfigurationResponse * GreengrassClient::updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateLoggerDefinitionResponse * GreengrassClient::updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResourceDefinitionResponse * GreengrassClient::updateResourceDefinition(const UpdateResourceDefinitionRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Greengrass.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSubscriptionDefinitionResponse * GreengrassClient::updateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest &request)
{

}

/**
 * @internal
 *
 * @class  GreengrassClientPrivate
 *
 * @brief  Private implementation for GreengrassClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GreengrassClientPrivate object.
 *
 * @param  q  Pointer to this object's public GreengrassClient instance.
 */
GreengrassClientPrivate::GreengrassClientPrivate(GreengrassClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Greengrass
} // namespace AWS
