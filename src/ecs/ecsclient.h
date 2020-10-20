/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_ECSCLIENT_H
#define QTAWS_ECSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ECS {

class EcsClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class CreateTaskSetRequest;
class CreateTaskSetResponse;
class DeleteAccountSettingRequest;
class DeleteAccountSettingResponse;
class DeleteAttributesRequest;
class DeleteAttributesResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class DeleteTaskSetRequest;
class DeleteTaskSetResponse;
class DeregisterContainerInstanceRequest;
class DeregisterContainerInstanceResponse;
class DeregisterTaskDefinitionRequest;
class DeregisterTaskDefinitionResponse;
class DescribeClustersRequest;
class DescribeClustersResponse;
class DescribeContainerInstancesRequest;
class DescribeContainerInstancesResponse;
class DescribeServicesRequest;
class DescribeServicesResponse;
class DescribeTaskDefinitionRequest;
class DescribeTaskDefinitionResponse;
class DescribeTaskSetsRequest;
class DescribeTaskSetsResponse;
class DescribeTasksRequest;
class DescribeTasksResponse;
class DiscoverPollEndpointRequest;
class DiscoverPollEndpointResponse;
class ListAccountSettingsRequest;
class ListAccountSettingsResponse;
class ListAttributesRequest;
class ListAttributesResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListContainerInstancesRequest;
class ListContainerInstancesResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTaskDefinitionFamiliesRequest;
class ListTaskDefinitionFamiliesResponse;
class ListTaskDefinitionsRequest;
class ListTaskDefinitionsResponse;
class ListTasksRequest;
class ListTasksResponse;
class PutAccountSettingRequest;
class PutAccountSettingResponse;
class PutAccountSettingDefaultRequest;
class PutAccountSettingDefaultResponse;
class PutAttributesRequest;
class PutAttributesResponse;
class RegisterContainerInstanceRequest;
class RegisterContainerInstanceResponse;
class RegisterTaskDefinitionRequest;
class RegisterTaskDefinitionResponse;
class RunTaskRequest;
class RunTaskResponse;
class StartTaskRequest;
class StartTaskResponse;
class StopTaskRequest;
class StopTaskResponse;
class SubmitAttachmentStateChangesRequest;
class SubmitAttachmentStateChangesResponse;
class SubmitContainerStateChangeRequest;
class SubmitContainerStateChangeResponse;
class SubmitTaskStateChangeRequest;
class SubmitTaskStateChangeResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContainerAgentRequest;
class UpdateContainerAgentResponse;
class UpdateContainerInstancesStateRequest;
class UpdateContainerInstancesStateResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;
class UpdateServicePrimaryTaskSetRequest;
class UpdateServicePrimaryTaskSetResponse;
class UpdateTaskSetRequest;
class UpdateTaskSetResponse;

class QTAWS_EXPORT EcsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EcsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EcsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    CreateTaskSetResponse * createTaskSet(const CreateTaskSetRequest &request);
    DeleteAccountSettingResponse * deleteAccountSetting(const DeleteAccountSettingRequest &request);
    DeleteAttributesResponse * deleteAttributes(const DeleteAttributesRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeleteTaskSetResponse * deleteTaskSet(const DeleteTaskSetRequest &request);
    DeregisterContainerInstanceResponse * deregisterContainerInstance(const DeregisterContainerInstanceRequest &request);
    DeregisterTaskDefinitionResponse * deregisterTaskDefinition(const DeregisterTaskDefinitionRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeContainerInstancesResponse * describeContainerInstances(const DescribeContainerInstancesRequest &request);
    DescribeServicesResponse * describeServices(const DescribeServicesRequest &request);
    DescribeTaskDefinitionResponse * describeTaskDefinition(const DescribeTaskDefinitionRequest &request);
    DescribeTaskSetsResponse * describeTaskSets(const DescribeTaskSetsRequest &request);
    DescribeTasksResponse * describeTasks(const DescribeTasksRequest &request);
    DiscoverPollEndpointResponse * discoverPollEndpoint(const DiscoverPollEndpointRequest &request);
    ListAccountSettingsResponse * listAccountSettings(const ListAccountSettingsRequest &request);
    ListAttributesResponse * listAttributes(const ListAttributesRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListContainerInstancesResponse * listContainerInstances(const ListContainerInstancesRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTaskDefinitionFamiliesResponse * listTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest &request);
    ListTaskDefinitionsResponse * listTaskDefinitions(const ListTaskDefinitionsRequest &request);
    ListTasksResponse * listTasks(const ListTasksRequest &request);
    PutAccountSettingResponse * putAccountSetting(const PutAccountSettingRequest &request);
    PutAccountSettingDefaultResponse * putAccountSettingDefault(const PutAccountSettingDefaultRequest &request);
    PutAttributesResponse * putAttributes(const PutAttributesRequest &request);
    RegisterContainerInstanceResponse * registerContainerInstance(const RegisterContainerInstanceRequest &request);
    RegisterTaskDefinitionResponse * registerTaskDefinition(const RegisterTaskDefinitionRequest &request);
    RunTaskResponse * runTask(const RunTaskRequest &request);
    StartTaskResponse * startTask(const StartTaskRequest &request);
    StopTaskResponse * stopTask(const StopTaskRequest &request);
    SubmitAttachmentStateChangesResponse * submitAttachmentStateChanges(const SubmitAttachmentStateChangesRequest &request);
    SubmitContainerStateChangeResponse * submitContainerStateChange(const SubmitContainerStateChangeRequest &request);
    SubmitTaskStateChangeResponse * submitTaskStateChange(const SubmitTaskStateChangeRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContainerAgentResponse * updateContainerAgent(const UpdateContainerAgentRequest &request);
    UpdateContainerInstancesStateResponse * updateContainerInstancesState(const UpdateContainerInstancesStateRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);
    UpdateServicePrimaryTaskSetResponse * updateServicePrimaryTaskSet(const UpdateServicePrimaryTaskSetRequest &request);
    UpdateTaskSetResponse * updateTaskSet(const UpdateTaskSetRequest &request);

private:
    Q_DECLARE_PRIVATE(EcsClient)
    Q_DISABLE_COPY(EcsClient)

};

} // namespace ECS
} // namespace QtAws

#endif
