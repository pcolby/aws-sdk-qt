/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EMRCLIENT_H
#define QTAWS_EMRCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace EMR {

class EmrClientPrivate;
class AddInstanceFleetRequest;
class AddInstanceFleetResponse;
class AddInstanceGroupsRequest;
class AddInstanceGroupsResponse;
class AddJobFlowStepsRequest;
class AddJobFlowStepsResponse;
class AddTagsRequest;
class AddTagsResponse;
class CancelStepsRequest;
class CancelStepsResponse;
class CreateSecurityConfigurationRequest;
class CreateSecurityConfigurationResponse;
class DeleteSecurityConfigurationRequest;
class DeleteSecurityConfigurationResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeJobFlowsRequest;
class DescribeJobFlowsResponse;
class DescribeSecurityConfigurationRequest;
class DescribeSecurityConfigurationResponse;
class DescribeStepRequest;
class DescribeStepResponse;
class ListBootstrapActionsRequest;
class ListBootstrapActionsResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListInstanceFleetsRequest;
class ListInstanceFleetsResponse;
class ListInstanceGroupsRequest;
class ListInstanceGroupsResponse;
class ListInstancesRequest;
class ListInstancesResponse;
class ListSecurityConfigurationsRequest;
class ListSecurityConfigurationsResponse;
class ListStepsRequest;
class ListStepsResponse;
class ModifyInstanceFleetRequest;
class ModifyInstanceFleetResponse;
class ModifyInstanceGroupsRequest;
class ModifyInstanceGroupsResponse;
class PutAutoScalingPolicyRequest;
class PutAutoScalingPolicyResponse;
class RemoveAutoScalingPolicyRequest;
class RemoveAutoScalingPolicyResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class RunJobFlowRequest;
class RunJobFlowResponse;
class SetTerminationProtectionRequest;
class SetTerminationProtectionResponse;
class SetVisibleToAllUsersRequest;
class SetVisibleToAllUsersResponse;
class TerminateJobFlowsRequest;
class TerminateJobFlowsResponse;

class QTAWS_EXPORT EmrClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EmrClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EmrClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
