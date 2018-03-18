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

#ifndef QTAWS_SAGEMAKERCLIENT_H
#define QTAWS_SAGEMAKERCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SageMaker {

class SageMakerClientPrivate;

class QTAWS_EXPORT SageMakerClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SageMakerClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEndpointConfigResponse * createEndpointConfig(const CreateEndpointConfigRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateNotebookInstanceResponse * createNotebookInstance(const CreateNotebookInstanceRequest &request);
    CreateNotebookInstanceLifecycleConfigResponse * createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request);
    CreatePresignedNotebookInstanceUrlResponse * createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request);
    CreateTrainingJobResponse * createTrainingJob(const CreateTrainingJobRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEndpointConfigResponse * deleteEndpointConfig(const DeleteEndpointConfigRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteNotebookInstanceResponse * deleteNotebookInstance(const DeleteNotebookInstanceRequest &request);
    DeleteNotebookInstanceLifecycleConfigResponse * deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEndpointConfigResponse * describeEndpointConfig(const DescribeEndpointConfigRequest &request);
    DescribeModelResponse * describeModel(const DescribeModelRequest &request);
    DescribeNotebookInstanceResponse * describeNotebookInstance(const DescribeNotebookInstanceRequest &request);
    DescribeNotebookInstanceLifecycleConfigResponse * describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request);
    DescribeTrainingJobResponse * describeTrainingJob(const DescribeTrainingJobRequest &request);
    ListEndpointConfigsResponse * listEndpointConfigs(const ListEndpointConfigsRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListModelsResponse * listModels(const ListModelsRequest &request);
    ListNotebookInstanceLifecycleConfigsResponse * listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request);
    ListNotebookInstancesResponse * listNotebookInstances(const ListNotebookInstancesRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListTrainingJobsResponse * listTrainingJobs(const ListTrainingJobsRequest &request);
    StartNotebookInstanceResponse * startNotebookInstance(const StartNotebookInstanceRequest &request);
    StopNotebookInstanceResponse * stopNotebookInstance(const StopNotebookInstanceRequest &request);
    StopTrainingJobResponse * stopTrainingJob(const StopTrainingJobRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointWeightsAndCapacitiesResponse * updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request);
    UpdateNotebookInstanceResponse * updateNotebookInstance(const UpdateNotebookInstanceRequest &request);
    UpdateNotebookInstanceLifecycleConfigResponse * updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerClient)
    Q_DISABLE_COPY(SageMakerClient)

};

} // namespace SageMaker
} // namespace AWS

#endif
