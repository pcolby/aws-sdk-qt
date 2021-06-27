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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PROTONCLIENT_H
#define QTAWS_PROTONCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Proton {

class ProtonClientPrivate;
class AcceptEnvironmentAccountConnectionRequest;
class AcceptEnvironmentAccountConnectionResponse;
class CancelEnvironmentDeploymentRequest;
class CancelEnvironmentDeploymentResponse;
class CancelServiceInstanceDeploymentRequest;
class CancelServiceInstanceDeploymentResponse;
class CancelServicePipelineDeploymentRequest;
class CancelServicePipelineDeploymentResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreateEnvironmentAccountConnectionRequest;
class CreateEnvironmentAccountConnectionResponse;
class CreateEnvironmentTemplateRequest;
class CreateEnvironmentTemplateResponse;
class CreateEnvironmentTemplateVersionRequest;
class CreateEnvironmentTemplateVersionResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class CreateServiceTemplateRequest;
class CreateServiceTemplateResponse;
class CreateServiceTemplateVersionRequest;
class CreateServiceTemplateVersionResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class DeleteEnvironmentAccountConnectionRequest;
class DeleteEnvironmentAccountConnectionResponse;
class DeleteEnvironmentTemplateRequest;
class DeleteEnvironmentTemplateResponse;
class DeleteEnvironmentTemplateVersionRequest;
class DeleteEnvironmentTemplateVersionResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class DeleteServiceTemplateRequest;
class DeleteServiceTemplateResponse;
class DeleteServiceTemplateVersionRequest;
class DeleteServiceTemplateVersionResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class GetEnvironmentAccountConnectionRequest;
class GetEnvironmentAccountConnectionResponse;
class GetEnvironmentTemplateRequest;
class GetEnvironmentTemplateResponse;
class GetEnvironmentTemplateVersionRequest;
class GetEnvironmentTemplateVersionResponse;
class GetServiceRequest;
class GetServiceResponse;
class GetServiceInstanceRequest;
class GetServiceInstanceResponse;
class GetServiceTemplateRequest;
class GetServiceTemplateResponse;
class GetServiceTemplateVersionRequest;
class GetServiceTemplateVersionResponse;
class ListEnvironmentAccountConnectionsRequest;
class ListEnvironmentAccountConnectionsResponse;
class ListEnvironmentTemplateVersionsRequest;
class ListEnvironmentTemplateVersionsResponse;
class ListEnvironmentTemplatesRequest;
class ListEnvironmentTemplatesResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListServiceInstancesRequest;
class ListServiceInstancesResponse;
class ListServiceTemplateVersionsRequest;
class ListServiceTemplateVersionsResponse;
class ListServiceTemplatesRequest;
class ListServiceTemplatesResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RejectEnvironmentAccountConnectionRequest;
class RejectEnvironmentAccountConnectionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccountSettingsRequest;
class UpdateAccountSettingsResponse;
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

