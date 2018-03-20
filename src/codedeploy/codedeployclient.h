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

#ifndef QTAWS_CODEDEPLOYCLIENT_H
#define QTAWS_CODEDEPLOYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CodeDeploy {

class CodeDeployClientPrivate;
class AddTagsToOnPremisesInstancesResponse;
class BatchGetApplicationRevisionsResponse;
class BatchGetApplicationsResponse;
class BatchGetDeploymentGroupsResponse;
class BatchGetDeploymentInstancesResponse;
class BatchGetDeploymentsResponse;
class BatchGetOnPremisesInstancesResponse;
class ContinueDeploymentResponse;
class CreateApplicationResponse;
class CreateDeploymentResponse;
class CreateDeploymentConfigResponse;
class CreateDeploymentGroupResponse;
class DeleteApplicationResponse;
class DeleteDeploymentConfigResponse;
class DeleteDeploymentGroupResponse;
class DeleteGitHubAccountTokenResponse;
class DeregisterOnPremisesInstanceResponse;
class GetApplicationResponse;
class GetApplicationRevisionResponse;
class GetDeploymentResponse;
class GetDeploymentConfigResponse;
class GetDeploymentGroupResponse;
class GetDeploymentInstanceResponse;
class GetOnPremisesInstanceResponse;
class ListApplicationRevisionsResponse;
class ListApplicationsResponse;
class ListDeploymentConfigsResponse;
class ListDeploymentGroupsResponse;
class ListDeploymentInstancesResponse;
class ListDeploymentsResponse;
class ListGitHubAccountTokenNamesResponse;
class ListOnPremisesInstancesResponse;
class PutLifecycleEventHookExecutionStatusResponse;
class RegisterApplicationRevisionResponse;
class RegisterOnPremisesInstanceResponse;
class RemoveTagsFromOnPremisesInstancesResponse;
class SkipWaitTimeForInstanceTerminationResponse;
class StopDeploymentResponse;
class UpdateApplicationResponse;
class UpdateDeploymentGroupResponse;

class QTAWS_EXPORT CodeDeployClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeDeployClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeDeployClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToOnPremisesInstancesResponse * addTagsToOnPremisesInstances(const AddTagsToOnPremisesInstancesRequest &request);
    BatchGetApplicationRevisionsResponse * batchGetApplicationRevisions(const BatchGetApplicationRevisionsRequest &request);
    BatchGetApplicationsResponse * batchGetApplications(const BatchGetApplicationsRequest &request);
    BatchGetDeploymentGroupsResponse * batchGetDeploymentGroups(const BatchGetDeploymentGroupsRequest &request);
    BatchGetDeploymentInstancesResponse * batchGetDeploymentInstances(const BatchGetDeploymentInstancesRequest &request);
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
    DeregisterOnPremisesInstanceResponse * deregisterOnPremisesInstance(const DeregisterOnPremisesInstanceRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationRevisionResponse * getApplicationRevision(const GetApplicationRevisionRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentConfigResponse * getDeploymentConfig(const GetDeploymentConfigRequest &request);
    GetDeploymentGroupResponse * getDeploymentGroup(const GetDeploymentGroupRequest &request);
    GetDeploymentInstanceResponse * getDeploymentInstance(const GetDeploymentInstanceRequest &request);
    GetOnPremisesInstanceResponse * getOnPremisesInstance(const GetOnPremisesInstanceRequest &request);
    ListApplicationRevisionsResponse * listApplicationRevisions(const ListApplicationRevisionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListDeploymentConfigsResponse * listDeploymentConfigs(const ListDeploymentConfigsRequest &request);
    ListDeploymentGroupsResponse * listDeploymentGroups(const ListDeploymentGroupsRequest &request);
    ListDeploymentInstancesResponse * listDeploymentInstances(const ListDeploymentInstancesRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListGitHubAccountTokenNamesResponse * listGitHubAccountTokenNames(const ListGitHubAccountTokenNamesRequest &request);
    ListOnPremisesInstancesResponse * listOnPremisesInstances(const ListOnPremisesInstancesRequest &request);
    PutLifecycleEventHookExecutionStatusResponse * putLifecycleEventHookExecutionStatus(const PutLifecycleEventHookExecutionStatusRequest &request);
    RegisterApplicationRevisionResponse * registerApplicationRevision(const RegisterApplicationRevisionRequest &request);
    RegisterOnPremisesInstanceResponse * registerOnPremisesInstance(const RegisterOnPremisesInstanceRequest &request);
    RemoveTagsFromOnPremisesInstancesResponse * removeTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest &request);
    SkipWaitTimeForInstanceTerminationResponse * skipWaitTimeForInstanceTermination(const SkipWaitTimeForInstanceTerminationRequest &request);
    StopDeploymentResponse * stopDeployment(const StopDeploymentRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateDeploymentGroupResponse * updateDeploymentGroup(const UpdateDeploymentGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeDeployClient)
    Q_DISABLE_COPY(CodeDeployClient)

};

} // namespace CodeDeploy
} // namespace AWS

#endif
