/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_EMRCLIENT_H
#define QTAWS_EMRCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace EMR {

class EmrClientPrivate;

class QTAWS_EXPORT EmrClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EmrClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EmrClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddInstanceGroupsResponse * addInstanceGroups(const AddInstanceGroupsRequest &request);
    AddJobFlowStepsResponse * addJobFlowSteps(const AddJobFlowStepsRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeJobFlowsResponse * describeJobFlows(const DescribeJobFlowsRequest &request);
    DescribeStepResponse * describeStep(const DescribeStepRequest &request);
    ListBootstrapActionsResponse * listBootstrapActions(const ListBootstrapActionsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListInstanceGroupsResponse * listInstanceGroups(const ListInstanceGroupsRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListStepsResponse * listSteps(const ListStepsRequest &request);
    ModifyInstanceGroupsResponse * modifyInstanceGroups(const ModifyInstanceGroupsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    RunJobFlowResponse * runJobFlow(const RunJobFlowRequest &request);
    SetTerminationProtectionResponse * setTerminationProtection(const SetTerminationProtectionRequest &request);
    SetVisibleToAllUsersResponse * setVisibleToAllUsers(const SetVisibleToAllUsersRequest &request);
    TerminateJobFlowsResponse * terminateJobFlows(const TerminateJobFlowsRequest &request);

private:
    Q_DECLARE_PRIVATE(EmrClient)
    Q_DISABLE_COPY(EmrClient)

};

} // namespace EMR
} // namespace AWS

#endif
