// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESCLIENT_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmigrationhubrefactorspacesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreateRouteRequest;
class CreateRouteResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteRouteRequest;
class DeleteRouteResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetRouteRequest;
class GetRouteResponse;
class GetServiceRequest;
class GetServiceResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListEnvironmentVpcsRequest;
class ListEnvironmentVpcsResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListRoutesRequest;
class ListRoutesResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateRouteRequest;
class UpdateRouteResponse;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT MigrationHubRefactorSpacesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubRefactorSpacesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MigrationHubRefactorSpacesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateRouteResponse * createRoute(const CreateRouteRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteRouteResponse * deleteRoute(const DeleteRouteRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetRouteResponse * getRoute(const GetRouteRequest &request);
    GetServiceResponse * getService(const GetServiceRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListEnvironmentVpcsResponse * listEnvironmentVpcs(const ListEnvironmentVpcsRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListRoutesResponse * listRoutes(const ListRoutesRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateRouteResponse * updateRoute(const UpdateRouteRequest &request);

private:
    Q_DECLARE_PRIVATE(MigrationHubRefactorSpacesClient)
    Q_DISABLE_COPY(MigrationHubRefactorSpacesClient)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
