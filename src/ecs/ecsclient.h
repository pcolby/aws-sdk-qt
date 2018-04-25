/*
    Copyright 2013-2018 Paul Colby

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
class DeleteAttributesRequest;
class DeleteAttributesResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
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
class DescribeTasksRequest;
class DescribeTasksResponse;
class DiscoverPollEndpointRequest;
class DiscoverPollEndpointResponse;
class ListAttributesRequest;
class ListAttributesResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListContainerInstancesRequest;
class ListContainerInstancesResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTaskDefinitionFamiliesRequest;
class ListTaskDefinitionFamiliesResponse;
class ListTaskDefinitionsRequest;
class ListTaskDefinitionsResponse;
class ListTasksRequest;
class ListTasksResponse;
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
class SubmitContainerStateChangeRequest;
class SubmitContainerStateChangeResponse;
class SubmitTaskStateChangeRequest;
class SubmitTaskStateChangeResponse;
class UpdateContainerAgentRequest;
class UpdateContainerAgentResponse;
class UpdateContainerInstancesStateRequest;
class UpdateContainerInstancesStateResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;

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
} // namespace QtAws

#endif
