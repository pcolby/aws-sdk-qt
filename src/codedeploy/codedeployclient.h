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

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CodeDeploy {

class CodeDeployClientPrivate;

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
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateDeploymentConfigResponse * createDeploymentConfig(const CreateDeploymentConfigRequest &request);
    CreateDeploymentGroupResponse * createDeploymentGroup(const CreateDeploymentGroupRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteDeploymentConfigResponse * deleteDeploymentConfig(const DeleteDeploymentConfigRequest &request);
    DeleteDeploymentGroupResponse * deleteDeploymentGroup(const DeleteDeploymentGroupRequest &request);
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
    ListOnPremisesInstancesResponse * listOnPremisesInstances(const ListOnPremisesInstancesRequest &request);
    RegisterApplicationRevisionResponse * registerApplicationRevision(const RegisterApplicationRevisionRequest &request);
    RegisterOnPremisesInstanceResponse * registerOnPremisesInstance(const RegisterOnPremisesInstanceRequest &request);
    RemoveTagsFromOnPremisesInstancesResponse * removeTagsFromOnPremisesInstances(const RemoveTagsFromOnPremisesInstancesRequest &request);
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
