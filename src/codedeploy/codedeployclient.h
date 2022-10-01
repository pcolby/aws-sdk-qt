// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYCLIENT_H
#define QTAWS_CODEDEPLOYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodedeployglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodeDeploy {

class CodeDeployClientPrivate;
class AddTagsToOnPremisesInstancesRequest;
class AddTagsToOnPremisesInstancesResponse;
class BatchGetApplicationRevisionsRequest;
class BatchGetApplicationRevisionsResponse;
class BatchGetApplicationsRequest;
class BatchGetApplicationsResponse;
class BatchGetDeploymentGroupsRequest;
class BatchGetDeploymentGroupsResponse;
class BatchGetDeploymentInstancesRequest;
class BatchGetDeploymentInstancesResponse;
class BatchGetDeploymentTargetsRequest;
class BatchGetDeploymentTargetsResponse;
class BatchGetDeploymentsRequest;
class BatchGetDeploymentsResponse;
class BatchGetOnPremisesInstancesRequest;
class BatchGetOnPremisesInstancesResponse;
class ContinueDeploymentRequest;
class ContinueDeploymentResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateDeploymentConfigRequest;
class CreateDeploymentConfigResponse;
class CreateDeploymentGroupRequest;
class CreateDeploymentGroupResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteDeploymentConfigRequest;
class DeleteDeploymentConfigResponse;
class DeleteDeploymentGroupRequest;
class DeleteDeploymentGroupResponse;
class DeleteGitHubAccountTokenRequest;
class DeleteGitHubAccountTokenResponse;
class DeleteResourcesByExternalIdRequest;
class DeleteResourcesByExternalIdResponse;
class DeregisterOnPremisesInstanceRequest;
class DeregisterOnPremisesInstanceResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetApplicationRevisionRequest;
class GetApplicationRevisionResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetDeploymentConfigRequest;
class GetDeploymentConfigResponse;
class GetDeploymentGroupRequest;
class GetDeploymentGroupResponse;
class GetDeploymentInstanceRequest;
class GetDeploymentInstanceResponse;
class GetDeploymentTargetRequest;
class GetDeploymentTargetResponse;
class GetOnPremisesInstanceRequest;
class GetOnPremisesInstanceResponse;
class ListApplicationRevisionsRequest;
class ListApplicationRevisionsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListDeploymentConfigsRequest;
class ListDeploymentConfigsResponse;
class ListDeploymentGroupsRequest;
class ListDeploymentGroupsResponse;
class ListDeploymentInstancesRequest;
class ListDeploymentInstancesResponse;
class ListDeploymentTargetsRequest;
class ListDeploymentTargetsResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListGitHubAccountTokenNamesRequest;
class ListGitHubAccountTokenNamesResponse;
class ListOnPremisesInstancesRequest;
class ListOnPremisesInstancesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutLifecycleEventHookExecutionStatusRequest;
class PutLifecycleEventHookExecutionStatusResponse;
class RegisterApplicationRevisionRequest;
class RegisterApplicationRevisionResponse;
class RegisterOnPremisesInstanceRequest;
class RegisterOnPremisesInstanceResponse;
class RemoveTagsFromOnPremisesInstancesRequest;
class RemoveTagsFromOnPremisesInstancesResponse;
class SkipWaitTimeForInstanceTerminationRequest;
class SkipWaitTimeForInstanceTerminationResponse;
class StopDeploymentRequest;
class StopDeploymentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateDeploymentGroupRequest;
class UpdateDeploymentGroupResponse;

class QTAWSCODEDEPLOY_EXPORT CodeDeployClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeDeployClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodeDeployClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToOnPremisesInstancesResponse * addTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest &request);
    BatchGetApplicationRevisionsResponse * batchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest &request);
    BatchGetApplicationsResponse * batchGetApplications(const BatchGetApplicationsRequest &request);
    BatchGetDeploymentGroupsResponse * batchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest &request);
    BatchGetDeploymentInstancesResponse * batchGetDeploymentInstances(const BatchGetDeploymentInstancesRequest &request);
    BatchGetDeploymentTargetsResponse * batchGetDeploymentTargets(const BatchGetDeploymentTargetsRequest &request);
    BatchGetDeploymentsResponse * batchGetDeployments(const BatchGetDeploymentsRequest &request);
    BatchGetOnPremisesInstancesResponse * batchGetOnPremisesInstances(const BatchGetOnPremisesInstancesRequest &request);
    ContinueDeploymentResponse * continueDeployment(const ContinueDeploymentRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDeploymentConfigResponse * createDeploymentConfig(const CreateDeploymentConfigRequest &request);
    CreateDeploymentGroupResponse * createDeploymentGroup(const CreateDeploymentGroupRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteDeploymentConfigResponse * deleteDeploymentConfig(const DeleteDeploymentConfigRequest &request);
    DeleteDeploymentGroupResponse * deleteDeploymentGroup(const DeleteDeploymentGroupRequest &request);
    DeleteGitHubAccountTokenResponse * deleteGitHubAccountToken(const DeleteGitHubAccountTokenRequest &request);
    DeleteResourcesByExternalIdResponse * deleteResourcesByExternalId(const DeleteResourcesByExternalIdRequest &request);
    DeregisterOnPremisesInstanceResponse * deregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationRevisionResponse * getApplicationRevision(const GetApplicationRevisionRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentConfigResponse * getDeploymentConfig(const GetDeploymentConfigRequest &request);
    GetDeploymentGroupResponse * getDeploymentGroup(const GetDeploymentGroupRequest &request);
    GetDeploymentInstanceResponse * getDeploymentInstance(const GetDeploymentInstanceRequest &request);
    GetDeploymentTargetResponse * getDeploymentTarget(const GetDeploymentTargetRequest &request);
    GetOnPremisesInstanceResponse * getOnPremisesInstance(const GetOnPremisesInstanceRequest &request);
    ListApplicationRevisionsResponse * listApplicationRevisions(const ListApplicationRevisionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListDeploymentConfigsResponse * listDeploymentConfigs(const ListDeploymentConfigsRequest &request);
    ListDeploymentGroupsResponse * listDeploymentGroups(const ListDeploymentGroupsRequest &request);
    ListDeploymentInstancesResponse * listDeploymentInstances(const ListDeploymentInstancesRequest &request);
    ListDeploymentTargetsResponse * listDeploymentTargets(const ListDeploymentTargetsRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListGitHubAccountTokenNamesResponse * listGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest &request);
    ListOnPremisesInstancesResponse * listOnPremisesInstances(const ListOnPremisesInstancesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutLifecycleEventHookExecutionStatusResponse * putLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest &request);
    RegisterApplicationRevisionResponse * registerApplicationRevision(const RegisterApplicationRevisionRequest &request);
    RegisterOnPremisesInstanceResponse * registerOnPremisesInstance(const RegisterOnPremisesInstanceRequest &request);
    RemoveTagsFromOnPremisesInstancesResponse * removeTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest &request);
    SkipWaitTimeForInstanceTerminationResponse * skipWaitTimeForInstanceTermination(const SkipWaitTimeForInstanceTerminationRequest &request);
    StopDeploymentResponse * stopDeployment(const StopDeploymentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateDeploymentGroupResponse * updateDeploymentGroup(const UpdateDeploymentGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeDeployClient)
    Q_DISABLE_COPY(CodeDeployClient)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
