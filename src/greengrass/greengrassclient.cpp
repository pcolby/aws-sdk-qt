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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Associates a role with a group. The role will be used by the AWS Greengrass core in order to access AWS cloud services.
 */
AssociateRoleToGroupResponse * GreengrassClient::associateRoleToGroup(const AssociateRoleToGroupRequest &request)
{

}

/**
 * Associates a role which is used by AWS Greengrass. AWS Greengrass uses the role to access your Lambda functions and AWS
 * IoT resources. This is necessary for deployments to succeed. It needs to have minimum permissions in policy
 */
AssociateServiceRoleToAccountResponse * GreengrassClient::associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request)
{

}

/**
 * Creates a core definition. You may optionally provide the initial version of the core definition or use
 */
CreateCoreDefinitionResponse * GreengrassClient::createCoreDefinition(const CreateCoreDefinitionRequest &request)
{

}

/**
 * Creates a version of a core definition that has already been defined. AWS Greengrass Groups must each contain exactly 1
 */
CreateCoreDefinitionVersionResponse * GreengrassClient::createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request)
{

}

/**
 */
CreateDeploymentResponse * GreengrassClient::createDeployment(const CreateDeploymentRequest &request)
{

}

/**
 * Creates a device definition. You may optinally provide the initial version of the device definition or use
 */
CreateDeviceDefinitionResponse * GreengrassClient::createDeviceDefinition(const CreateDeviceDefinitionRequest &request)
{

}

/**
 */
CreateDeviceDefinitionVersionResponse * GreengrassClient::createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request)
{

}

/**
 * Creates a Lambda function definition which contains a list of Lambda functions and their configurations to be used in a
 * group. You can create an initial version of the definition by providing a list of Lambda functions and their
 */
CreateFunctionDefinitionResponse * GreengrassClient::createFunctionDefinition(const CreateFunctionDefinitionRequest &request)
{

}

/**
 */
CreateFunctionDefinitionVersionResponse * GreengrassClient::createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request)
{

}

/**
 * Creates a group. You may optionally provide the initial version of the group or use ''CreateGroupVersion'' at a later
 */
CreateGroupResponse * GreengrassClient::createGroup(const CreateGroupRequest &request)
{

}

/**
 */
CreateGroupCertificateAuthorityResponse * GreengrassClient::createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request)
{

}

/**
 */
CreateGroupVersionResponse * GreengrassClient::createGroupVersion(const CreateGroupVersionRequest &request)
{

}

/**
 * Creates a logger definition. You may optionally provide the initial version of the logger definition or use
 */
CreateLoggerDefinitionResponse * GreengrassClient::createLoggerDefinition(const CreateLoggerDefinitionRequest &request)
{

}

/**
 */
CreateLoggerDefinitionVersionResponse * GreengrassClient::createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request)
{

}

/**
 * Creates a resource definition which contains a list of resources to be used in a group. You can create an initial
 */
CreateResourceDefinitionResponse * GreengrassClient::createResourceDefinition(const CreateResourceDefinitionRequest &request)
{

}

/**
 */
CreateResourceDefinitionVersionResponse * GreengrassClient::createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request)
{

}

/**
 */
CreateSoftwareUpdateJobResponse * GreengrassClient::createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request)
{

}

/**
 * Creates a subscription definition. You may optionally provide the initial version of the subscription definition or use
 */
CreateSubscriptionDefinitionResponse * GreengrassClient::createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request)
{

}

/**
 */
CreateSubscriptionDefinitionVersionResponse * GreengrassClient::createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request)
{

}

/**
 */
DeleteCoreDefinitionResponse * GreengrassClient::deleteCoreDefinition(const DeleteCoreDefinitionRequest &request)
{

}

/**
 */
DeleteDeviceDefinitionResponse * GreengrassClient::deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request)
{

}

/**
 */
DeleteFunctionDefinitionResponse * GreengrassClient::deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request)
{

}

/**
 */
DeleteGroupResponse * GreengrassClient::deleteGroup(const DeleteGroupRequest &request)
{

}

/**
 */
DeleteLoggerDefinitionResponse * GreengrassClient::deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request)
{

}

/**
 */
DeleteResourceDefinitionResponse * GreengrassClient::deleteResourceDefinition(const DeleteResourceDefinitionRequest &request)
{

}

/**
 */
DeleteSubscriptionDefinitionResponse * GreengrassClient::deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request)
{

}

/**
 */
DisassociateRoleFromGroupResponse * GreengrassClient::disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request)
{

}

/**
 */
DisassociateServiceRoleFromAccountResponse * GreengrassClient::disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request)
{

}

/**
 */
GetAssociatedRoleResponse * GreengrassClient::getAssociatedRole(const GetAssociatedRoleRequest &request)
{

}

/**
 */
GetConnectivityInfoResponse * GreengrassClient::getConnectivityInfo(const GetConnectivityInfoRequest &request)
{

}

/**
 */
GetCoreDefinitionResponse * GreengrassClient::getCoreDefinition(const GetCoreDefinitionRequest &request)
{

}

/**
 */
GetCoreDefinitionVersionResponse * GreengrassClient::getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request)
{

}

/**
 */