class QTAWS_EXPORT ProtonClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ProtonClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ProtonClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptEnvironmentAccountConnectionResponse * acceptEnvironmentAccountConnection(const AcceptEnvironmentAccountConnectionRequest &request);
    CancelEnvironmentDeploymentResponse * cancelEnvironmentDeployment(const CancelEnvironmentDeploymentRequest &request);
    CancelServiceInstanceDeploymentResponse * cancelServiceInstanceDeployment(const CancelServiceInstanceDeploymentRequest &request);
    CancelServicePipelineDeploymentResponse * cancelServicePipelineDeployment(const CancelServicePipelineDeploymentRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateEnvironmentAccountConnectionResponse * createEnvironmentAccountConnection(const CreateEnvironmentAccountConnectionRequest &request);
    CreateEnvironmentTemplateResponse * createEnvironmentTemplate(const CreateEnvironmentTemplateRequest &request);
    CreateEnvironmentTemplateVersionResponse * createEnvironmentTemplateVersion(const CreateEnvironmentTemplateVersionRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    CreateServiceTemplateResponse * createServiceTemplate(const CreateServiceTemplateRequest &request);
    CreateServiceTemplateVersionResponse * createServiceTemplateVersion(const CreateServiceTemplateVersionRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteEnvironmentAccountConnectionResponse * deleteEnvironmentAccountConnection(const DeleteEnvironmentAccountConnectionRequest &request);
    DeleteEnvironmentTemplateResponse * deleteEnvironmentTemplate(const DeleteEnvironmentTemplateRequest &request);
    DeleteEnvironmentTemplateVersionResponse * deleteEnvironmentTemplateVersion(const DeleteEnvironmentTemplateVersionRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeleteServiceTemplateResponse * deleteServiceTemplate(const DeleteServiceTemplateRequest &request);
    DeleteServiceTemplateVersionResponse * deleteServiceTemplateVersion(const DeleteServiceTemplateVersionRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    GetEnvironmentAccountConnectionResponse * getEnvironmentAccountConnection(const GetEnvironmentAccountConnectionRequest &request);
    GetEnvironmentTemplateResponse * getEnvironmentTemplate(const GetEnvironmentTemplateRequest &request);
    GetEnvironmentTemplateVersionResponse * getEnvironmentTemplateVersion(const GetEnvironmentTemplateVersionRequest &request);
    GetServiceResponse * getService(const GetServiceRequest &request);
    GetServiceInstanceResponse * getServiceInstance(const GetServiceInstanceRequest &request);
    GetServiceTemplateResponse * getServiceTemplate(const GetServiceTemplateRequest &request);
    GetServiceTemplateVersionResponse * getServiceTemplateVersion(const GetServiceTemplateVersionRequest &request);
    ListEnvironmentAccountConnectionsResponse * listEnvironmentAccountConnections(const ListEnvironmentAccountConnectionsRequest &request);
    ListEnvironmentTemplateVersionsResponse * listEnvironmentTemplateVersions(const ListEnvironmentTemplateVersionsRequest &request);
    ListEnvironmentTemplatesResponse * listEnvironmentTemplates(const ListEnvironmentTemplatesRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListServiceInstancesResponse * listServiceInstances(const ListServiceInstancesRequest &request);
    ListServiceTemplateVersionsResponse * listServiceTemplateVersions(const ListServiceTemplateVersionsRequest &request);
    ListServiceTemplatesResponse * listServiceTemplates(const ListServiceTemplatesRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RejectEnvironmentAccountConnectionResponse * rejectEnvironmentAccountConnection(const RejectEnvironmentAccountConnectionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccountSettingsResponse * updateAccountSettings(const UpdateAccountSettingsRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateEnvironmentAccountConnectionResponse * updateEnvironmentAccountConnection(const UpdateEnvironmentAccountConnectionRequest &request);
    UpdateEnvironmentTemplateResponse * updateEnvironmentTemplate(const UpdateEnvironmentTemplateRequest &request);
    UpdateEnvironmentTemplateVersionResponse * updateEnvironmentTemplateVersion(const UpdateEnvironmentTemplateVersionRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);
    UpdateServiceInstanceResponse * updateServiceInstance(const UpdateServiceInstanceRequest &request);
    UpdateServicePipelineResponse * updateServicePipeline(const UpdateServicePipelineRequest &request);
    UpdateServiceTemplateResponse * updateServiceTemplate(const UpdateServiceTemplateRequest &request);
    UpdateServiceTemplateVersionResponse * updateServiceTemplateVersion(const UpdateServiceTemplateVersionRequest &request);

protected:
    /// @cond internal
    ProtonClientPrivate * const d_ptr; ///< Internal d-pointer.
    ProtonClient(ProtonClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ProtonClient)
    Q_DISABLE_COPY(ProtonClient)

};

} // namespace Proton
} // namespace QtAws

#endif
