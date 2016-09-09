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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    EmrAddInstanceGroupsResponse * addInstanceGroups(const EmrAddInstanceGroupsRequest &request);
    EmrAddJobFlowStepsResponse * addJobFlowSteps(const EmrAddJobFlowStepsRequest &request);
    EmrAddTagsResponse * addTags(const EmrAddTagsRequest &request);
    EmrDescribeClusterResponse * describeCluster(const EmrDescribeClusterRequest &request);
    EmrDescribeJobFlowsResponse * describeJobFlows(const EmrDescribeJobFlowsRequest &request);
    EmrDescribeStepResponse * describeStep(const EmrDescribeStepRequest &request);
    EmrListBootstrapActionsResponse * listBootstrapActions(const EmrListBootstrapActionsRequest &request);
    EmrListClustersResponse * listClusters(const EmrListClustersRequest &request);
    EmrListInstanceGroupsResponse * listInstanceGroups(const EmrListInstanceGroupsRequest &request);
    EmrListInstancesResponse * listInstances(const EmrListInstancesRequest &request);
    EmrListStepsResponse * listSteps(const EmrListStepsRequest &request);
    EmrModifyInstanceGroupsResponse * modifyInstanceGroups(const EmrModifyInstanceGroupsRequest &request);
    EmrRemoveTagsResponse * removeTags(const EmrRemoveTagsRequest &request);
    EmrRunJobFlowResponse * runJobFlow(const EmrRunJobFlowRequest &request);
    EmrSetTerminationProtectionResponse * setTerminationProtection(const EmrSetTerminationProtectionRequest &request);
    EmrSetVisibleToAllUsersResponse * setVisibleToAllUsers(const EmrSetVisibleToAllUsersRequest &request);
    EmrTerminateJobFlowsResponse * terminateJobFlows(const EmrTerminateJobFlowsRequest &request);

private:
    Q_DECLARE_PRIVATE(EmrClient)
    Q_DISABLE_COPY(EmrClient)

};

QTAWS_END_NAMESPACE

#endif