GetDeploymentStatusResponse * GreengrassClient::getDeploymentStatus(const GetDeploymentStatusRequest &request)
{

}

/**
 */
GetDeviceDefinitionResponse * GreengrassClient::getDeviceDefinition(const GetDeviceDefinitionRequest &request)
{

}

/**
 */
GetDeviceDefinitionVersionResponse * GreengrassClient::getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request)
{

}

/**
 */
GetFunctionDefinitionResponse * GreengrassClient::getFunctionDefinition(const GetFunctionDefinitionRequest &request)
{

}

/**
 * Retrieves information about a Lambda function definition version, such as which Lambda functions are included in the
 */
GetFunctionDefinitionVersionResponse * GreengrassClient::getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request)
{

}

/**
 */
GetGroupResponse * GreengrassClient::getGroup(const GetGroupRequest &request)
{

}

/**
 */
GetGroupCertificateAuthorityResponse * GreengrassClient::getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request)
{

}

/**
 */
GetGroupCertificateConfigurationResponse * GreengrassClient::getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request)
{

}

/**
 */
GetGroupVersionResponse * GreengrassClient::getGroupVersion(const GetGroupVersionRequest &request)
{

}

/**
 */
GetLoggerDefinitionResponse * GreengrassClient::getLoggerDefinition(const GetLoggerDefinitionRequest &request)
{

}

/**
 */
GetLoggerDefinitionVersionResponse * GreengrassClient::getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request)
{

}

/**
 */
GetResourceDefinitionResponse * GreengrassClient::getResourceDefinition(const GetResourceDefinitionRequest &request)
{

}

/**
 */
GetResourceDefinitionVersionResponse * GreengrassClient::getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request)
{

}

/**
 */
GetServiceRoleForAccountResponse * GreengrassClient::getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request)
{

}

/**
 */
GetSubscriptionDefinitionResponse * GreengrassClient::getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request)
{

}

/**
 */
GetSubscriptionDefinitionVersionResponse * GreengrassClient::getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request)
{

}

/**
 */
ListCoreDefinitionVersionsResponse * GreengrassClient::listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request)
{

}

/**
 */
ListCoreDefinitionsResponse * GreengrassClient::listCoreDefinitions(const ListCoreDefinitionsRequest &request)
{

}

/**
 */
ListDeploymentsResponse * GreengrassClient::listDeployments(const ListDeploymentsRequest &request)
{

}

/**
 */
ListDeviceDefinitionVersionsResponse * GreengrassClient::listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request)
{

}

/**
 */
ListDeviceDefinitionsResponse * GreengrassClient::listDeviceDefinitions(const ListDeviceDefinitionsRequest &request)
{

}

/**
 */
ListFunctionDefinitionVersionsResponse * GreengrassClient::listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request)
{

}

/**
 */
ListFunctionDefinitionsResponse * GreengrassClient::listFunctionDefinitions(const ListFunctionDefinitionsRequest &request)
{

}

/**
 */
ListGroupCertificateAuthoritiesResponse * GreengrassClient::listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request)
{

}

/**
 */
ListGroupVersionsResponse * GreengrassClient::listGroupVersions(const ListGroupVersionsRequest &request)
{

}

/**
 */
ListGroupsResponse * GreengrassClient::listGroups(const ListGroupsRequest &request)
{

}

/**
 */
ListLoggerDefinitionVersionsResponse * GreengrassClient::listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request)
{

}

/**
 */
ListLoggerDefinitionsResponse * GreengrassClient::listLoggerDefinitions(const ListLoggerDefinitionsRequest &request)
{

}

/**
 */
ListResourceDefinitionVersionsResponse * GreengrassClient::listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request)
{

}

/**
 */
ListResourceDefinitionsResponse * GreengrassClient::listResourceDefinitions(const ListResourceDefinitionsRequest &request)
{

}

/**
 */
ListSubscriptionDefinitionVersionsResponse * GreengrassClient::listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request)
{

}

/**
 */
ListSubscriptionDefinitionsResponse * GreengrassClient::listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request)
{

}

/**
 */
ResetDeploymentsResponse * GreengrassClient::resetDeployments(const ResetDeploymentsRequest &request)
{

}

/**
 * Updates the connectivity information for the core. Any devices that belong to the group which has this core will receive
 */
UpdateConnectivityInfoResponse * GreengrassClient::updateConnectivityInfo(const UpdateConnectivityInfoRequest &request)
{

}

/**
 */
UpdateCoreDefinitionResponse * GreengrassClient::updateCoreDefinition(const UpdateCoreDefinitionRequest &request)
{

}

/**
 */
UpdateDeviceDefinitionResponse * GreengrassClient::updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request)
{

}

/**
 */
UpdateFunctionDefinitionResponse * GreengrassClient::updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request)
{

}

/**
 */
UpdateGroupResponse * GreengrassClient::updateGroup(const UpdateGroupRequest &request)
{

}

/**
 */
UpdateGroupCertificateConfigurationResponse * GreengrassClient::updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request)
{

}

/**
 */
UpdateLoggerDefinitionResponse * GreengrassClient::updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request)
{

}

/**
 */
UpdateResourceDefinitionResponse * GreengrassClient::updateResourceDefinition(const UpdateResourceDefinitionRequest &request)
{

}

/**
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
