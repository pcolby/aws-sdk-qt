// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONCLIENT_H
#define QTAWS_PROTONCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsprotonglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Proton {

class ProtonClientPrivate;
class AcceptEnvironmentAccountConnectionRequest;
class AcceptEnvironmentAccountConnectionResponse;
class CancelComponentDeploymentRequest;
class CancelComponentDeploymentResponse;
class CancelEnvironmentDeploymentRequest;
class CancelEnvironmentDeploymentResponse;
class CancelServiceInstanceDeploymentRequest;
class CancelServiceInstanceDeploymentResponse;
class CancelServicePipelineDeploymentRequest;
class CancelServicePipelineDeploymentResponse;
class CreateComponentRequest;
class CreateComponentResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreateEnvironmentAccountConnectionRequest;
class CreateEnvironmentAccountConnectionResponse;
class CreateEnvironmentTemplateRequest;
class CreateEnvironmentTemplateResponse;
class CreateEnvironmentTemplateVersionRequest;
class CreateEnvironmentTemplateVersionResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class CreateServiceTemplateRequest;
class CreateServiceTemplateResponse;
class CreateServiceTemplateVersionRequest;
class CreateServiceTemplateVersionResponse;
class CreateTemplateSyncConfigRequest;
class CreateTemplateSyncConfigResponse;
class DeleteComponentRequest;
class DeleteComponentResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class DeleteEnvironmentAccountConnectionRequest;
class DeleteEnvironmentAccountConnectionResponse;
class DeleteEnvironmentTemplateRequest;
class DeleteEnvironmentTemplateResponse;
class DeleteEnvironmentTemplateVersionRequest;
class DeleteEnvironmentTemplateVersionResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class DeleteServiceTemplateRequest;
class DeleteServiceTemplateResponse;
class DeleteServiceTemplateVersionRequest;
class DeleteServiceTemplateVersionResponse;
class DeleteTemplateSyncConfigRequest;
class DeleteTemplateSyncConfigResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetComponentRequest;
class GetComponentResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class GetEnvironmentAccountConnectionRequest;
class GetEnvironmentAccountConnectionResponse;
class GetEnvironmentTemplateRequest;
class GetEnvironmentTemplateResponse;
class GetEnvironmentTemplateVersionRequest;
class GetEnvironmentTemplateVersionResponse;
class GetRepositoryRequest;
class GetRepositoryResponse;
class GetRepositorySyncStatusRequest;
class GetRepositorySyncStatusResponse;
class GetServiceRequest;
class GetServiceResponse;
class GetServiceInstanceRequest;
class GetServiceInstanceResponse;
class GetServiceTemplateRequest;
class GetServiceTemplateResponse;
class GetServiceTemplateVersionRequest;
class GetServiceTemplateVersionResponse;
class GetTemplateSyncConfigRequest;
class GetTemplateSyncConfigResponse;
class GetTemplateSyncStatusRequest;
class GetTemplateSyncStatusResponse;
class ListComponentOutputsRequest;
class ListComponentOutputsResponse;
class ListComponentProvisionedResourcesRequest;
class ListComponentProvisionedResourcesResponse;
class ListComponentsRequest;
class ListComponentsResponse;
class ListEnvironmentAccountConnectionsRequest;
class ListEnvironmentAccountConnectionsResponse;
class ListEnvironmentOutputsRequest;
class ListEnvironmentOutputsResponse;
class ListEnvironmentProvisionedResourcesRequest;
class ListEnvironmentProvisionedResourcesResponse;
class ListEnvironmentTemplateVersionsRequest;
class ListEnvironmentTemplateVersionsResponse;
class ListEnvironmentTemplatesRequest;
class ListEnvironmentTemplatesResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListRepositoriesRequest;
class ListRepositoriesResponse;
class ListRepositorySyncDefinitionsRequest;
class ListRepositorySyncDefinitionsResponse;
class ListServiceInstanceOutputsRequest;
class ListServiceInstanceOutputsResponse;
class ListServiceInstanceProvisionedResourcesRequest;
class ListServiceInstanceProvisionedResourcesResponse;
class ListServiceInstancesRequest;
class ListServiceInstancesResponse;
class ListServicePipelineOutputsRequest;
class ListServicePipelineOutputsResponse;
class ListServicePipelineProvisionedResourcesRequest;
class ListServicePipelineProvisionedResourcesResponse;
class ListServiceTemplateVersionsRequest;
class ListServiceTemplateVersionsResponse;
class ListServiceTemplatesRequest;
class ListServiceTemplatesResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class NotifyResourceDeploymentStatusChangeRequest;
class NotifyResourceDeploymentStatusChangeResponse;
class RejectEnvironmentAccountConnectionRequest;
class RejectEnvironmentAccountConnectionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccountSettingsRequest;
class UpdateAccountSettingsResponse;
class UpdateComponentRequest;
class UpdateComponentResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;
class UpdateEnvironmentAccountConnectionRequest;
class UpdateEnvironmentAccountConnectionResponse;
class UpdateEnvironmentTemplateRequest;
class UpdateEnvironmentTemplateResponse;
class UpdateEnvironmentTemplateVersionRequest;
class UpdateEnvironmentTemplateVersionResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;
class UpdateServiceInstanceRequest;
class UpdateServiceInstanceResponse;
class UpdateServicePipelineRequest;
class UpdateServicePipelineResponse;
class UpdateServiceTemplateRequest;
class UpdateServiceTemplateResponse;
class UpdateServiceTemplateVersionRequest;
class UpdateServiceTemplateVersionResponse;
class UpdateTemplateSyncConfigRequest;
class UpdateTemplateSyncConfigResponse;

