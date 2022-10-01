// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYCLIENT_H
#define QTAWS_AMPLIFYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsamplifyglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Amplify {

class AmplifyClientPrivate;
class CreateAppRequest;
class CreateAppResponse;
class CreateBackendEnvironmentRequest;
class CreateBackendEnvironmentResponse;
class CreateBranchRequest;
class CreateBranchResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDomainAssociationRequest;
class CreateDomainAssociationResponse;
class CreateWebhookRequest;
class CreateWebhookResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteBackendEnvironmentRequest;
class DeleteBackendEnvironmentResponse;
class DeleteBranchRequest;
class DeleteBranchResponse;
class DeleteDomainAssociationRequest;
class DeleteDomainAssociationResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteWebhookRequest;
class DeleteWebhookResponse;
class GenerateAccessLogsRequest;
class GenerateAccessLogsResponse;
class GetAppRequest;
class GetAppResponse;
class GetArtifactUrlRequest;
class GetArtifactUrlResponse;
class GetBackendEnvironmentRequest;
class GetBackendEnvironmentResponse;
class GetBranchRequest;
class GetBranchResponse;
class GetDomainAssociationRequest;
class GetDomainAssociationResponse;
class GetJobRequest;
class GetJobResponse;
class GetWebhookRequest;
class GetWebhookResponse;
class ListAppsRequest;
class ListAppsResponse;
class ListArtifactsRequest;
class ListArtifactsResponse;
class ListBackendEnvironmentsRequest;
class ListBackendEnvironmentsResponse;
class ListBranchesRequest;
class ListBranchesResponse;
class ListDomainAssociationsRequest;
class ListDomainAssociationsResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWebhooksRequest;
class ListWebhooksResponse;
class StartDeploymentRequest;
class StartDeploymentResponse;
class StartJobRequest;
class StartJobResponse;
class StopJobRequest;
class StopJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAppRequest;
class UpdateAppResponse;
class UpdateBranchRequest;
class UpdateBranchResponse;
class UpdateDomainAssociationRequest;
class UpdateDomainAssociationResponse;
class UpdateWebhookRequest;
class UpdateWebhookResponse;

class QTAWSAMPLIFY_EXPORT AmplifyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AmplifyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AmplifyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateBackendEnvironmentResponse * createBackendEnvironment(const CreateBackendEnvironmentRequest &request);
    CreateBranchResponse * createBranch(const CreateBranchRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDomainAssociationResponse * createDomainAssociation(const CreateDomainAssociationRequest &request);
    CreateWebhookResponse * createWebhook(const CreateWebhookRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteBackendEnvironmentResponse * deleteBackendEnvironment(const DeleteBackendEnvironmentRequest &request);
    DeleteBranchResponse * deleteBranch(const DeleteBranchRequest &request);
    DeleteDomainAssociationResponse * deleteDomainAssociation(const DeleteDomainAssociationRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteWebhookResponse * deleteWebhook(const DeleteWebhookRequest &request);
    GenerateAccessLogsResponse * generateAccessLogs(const GenerateAccessLogsRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetArtifactUrlResponse * getArtifactUrl(const GetArtifactUrlRequest &request);
    GetBackendEnvironmentResponse * getBackendEnvironment(const GetBackendEnvironmentRequest &request);
    GetBranchResponse * getBranch(const GetBranchRequest &request);
    GetDomainAssociationResponse * getDomainAssociation(const GetDomainAssociationRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetWebhookResponse * getWebhook(const GetWebhookRequest &request);
    ListAppsResponse * listApps(const ListAppsRequest &request);
    ListArtifactsResponse * listArtifacts(const ListArtifactsRequest &request);
    ListBackendEnvironmentsResponse * listBackendEnvironments(const ListBackendEnvironmentsRequest &request);
    ListBranchesResponse * listBranches(const ListBranchesRequest &request);
    ListDomainAssociationsResponse * listDomainAssociations(const ListDomainAssociationsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWebhooksResponse * listWebhooks(const ListWebhooksRequest &request);
    StartDeploymentResponse * startDeployment(const StartDeploymentRequest &request);
    StartJobResponse * startJob(const StartJobRequest &request);
    StopJobResponse * stopJob(const StopJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateBranchResponse * updateBranch(const UpdateBranchRequest &request);
    UpdateDomainAssociationResponse * updateDomainAssociation(const UpdateDomainAssociationRequest &request);
    UpdateWebhookResponse * updateWebhook(const UpdateWebhookRequest &request);

private:
    Q_DECLARE_PRIVATE(AmplifyClient)
    Q_DISABLE_COPY(AmplifyClient)

};

} // namespace Amplify
} // namespace QtAws

#endif
