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

#ifndef QTAWS_ECSCLIENT_H
#define QTAWS_ECSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ECS {

class EcsClientPrivate;
class CreateClusterResponse;
class CreateServiceResponse;
class DeleteAttributesResponse;
class DeleteClusterResponse;
class DeleteServiceResponse;
class DeregisterContainerInstanceResponse;
class DeregisterTaskDefinitionResponse;
class DescribeClustersResponse;
class DescribeContainerInstancesResponse;
class DescribeServicesResponse;
class DescribeTaskDefinitionResponse;
class DescribeTasksResponse;
class DiscoverPollEndpointResponse;
class ListAttributesResponse;
class ListClustersResponse;
class ListContainerInstancesResponse;
class ListServicesResponse;
class ListTaskDefinitionFamiliesResponse;
class ListTaskDefinitionsResponse;
class ListTasksResponse;
class PutAttributesResponse;
class RegisterContainerInstanceResponse;
class RegisterTaskDefinitionResponse;
class RunTaskResponse;
class StartTaskResponse;
class StopTaskResponse;
class SubmitContainerStateChangeResponse;
class SubmitTaskStateChangeResponse;
class UpdateContainerAgentResponse;
class UpdateContainerInstancesStateResponse;
class UpdateServiceResponse;

class QTAWS_EXPORT EcsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EcsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EcsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    DeleteAttributesResponse * deleteAttributes(const DeleteAttributesRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeregisterContainerInstanceResponse * deregisterContainerInstance(const DeregisterContainerInstanceRequest &request);
    DeregisterTaskDefinitionResponse * deregisterTaskDefinition(const DeregisterTaskDefinitionRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeContainerInstancesResponse * describeContainerInstances(const DescribeContainerInstancesRequest &request);
    DescribeServicesResponse * describeServices(const DescribeServicesRequest &request);
    DescribeTaskDefinitionResponse * describeTaskDefinition(const DescribeTaskDefinitionRequest &request);
    DescribeTasksResponse * describeTasks(const DescribeTasksRequest &request);
    DiscoverPollEndpointResponse * discoverPollEndpoint(const DiscoverPollEndpointRequest &request);
    ListAttributesResponse * listAttributes(const ListAttributesRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListContainerInstancesResponse * listContainerInstances(const ListContainerInstancesRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTaskDefinitionFamiliesResponse * listTaskDefinitionFamilies(const ListTaskDefinitionFamiliesRequest &request);
    ListTaskDefinitionsResponse * listTaskDefinitions(const ListTaskDefinitionsRequest &request);
    ListTasksResponse * listTasks(const ListTasksRequest &request);
    PutAttributesResponse * putAttributes(const PutAttributesRequest &request);
    RegisterContainerInstanceResponse * registerContainerInstance(const RegisterContainerInstanceRequest &request);
    RegisterTaskDefinitionResponse * registerTaskDefinition(const RegisterTaskDefinitionRequest &request);
    RunTaskResponse * runTask(const RunTaskRequest &request);
    StartTaskResponse * startTask(const StartTaskRequest &request);
    StopTaskResponse * stopTask(const StopTaskRequest &request);
    SubmitContainerStateChangeResponse * submitContainerStateChange(const SubmitContainerStateChangeRequest &request);
    SubmitTaskStateChangeResponse * submitTaskStateChange(const SubmitTaskStateChangeRequest &request);
    UpdateContainerAgentResponse * updateContainerAgent(const UpdateContainerAgentRequest &request);
    UpdateContainerInstancesStateResponse * updateContainerInstancesState(const UpdateContainerInstancesStateRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);

private:
    Q_DECLARE_PRIVATE(EcsClient)
    Q_DISABLE_COPY(EcsClient)

};

} // namespace ECS
} // namespace AWS

#endif
