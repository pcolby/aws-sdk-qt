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

#ifndef QTAWS_GREENGRASSCLIENT_H
#define QTAWS_GREENGRASSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Greengrass {

class GreengrassClientPrivate;

class QTAWS_EXPORT GreengrassClient : public AwsAbstractClient {
    Q_OBJECT

public:
    GreengrassClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GreengrassClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateRoleToGroupResponse * associateRoleToGroup(const AssociateRoleToGroupRequest &request);
    AssociateServiceRoleToAccountResponse * associateServiceRoleToAccount(const AssociateServiceRoleToAccountRequest &request);
    CreateCoreDefinitionResponse * createCoreDefinition(const CreateCoreDefinitionRequest &request);
    CreateCoreDefinitionVersionResponse * createCoreDefinitionVersion(const CreateCoreDefinitionVersionRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDeviceDefinitionResponse * createDeviceDefinition(const CreateDeviceDefinitionRequest &request);
    CreateDeviceDefinitionVersionResponse * createDeviceDefinitionVersion(const CreateDeviceDefinitionVersionRequest &request);
    CreateFunctionDefinitionResponse * createFunctionDefinition(const CreateFunctionDefinitionRequest &request);
    CreateFunctionDefinitionVersionResponse * createFunctionDefinitionVersion(const CreateFunctionDefinitionVersionRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateGroupCertificateAuthorityResponse * createGroupCertificateAuthority(const CreateGroupCertificateAuthorityRequest &request);
    CreateGroupVersionResponse * createGroupVersion(const CreateGroupVersionRequest &request);
    CreateLoggerDefinitionResponse * createLoggerDefinition(const CreateLoggerDefinitionRequest &request);
    CreateLoggerDefinitionVersionResponse * createLoggerDefinitionVersion(const CreateLoggerDefinitionVersionRequest &request);
    CreateResourceDefinitionResponse * createResourceDefinition(const CreateResourceDefinitionRequest &request);
    CreateResourceDefinitionVersionResponse * createResourceDefinitionVersion(const CreateResourceDefinitionVersionRequest &request);
    CreateSoftwareUpdateJobResponse * createSoftwareUpdateJob(const CreateSoftwareUpdateJobRequest &request);
    CreateSubscriptionDefinitionResponse * createSubscriptionDefinition(const CreateSubscriptionDefinitionRequest &request);
    CreateSubscriptionDefinitionVersionResponse * createSubscriptionDefinitionVersion(const CreateSubscriptionDefinitionVersionRequest &request);
    DeleteCoreDefinitionResponse * deleteCoreDefinition(const DeleteCoreDefinitionRequest &request);
    DeleteDeviceDefinitionResponse * deleteDeviceDefinition(const DeleteDeviceDefinitionRequest &request);
    DeleteFunctionDefinitionResponse * deleteFunctionDefinition(const DeleteFunctionDefinitionRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteLoggerDefinitionResponse * deleteLoggerDefinition(const DeleteLoggerDefinitionRequest &request);
    DeleteResourceDefinitionResponse * deleteResourceDefinition(const DeleteResourceDefinitionRequest &request);
    DeleteSubscriptionDefinitionResponse * deleteSubscriptionDefinition(const DeleteSubscriptionDefinitionRequest &request);
    DisassociateRoleFromGroupResponse * disassociateRoleFromGroup(const DisassociateRoleFromGroupRequest &request);
    DisassociateServiceRoleFromAccountResponse * disassociateServiceRoleFromAccount(const DisassociateServiceRoleFromAccountRequest &request);
    GetAssociatedRoleResponse * getAssociatedRole(const GetAssociatedRoleRequest &request);
    GetConnectivityInfoResponse * getConnectivityInfo(const GetConnectivityInfoRequest &request);
    GetCoreDefinitionResponse * getCoreDefinition(const GetCoreDefinitionRequest &request);
    GetCoreDefinitionVersionResponse * getCoreDefinitionVersion(const GetCoreDefinitionVersionRequest &request);
    GetDeploymentStatusResponse * getDeploymentStatus(const GetDeploymentStatusRequest &request);
    GetDeviceDefinitionResponse * getDeviceDefinition(const GetDeviceDefinitionRequest &request);
    GetDeviceDefinitionVersionResponse * getDeviceDefinitionVersion(const GetDeviceDefinitionVersionRequest &request);
    GetFunctionDefinitionResponse * getFunctionDefinition(const GetFunctionDefinitionRequest &request);
    GetFunctionDefinitionVersionResponse * getFunctionDefinitionVersion(const GetFunctionDefinitionVersionRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupCertificateAuthorityResponse * getGroupCertificateAuthority(const GetGroupCertificateAuthorityRequest &request);
    GetGroupCertificateConfigurationResponse * getGroupCertificateConfiguration(const GetGroupCertificateConfigurationRequest &request);
    GetGroupVersionResponse * getGroupVersion(const GetGroupVersionRequest &request);
    GetLoggerDefinitionResponse * getLoggerDefinition(const GetLoggerDefinitionRequest &request);
    GetLoggerDefinitionVersionResponse * getLoggerDefinitionVersion(const GetLoggerDefinitionVersionRequest &request);
    GetResourceDefinitionResponse * getResourceDefinition(const GetResourceDefinitionRequest &request);
    GetResourceDefinitionVersionResponse * getResourceDefinitionVersion(const GetResourceDefinitionVersionRequest &request);
    GetServiceRoleForAccountResponse * getServiceRoleForAccount(const GetServiceRoleForAccountRequest &request);
    GetSubscriptionDefinitionResponse * getSubscriptionDefinition(const GetSubscriptionDefinitionRequest &request);
    GetSubscriptionDefinitionVersionResponse * getSubscriptionDefinitionVersion(const GetSubscriptionDefinitionVersionRequest &request);
    ListCoreDefinitionVersionsResponse * listCoreDefinitionVersions(const ListCoreDefinitionVersionsRequest &request);
    ListCoreDefinitionsResponse * listCoreDefinitions(const ListCoreDefinitionsRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListDeviceDefinitionVersionsResponse * listDeviceDefinitionVersions(const ListDeviceDefinitionVersionsRequest &request);
    ListDeviceDefinitionsResponse * listDeviceDefinitions(const ListDeviceDefinitionsRequest &request);
    ListFunctionDefinitionVersionsResponse * listFunctionDefinitionVersions(const ListFunctionDefinitionVersionsRequest &request);
    ListFunctionDefinitionsResponse * listFunctionDefinitions(const ListFunctionDefinitionsRequest &request);
    ListGroupCertificateAuthoritiesResponse * listGroupCertificateAuthorities(const ListGroupCertificateAuthoritiesRequest &request);
    ListGroupVersionsResponse * listGroupVersions(const ListGroupVersionsRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListLoggerDefinitionVersionsResponse * listLoggerDefinitionVersions(const ListLoggerDefinitionVersionsRequest &request);
    ListLoggerDefinitionsResponse * listLoggerDefinitions(const ListLoggerDefinitionsRequest &request);
    ListResourceDefinitionVersionsResponse * listResourceDefinitionVersions(const ListResourceDefinitionVersionsRequest &request);
    ListResourceDefinitionsResponse * listResourceDefinitions(const ListResourceDefinitionsRequest &request);
    ListSubscriptionDefinitionVersionsResponse * listSubscriptionDefinitionVersions(const ListSubscriptionDefinitionVersionsRequest &request);
    ListSubscriptionDefinitionsResponse * listSubscriptionDefinitions(const ListSubscriptionDefinitionsRequest &request);
    ResetDeploymentsResponse * resetDeployments(const ResetDeploymentsRequest &request);
    UpdateConnectivityInfoResponse * updateConnectivityInfo(const UpdateConnectivityInfoRequest &request);
    UpdateCoreDefinitionResponse * updateCoreDefinition(const UpdateCoreDefinitionRequest &request);
    UpdateDeviceDefinitionResponse * updateDeviceDefinition(const UpdateDeviceDefinitionRequest &request);
    UpdateFunctionDefinitionResponse * updateFunctionDefinition(const UpdateFunctionDefinitionRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateGroupCertificateConfigurationResponse * updateGroupCertificateConfiguration(const UpdateGroupCertificateConfigurationRequest &request);
    UpdateLoggerDefinitionResponse * updateLoggerDefinition(const UpdateLoggerDefinitionRequest &request);
    UpdateResourceDefinitionResponse * updateResourceDefinition(const UpdateResourceDefinitionRequest &request);
    UpdateSubscriptionDefinitionResponse * updateSubscriptionDefinition(const UpdateSubscriptionDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(GreengrassClient)
    Q_DISABLE_COPY(GreengrassClient)

};

} // namespace Greengrass
} // namespace AWS

#endif
