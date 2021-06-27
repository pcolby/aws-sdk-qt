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
class CreateStudioRequest;
class CreateStudioResponse;
class CreateStudioSessionMappingRequest;
class CreateStudioSessionMappingResponse;
class DeleteSecurityConfigurationRequest;
class DeleteSecurityConfigurationResponse;
class DeleteStudioRequest;
class DeleteStudioResponse;
class DeleteStudioSessionMappingRequest;
class DeleteStudioSessionMappingResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeJobFlowsRequest;
class DescribeJobFlowsResponse;
class DescribeNotebookExecutionRequest;
class DescribeNotebookExecutionResponse;
class DescribeSecurityConfigurationRequest;
class DescribeSecurityConfigurationResponse;
class DescribeStepRequest;
class DescribeStepResponse;
class DescribeStudioRequest;
class DescribeStudioResponse;
class GetBlockPublicAccessConfigurationRequest;
class GetBlockPublicAccessConfigurationResponse;
class GetManagedScalingPolicyRequest;
class GetManagedScalingPolicyResponse;
class GetStudioSessionMappingRequest;
class GetStudioSessionMappingResponse;
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
class ListNotebookExecutionsRequest;
class ListNotebookExecutionsResponse;
class ListSecurityConfigurationsRequest;
class ListSecurityConfigurationsResponse;
class ListStepsRequest;
class ListStepsResponse;
class ListStudioSessionMappingsRequest;
class ListStudioSessionMappingsResponse;
class ListStudiosRequest;
class ListStudiosResponse;
class ModifyClusterRequest;
class ModifyClusterResponse;
class ModifyInstanceFleetRequest;
class ModifyInstanceFleetResponse;
class ModifyInstanceGroupsRequest;
class ModifyInstanceGroupsResponse;
class PutAutoScalingPolicyRequest;
class PutAutoScalingPolicyResponse;
class PutBlockPublicAccessConfigurationRequest;
class PutBlockPublicAccessConfigurationResponse;
class PutManagedScalingPolicyRequest;
class PutManagedScalingPolicyResponse;
class RemoveAutoScalingPolicyRequest;
class RemoveAutoScalingPolicyResponse;
class RemoveManagedScalingPolicyRequest;
class RemoveManagedScalingPolicyResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class RunJobFlowRequest;
class RunJobFlowResponse;
class SetTerminationProtectionRequest;
class SetTerminationProtectionResponse;
class SetVisibleToAllUsersRequest;
class SetVisibleToAllUsersResponse;
class StartNotebookExecutionRequest;
class StartNotebookExecutionResponse;
class StopNotebookExecutionRequest;
class StopNotebookExecutionResponse;
class TerminateJobFlowsRequest;
class TerminateJobFlowsResponse;
class UpdateStudioRequest;
class UpdateStudioResponse;
class UpdateStudioSessionMappingRequest;
class UpdateStudioSessionMappingResponse;

class QTAWS_EXPORT EmrClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EmrClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
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
    CreateStudioResponse * createStudio(const CreateStudioRequest &request);
    CreateStudioSessionMappingResponse * createStudioSessionMapping(const CreateStudioSessionMappingRequest &request);
    DeleteSecurityConfigurationResponse * deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request);
    DeleteStudioResponse * deleteStudio(const DeleteStudioRequest &request);
    DeleteStudioSessionMappingResponse * deleteStudioSessionMapping(const DeleteStudioSessionMappingRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeJobFlowsResponse * describeJobFlows(const DescribeJobFlowsRequest &request);
    DescribeNotebookExecutionResponse * describeNotebookExecution(const DescribeNotebookExecutionRequest &request);
    DescribeSecurityConfigurationResponse * describeSecurityConfiguration(const DescribeSecurityConfigurationRequest &request);
    DescribeStepResponse * describeStep(const DescribeStepRequest &request);
    DescribeStudioResponse * describeStudio(const DescribeStudioRequest &request);
    GetBlockPublicAccessConfigurationResponse * getBlockPublicAccessConfiguration(const GetBlockPublicAccessConfigurationRequest &request);
    GetManagedScalingPolicyResponse * getManagedScalingPolicy(const GetManagedScalingPolicyRequest &request);
    GetStudioSessionMappingResponse * getStudioSessionMapping(const GetStudioSessionMappingRequest &request);
    ListBootstrapActionsResponse * listBootstrapActions(const ListBootstrapActionsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListInstanceFleetsResponse * listInstanceFleets(const ListInstanceFleetsRequest &request);
    ListInstanceGroupsResponse * listInstanceGroups(const ListInstanceGroupsRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListNotebookExecutionsResponse * listNotebookExecutions(const ListNotebookExecutionsRequest &request);
    ListSecurityConfigurationsResponse * listSecurityConfigurations(const ListSecurityConfigurationsRequest &request);
    ListStepsResponse * listSteps(const ListStepsRequest &request);
    ListStudioSessionMappingsResponse * listStudioSessionMappings(const ListStudioSessionMappingsRequest &request);
    ListStudiosResponse * listStudios(const ListStudiosRequest &request);
    ModifyClusterResponse * modifyCluster(const ModifyClusterRequest &request);
    ModifyInstanceFleetResponse * modifyInstanceFleet(const ModifyInstanceFleetRequest &request);
    ModifyInstanceGroupsResponse * modifyInstanceGroups(const ModifyInstanceGroupsRequest &request);
    PutAutoScalingPolicyResponse * putAutoScalingPolicy(const PutAutoScalingPolicyRequest &request);
    PutBlockPublicAccessConfigurationResponse * putBlockPublicAccessConfiguration(const PutBlockPublicAccessConfigurationRequest &request);
    PutManagedScalingPolicyResponse * putManagedScalingPolicy(const PutManagedScalingPolicyRequest &request);
    RemoveAutoScalingPolicyResponse * removeAutoScalingPolicy(const RemoveAutoScalingPolicyRequest &request);
    RemoveManagedScalingPolicyResponse * removeManagedScalingPolicy(const RemoveManagedScalingPolicyRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    RunJobFlowResponse * runJobFlow(const RunJobFlowRequest &request);
    SetTerminationProtectionResponse * setTerminationProtection(const SetTerminationProtectionRequest &request);
    SetVisibleToAllUsersResponse * setVisibleToAllUsers(const SetVisibleToAllUsersRequest &request);
    StartNotebookExecutionResponse * startNotebookExecution(const StartNotebookExecutionRequest &request);
    StopNotebookExecutionResponse * stopNotebookExecution(const StopNotebookExecutionRequest &request);
    TerminateJobFlowsResponse * terminateJobFlows(const TerminateJobFlowsRequest &request);
    UpdateStudioResponse * updateStudio(const UpdateStudioRequest &request);
    UpdateStudioSessionMappingResponse * updateStudioSessionMapping(const UpdateStudioSessionMappingRequest &request);

protected:
    /// @cond internal
    EmrClientPrivate * const d_ptr; ///< Internal d-pointer.
    EmrClient(EmrClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(EmrClient)
    Q_DISABLE_COPY(EmrClient)

};

} // namespace EMR
} // namespace QtAws

#endif
