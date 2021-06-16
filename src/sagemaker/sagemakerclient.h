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

#ifndef QTAWS_SAGEMAKERCLIENT_H
#define QTAWS_SAGEMAKERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SageMaker {

class SageMakerClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class CreateAlgorithmRequest;
class CreateAlgorithmResponse;
class CreateCodeRepositoryRequest;
class CreateCodeRepositoryResponse;
class CreateCompilationJobRequest;
class CreateCompilationJobResponse;
class CreateEndpointRequest;
class CreateEndpointResponse;
class CreateEndpointConfigRequest;
class CreateEndpointConfigResponse;
class CreateHyperParameterTuningJobRequest;
class CreateHyperParameterTuningJobResponse;
class CreateLabelingJobRequest;
class CreateLabelingJobResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateModelPackageRequest;
class CreateModelPackageResponse;
class CreateNotebookInstanceRequest;
class CreateNotebookInstanceResponse;
class CreateNotebookInstanceLifecycleConfigRequest;
class CreateNotebookInstanceLifecycleConfigResponse;
class CreatePresignedNotebookInstanceUrlRequest;
class CreatePresignedNotebookInstanceUrlResponse;
class CreateTrainingJobRequest;
class CreateTrainingJobResponse;
class CreateTransformJobRequest;
class CreateTransformJobResponse;
class CreateWorkteamRequest;
class CreateWorkteamResponse;
class DeleteAlgorithmRequest;
class DeleteAlgorithmResponse;
class DeleteCodeRepositoryRequest;
class DeleteCodeRepositoryResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEndpointConfigRequest;
class DeleteEndpointConfigResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteModelPackageRequest;
class DeleteModelPackageResponse;
class DeleteNotebookInstanceRequest;
class DeleteNotebookInstanceResponse;
class DeleteNotebookInstanceLifecycleConfigRequest;
class DeleteNotebookInstanceLifecycleConfigResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DeleteWorkteamRequest;
class DeleteWorkteamResponse;
class DescribeAlgorithmRequest;
class DescribeAlgorithmResponse;
class DescribeCodeRepositoryRequest;
class DescribeCodeRepositoryResponse;
class DescribeCompilationJobRequest;
class DescribeCompilationJobResponse;
class DescribeEndpointRequest;
class DescribeEndpointResponse;
class DescribeEndpointConfigRequest;
class DescribeEndpointConfigResponse;
class DescribeHyperParameterTuningJobRequest;
class DescribeHyperParameterTuningJobResponse;
class DescribeLabelingJobRequest;
class DescribeLabelingJobResponse;
class DescribeModelRequest;
class DescribeModelResponse;
class DescribeModelPackageRequest;
class DescribeModelPackageResponse;
class DescribeNotebookInstanceRequest;
class DescribeNotebookInstanceResponse;
class DescribeNotebookInstanceLifecycleConfigRequest;
class DescribeNotebookInstanceLifecycleConfigResponse;
class DescribeSubscribedWorkteamRequest;
class DescribeSubscribedWorkteamResponse;
class DescribeTrainingJobRequest;
class DescribeTrainingJobResponse;
class DescribeTransformJobRequest;
class DescribeTransformJobResponse;
class DescribeWorkteamRequest;
class DescribeWorkteamResponse;
class GetSearchSuggestionsRequest;
class GetSearchSuggestionsResponse;
class ListAlgorithmsRequest;
class ListAlgorithmsResponse;
class ListCodeRepositoriesRequest;
class ListCodeRepositoriesResponse;
class ListCompilationJobsRequest;
class ListCompilationJobsResponse;
class ListEndpointConfigsRequest;
class ListEndpointConfigsResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;
class ListHyperParameterTuningJobsRequest;
class ListHyperParameterTuningJobsResponse;
class ListLabelingJobsRequest;
class ListLabelingJobsResponse;
class ListLabelingJobsForWorkteamRequest;
class ListLabelingJobsForWorkteamResponse;
class ListModelPackagesRequest;
class ListModelPackagesResponse;
class ListModelsRequest;
class ListModelsResponse;
class ListNotebookInstanceLifecycleConfigsRequest;
class ListNotebookInstanceLifecycleConfigsResponse;
class ListNotebookInstancesRequest;
class ListNotebookInstancesResponse;
class ListSubscribedWorkteamsRequest;
class ListSubscribedWorkteamsResponse;
class ListTagsRequest;
class ListTagsResponse;
class ListTrainingJobsRequest;
class ListTrainingJobsResponse;
class ListTrainingJobsForHyperParameterTuningJobRequest;
class ListTrainingJobsForHyperParameterTuningJobResponse;
class ListTransformJobsRequest;
class ListTransformJobsResponse;
class ListWorkteamsRequest;
class ListWorkteamsResponse;
class RenderUiTemplateRequest;
class RenderUiTemplateResponse;
class SearchRequest;
class SearchResponse;
class StartNotebookInstanceRequest;
class StartNotebookInstanceResponse;
class StopCompilationJobRequest;
class StopCompilationJobResponse;
class StopHyperParameterTuningJobRequest;
class StopHyperParameterTuningJobResponse;
class StopLabelingJobRequest;
class StopLabelingJobResponse;
class StopNotebookInstanceRequest;
class StopNotebookInstanceResponse;
class StopTrainingJobRequest;
class StopTrainingJobResponse;
class StopTransformJobRequest;
class StopTransformJobResponse;
class UpdateCodeRepositoryRequest;
class UpdateCodeRepositoryResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;
class UpdateEndpointWeightsAndCapacitiesRequest;
class UpdateEndpointWeightsAndCapacitiesResponse;
class UpdateNotebookInstanceRequest;
class UpdateNotebookInstanceResponse;
class UpdateNotebookInstanceLifecycleConfigRequest;
class UpdateNotebookInstanceLifecycleConfigResponse;
class UpdateWorkteamRequest;
class UpdateWorkteamResponse;

