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

#ifndef QTAWS_EMRCLIENT_H
#define QTAWS_EMRCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace EMR {

class EmrClientPrivate;
class AddInstanceFleetResponse;
class AddInstanceGroupsResponse;
class AddJobFlowStepsResponse;
class AddTagsResponse;
class CancelStepsResponse;
class CreateSecurityConfigurationResponse;
class DeleteSecurityConfigurationResponse;
class DescribeClusterResponse;
class DescribeJobFlowsResponse;
class DescribeSecurityConfigurationResponse;
class DescribeStepResponse;
class ListBootstrapActionsResponse;
class ListClustersResponse;
class ListInstanceFleetsResponse;
class ListInstanceGroupsResponse;
class ListInstancesResponse;
class ListSecurityConfigurationsResponse;
class ListStepsResponse;
class ModifyInstanceFleetResponse;
class ModifyInstanceGroupsResponse;
class PutAutoScalingPolicyResponse;
class RemoveAutoScalingPolicyResponse;
class RemoveTagsResponse;
class RunJobFlowResponse;
class SetTerminationProtectionResponse;
class SetVisibleToAllUsersResponse;
class TerminateJobFlowsResponse;

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
    AddInstanceFleetResponse * addInstanceFleet(const AddInstanceFleetRequest &request);
    AddInstanceGroupsResponse * addInstanceGroups(const AddInstanceGroupsRequest &request);
    AddJobFlowStepsResponse * addJobFlowSteps(const AddJobFlowStepsRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CancelStepsResponse * cancelSteps(const CancelStepsRequest &request);
    CreateSecurityConfigurationResponse * createSecurityConfiguration(const CreateSecurityConfigurationRequest &request);
    DeleteSecurityConfigurationResponse * deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeJobFlowsResponse * describeJobFlows(const DescribeJobFlowsRequest &request);
    DescribeSecurityConfigurationResponse * describeSecurityConfiguration(const DescribeSecurityConfigurationRequest &request);
    DescribeStepResponse * describeStep(const DescribeStepRequest &request);
    ListBootstrapActionsResponse * listBootstrapActions(const ListBootstrapActionsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListInstanceFleetsResponse * listInstanceFleets(const ListInstanceFleetsRequest &request);
    ListInstanceGroupsResponse * listInstanceGroups(const ListInstanceGroupsRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListSecurityConfigurationsResponse * listSecurityConfigurations(const ListSecurityConfigurationsRequest &request);
    ListStepsResponse * listSteps(const ListStepsRequest &request);
    ModifyInstanceFleetResponse * modifyInstanceFleet(const ModifyInstanceFleetRequest &request);
    ModifyInstanceGroupsResponse * modifyInstanceGroups(const ModifyInstanceGroupsRequest &request);
    PutAutoScalingPolicyResponse * putAutoScalingPolicy(const PutAutoScalingPolicyRequest &request);
    RemoveAutoScalingPolicyResponse * removeAutoScalingPolicy(const RemoveAutoScalingPolicyRequest &request);
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
