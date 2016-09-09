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

#ifndef QTAWS_ECSCLIENT_H
#define QTAWS_ECSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class EcsClientPrivate;

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
    EcsCreateClusterResponse * createCluster(const EcsCreateClusterRequest &request);
    EcsCreateServiceResponse * createService(const EcsCreateServiceRequest &request);
    EcsDeleteClusterResponse * deleteCluster(const EcsDeleteClusterRequest &request);
    EcsDeleteServiceResponse * deleteService(const EcsDeleteServiceRequest &request);
    EcsDeregisterContainerInstanceResponse * deregisterContainerInstance(const EcsDeregisterContainerInstanceRequest &request);
    EcsDeregisterTaskDefinitionResponse * deregisterTaskDefinition(const EcsDeregisterTaskDefinitionRequest &request);
    EcsDescribeClustersResponse * describeClusters(const EcsDescribeClustersRequest &request);
    EcsDescribeContainerInstancesResponse * describeContainerInstances(const EcsDescribeContainerInstancesRequest &request);
    EcsDescribeServicesResponse * describeServices(const EcsDescribeServicesRequest &request);
    EcsDescribeTaskDefinitionResponse * describeTaskDefinition(const EcsDescribeTaskDefinitionRequest &request);
    EcsDescribeTasksResponse * describeTasks(const EcsDescribeTasksRequest &request);
    EcsDiscoverPollEndpointResponse * discoverPollEndpoint(const EcsDiscoverPollEndpointRequest &request);
    EcsListClustersResponse * listClusters(const EcsListClustersRequest &request);
    EcsListContainerInstancesResponse * listContainerInstances(const EcsListContainerInstancesRequest &request);
    EcsListServicesResponse * listServices(const EcsListServicesRequest &request);
    EcsListTaskDefinitionFamiliesResponse * listTaskDefinitionFamilies(const EcsListTaskDefinitionFamiliesRequest &request);
    EcsListTaskDefinitionsResponse * listTaskDefinitions(const EcsListTaskDefinitionsRequest &request);
    EcsListTasksResponse * listTasks(const EcsListTasksRequest &request);
    EcsRegisterContainerInstanceResponse * registerContainerInstance(const EcsRegisterContainerInstanceRequest &request);
    EcsRegisterTaskDefinitionResponse * registerTaskDefinition(const EcsRegisterTaskDefinitionRequest &request);
    EcsRunTaskResponse * runTask(const EcsRunTaskRequest &request);
    EcsStartTaskResponse * startTask(const EcsStartTaskRequest &request);
    EcsStopTaskResponse * stopTask(const EcsStopTaskRequest &request);
    EcsSubmitContainerStateChangeResponse * submitContainerStateChange(const EcsSubmitContainerStateChangeRequest &request);
    EcsSubmitTaskStateChangeResponse * submitTaskStateChange(const EcsSubmitTaskStateChangeRequest &request);
    EcsUpdateContainerAgentResponse * updateContainerAgent(const EcsUpdateContainerAgentRequest &request);
    EcsUpdateServiceResponse * updateService(const EcsUpdateServiceRequest &request);

private:
    Q_DECLARE_PRIVATE(EcsClient)
    Q_DISABLE_COPY(EcsClient)

};

QTAWS_END_NAMESPACE

#endif