class QTAWS_EXPORT SageMakerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SageMakerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SageMakerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateAlgorithmResponse * createAlgorithm(const CreateAlgorithmRequest &request);
    CreateCodeRepositoryResponse * createCodeRepository(const CreateCodeRepositoryRequest &request);
    CreateCompilationJobResponse * createCompilationJob(const CreateCompilationJobRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEndpointConfigResponse * createEndpointConfig(const CreateEndpointConfigRequest &request);
    CreateHyperParameterTuningJobResponse * createHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest &request);
    CreateLabelingJobResponse * createLabelingJob(const CreateLabelingJobRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateModelPackageResponse * createModelPackage(const CreateModelPackageRequest &request);
    CreateNotebookInstanceResponse * createNotebookInstance(const CreateNotebookInstanceRequest &request);
    CreateNotebookInstanceLifecycleConfigResponse * createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request);
    CreatePresignedNotebookInstanceUrlResponse * createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request);
    CreateTrainingJobResponse * createTrainingJob(const CreateTrainingJobRequest &request);
    CreateTransformJobResponse * createTransformJob(const CreateTransformJobRequest &request);
    CreateWorkteamResponse * createWorkteam(const CreateWorkteamRequest &request);
    DeleteAlgorithmResponse * deleteAlgorithm(const DeleteAlgorithmRequest &request);
    DeleteCodeRepositoryResponse * deleteCodeRepository(const DeleteCodeRepositoryRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEndpointConfigResponse * deleteEndpointConfig(const DeleteEndpointConfigRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteModelPackageResponse * deleteModelPackage(const DeleteModelPackageRequest &request);
    DeleteNotebookInstanceResponse * deleteNotebookInstance(const DeleteNotebookInstanceRequest &request);
    DeleteNotebookInstanceLifecycleConfigResponse * deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteWorkteamResponse * deleteWorkteam(const DeleteWorkteamRequest &request);
    DescribeAlgorithmResponse * describeAlgorithm(const DescribeAlgorithmRequest &request);
    DescribeCodeRepositoryResponse * describeCodeRepository(const DescribeCodeRepositoryRequest &request);
    DescribeCompilationJobResponse * describeCompilationJob(const DescribeCompilationJobRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEndpointConfigResponse * describeEndpointConfig(const DescribeEndpointConfigRequest &request);
    DescribeHyperParameterTuningJobResponse * describeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest &request);
    DescribeLabelingJobResponse * describeLabelingJob(const DescribeLabelingJobRequest &request);
    DescribeModelResponse * describeModel(const DescribeModelRequest &request);
    DescribeModelPackageResponse * describeModelPackage(const DescribeModelPackageRequest &request);
    DescribeNotebookInstanceResponse * describeNotebookInstance(const DescribeNotebookInstanceRequest &request);
    DescribeNotebookInstanceLifecycleConfigResponse * describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request);
    DescribeSubscribedWorkteamResponse * describeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest &request);
    DescribeTrainingJobResponse * describeTrainingJob(const DescribeTrainingJobRequest &request);
    DescribeTransformJobResponse * describeTransformJob(const DescribeTransformJobRequest &request);
    DescribeWorkteamResponse * describeWorkteam(const DescribeWorkteamRequest &request);
    GetSearchSuggestionsResponse * getSearchSuggestions(const GetSearchSuggestionsRequest &request);
    ListAlgorithmsResponse * listAlgorithms(const ListAlgorithmsRequest &request);
    ListCodeRepositoriesResponse * listCodeRepositories(const ListCodeRepositoriesRequest &request);
    ListCompilationJobsResponse * listCompilationJobs(const ListCompilationJobsRequest &request);
    ListEndpointConfigsResponse * listEndpointConfigs(const ListEndpointConfigsRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);
    ListHyperParameterTuningJobsResponse * listHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest &request);
    ListLabelingJobsResponse * listLabelingJobs(const ListLabelingJobsRequest &request);
    ListLabelingJobsForWorkteamResponse * listLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest &request);
    ListModelPackagesResponse * listModelPackages(const ListModelPackagesRequest &request);
    ListModelsResponse * listModels(const ListModelsRequest &request);
    ListNotebookInstanceLifecycleConfigsResponse * listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request);
    ListNotebookInstancesResponse * listNotebookInstances(const ListNotebookInstancesRequest &request);
    ListSubscribedWorkteamsResponse * listSubscribedWorkteams(const ListSubscribedWorkteamsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ListTrainingJobsResponse * listTrainingJobs(const ListTrainingJobsRequest &request);
    ListTrainingJobsForHyperParameterTuningJobResponse * listTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest &request);
    ListTransformJobsResponse * listTransformJobs(const ListTransformJobsRequest &request);
    ListWorkteamsResponse * listWorkteams(const ListWorkteamsRequest &request);
    RenderUiTemplateResponse * renderUiTemplate(const RenderUiTemplateRequest &request);
    SearchResponse * search(const SearchRequest &request);
    StartNotebookInstanceResponse * startNotebookInstance(const StartNotebookInstanceRequest &request);
    StopCompilationJobResponse * stopCompilationJob(const StopCompilationJobRequest &request);
    StopHyperParameterTuningJobResponse * stopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest &request);
    StopLabelingJobResponse * stopLabelingJob(const StopLabelingJobRequest &request);
    StopNotebookInstanceResponse * stopNotebookInstance(const StopNotebookInstanceRequest &request);
    StopTrainingJobResponse * stopTrainingJob(const StopTrainingJobRequest &request);
    StopTransformJobResponse * stopTransformJob(const StopTransformJobRequest &request);
    UpdateCodeRepositoryResponse * updateCodeRepository(const UpdateCodeRepositoryRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointWeightsAndCapacitiesResponse * updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request);
    UpdateNotebookInstanceResponse * updateNotebookInstance(const UpdateNotebookInstanceRequest &request);
    UpdateNotebookInstanceLifecycleConfigResponse * updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request);
    UpdateWorkteamResponse * updateWorkteam(const UpdateWorkteamRequest &request);

private:
    Q_DECLARE_PRIVATE(SageMakerClient)
    Q_DISABLE_COPY(SageMakerClient)

};

} // namespace SageMaker
} // namespace QtAws

#endif