class QTAWSPROTON_EXPORT ProtonClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ProtonClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ProtonClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptEnvironmentAccountConnectionResponse * acceptEnvironmentAccountConnection(const AcceptEnvironmentAccountConnectionRequest &request);
    CancelComponentDeploymentResponse * cancelComponentDeployment(const CancelComponentDeploymentRequest &request);
    CancelEnvironmentDeploymentResponse * cancelEnvironmentDeployment(const CancelEnvironmentDeploymentRequest &request);
    CancelServiceInstanceDeploymentResponse * cancelServiceInstanceDeployment(const CancelServiceInstanceDeploymentRequest &request);
    CancelServicePipelineDeploymentResponse * cancelServicePipelineDeployment(const CancelServicePipelineDeploymentRequest &request);
    CreateComponentResponse * createComponent(const CreateComponentRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateEnvironmentAccountConnectionResponse * createEnvironmentAccountConnection(const CreateEnvironmentAccountConnectionRequest &request);
    CreateEnvironmentTemplateResponse * createEnvironmentTemplate(const CreateEnvironmentTemplateRequest &request);
    CreateEnvironmentTemplateVersionResponse * createEnvironmentTemplateVersion(const CreateEnvironmentTemplateVersionRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    CreateServiceTemplateResponse * createServiceTemplate(const CreateServiceTemplateRequest &request);
    CreateServiceTemplateVersionResponse * createServiceTemplateVersion(const CreateServiceTemplateVersionRequest &request);
    CreateTemplateSyncConfigResponse * createTemplateSyncConfig(const CreateTemplateSyncConfigRequest &request);
    DeleteComponentResponse * deleteComponent(const DeleteComponentRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteEnvironmentAccountConnectionResponse * deleteEnvironmentAccountConnection(const DeleteEnvironmentAccountConnectionRequest &request);
    DeleteEnvironmentTemplateResponse * deleteEnvironmentTemplate(const DeleteEnvironmentTemplateRequest &request);
    DeleteEnvironmentTemplateVersionResponse * deleteEnvironmentTemplateVersion(const DeleteEnvironmentTemplateVersionRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeleteServiceTemplateResponse * deleteServiceTemplate(const DeleteServiceTemplateRequest &request);
    DeleteServiceTemplateVersionResponse * deleteServiceTemplateVersion(const DeleteServiceTemplateVersionRequest &request);
    DeleteTemplateSyncConfigResponse * deleteTemplateSyncConfig(const DeleteTemplateSyncConfigRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetComponentResponse * getComponent(const GetComponentRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    GetEnvironmentAccountConnectionResponse * getEnvironmentAccountConnection(const GetEnvironmentAccountConnectionRequest &request);
    GetEnvironmentTemplateResponse * getEnvironmentTemplate(const GetEnvironmentTemplateRequest &request);
    GetEnvironmentTemplateVersionResponse * getEnvironmentTemplateVersion(const GetEnvironmentTemplateVersionRequest &request);
    GetRepositoryResponse * getRepository(const GetRepositoryRequest &request);
    GetRepositorySyncStatusResponse * getRepositorySyncStatus(const GetRepositorySyncStatusRequest &request);
    GetServiceResponse * getService(const GetServiceRequest &request);
    GetServiceInstanceResponse * getServiceInstance(const GetServiceInstanceRequest &request);
    GetServiceTemplateResponse * getServiceTemplate(const GetServiceTemplateRequest &request);
    GetServiceTemplateVersionResponse * getServiceTemplateVersion(const GetServiceTemplateVersionRequest &request);
    GetTemplateSyncConfigResponse * getTemplateSyncConfig(const GetTemplateSyncConfigRequest &request);
    GetTemplateSyncStatusResponse * getTemplateSyncStatus(const GetTemplateSyncStatusRequest &request);
    ListComponentOutputsResponse * listComponentOutputs(const ListComponentOutputsRequest &request);
    ListComponentProvisionedResourcesResponse * listComponentProvisionedResources(const ListComponentProvisionedResourcesRequest &request);
    ListComponentsResponse * listComponents(const ListComponentsRequest &request);
    ListEnvironmentAccountConnectionsResponse * listEnvironmentAccountConnections(const ListEnvironmentAccountConnectionsRequest &request);
    ListEnvironmentOutputsResponse * listEnvironmentOutputs(const ListEnvironmentOutputsRequest &request);
    ListEnvironmentProvisionedResourcesResponse * listEnvironmentProvisionedResources(const ListEnvironmentProvisionedResourcesRequest &request);
    ListEnvironmentTemplateVersionsResponse * listEnvironmentTemplateVersions(const ListEnvironmentTemplateVersionsRequest &request);
    ListEnvironmentTemplatesResponse * listEnvironmentTemplates(const ListEnvironmentTemplatesRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListRepositoriesResponse * listRepositories(const ListRepositoriesRequest &request);
    ListRepositorySyncDefinitionsResponse * listRepositorySyncDefinitions(const ListRepositorySyncDefinitionsRequest &request);
    ListServiceInstanceOutputsResponse * listServiceInstanceOutputs(const ListServiceInstanceOutputsRequest &request);
    ListServiceInstanceProvisionedResourcesResponse * listServiceInstanceProvisionedResources(const ListServiceInstanceProvisionedResourcesRequest &request);
    ListServiceInstancesResponse * listServiceInstances(const ListServiceInstancesRequest &request);
    ListServicePipelineOutputsResponse * listServicePipelineOutputs(const ListServicePipelineOutputsRequest &request);
    ListServicePipelineProvisionedResourcesResponse * listServicePipelineProvisionedResources(const ListServicePipelineProvisionedResourcesRequest &request);
    ListServiceTemplateVersionsResponse * listServiceTemplateVersions(const ListServiceTemplateVersionsRequest &request);
    ListServiceTemplatesResponse * listServiceTemplates(const ListServiceTemplatesRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    NotifyResourceDeploymentStatusChangeResponse * notifyResourceDeploymentStatusChange(const NotifyResourceDeploymentStatusChangeRequest &request);
    RejectEnvironmentAccountConnectionResponse * rejectEnvironmentAccountConnection(const RejectEnvironmentAccountConnectionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccountSettingsResponse * updateAccountSettings(const UpdateAccountSettingsRequest &request);
    UpdateComponentResponse * updateComponent(const UpdateComponentRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateEnvironmentAccountConnectionResponse * updateEnvironmentAccountConnection(const UpdateEnvironmentAccountConnectionRequest &request);
    UpdateEnvironmentTemplateResponse * updateEnvironmentTemplate(const UpdateEnvironmentTemplateRequest &request);
    UpdateEnvironmentTemplateVersionResponse * updateEnvironmentTemplateVersion(const UpdateEnvironmentTemplateVersionRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);
    UpdateServiceInstanceResponse * updateServiceInstance(const UpdateServiceInstanceRequest &request);
    UpdateServicePipelineResponse * updateServicePipeline(const UpdateServicePipelineRequest &request);
    UpdateServiceTemplateResponse * updateServiceTemplate(const UpdateServiceTemplateRequest &request);
    UpdateServiceTemplateVersionResponse * updateServiceTemplateVersion(const UpdateServiceTemplateVersionRequest &request);
    UpdateTemplateSyncConfigResponse * updateTemplateSyncConfig(const UpdateTemplateSyncConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(ProtonClient)
    Q_DISABLE_COPY(ProtonClient)

};

} // namespace Proton
} // namespace QtAws

#endif
