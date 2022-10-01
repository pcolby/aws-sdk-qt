// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGCLIENT_H
#define QTAWS_MACHINELEARNINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmachinelearningglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MachineLearning {

class MachineLearningClientPrivate;
class AddTagsRequest;
class AddTagsResponse;
class CreateBatchPredictionRequest;
class CreateBatchPredictionResponse;
class CreateDataSourceFromRDSRequest;
class CreateDataSourceFromRDSResponse;
class CreateDataSourceFromRedshiftRequest;
class CreateDataSourceFromRedshiftResponse;
class CreateDataSourceFromS3Request;
class CreateDataSourceFromS3Response;
class CreateEvaluationRequest;
class CreateEvaluationResponse;
class CreateMLModelRequest;
class CreateMLModelResponse;
class CreateRealtimeEndpointRequest;
class CreateRealtimeEndpointResponse;
class DeleteBatchPredictionRequest;
class DeleteBatchPredictionResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteEvaluationRequest;
class DeleteEvaluationResponse;
class DeleteMLModelRequest;
class DeleteMLModelResponse;
class DeleteRealtimeEndpointRequest;
class DeleteRealtimeEndpointResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeBatchPredictionsRequest;
class DescribeBatchPredictionsResponse;
class DescribeDataSourcesRequest;
class DescribeDataSourcesResponse;
class DescribeEvaluationsRequest;
class DescribeEvaluationsResponse;
class DescribeMLModelsRequest;
class DescribeMLModelsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class GetBatchPredictionRequest;
class GetBatchPredictionResponse;
class GetDataSourceRequest;
class GetDataSourceResponse;
class GetEvaluationRequest;
class GetEvaluationResponse;
class GetMLModelRequest;
class GetMLModelResponse;
class PredictRequest;
class PredictResponse;
class UpdateBatchPredictionRequest;
class UpdateBatchPredictionResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateEvaluationRequest;
class UpdateEvaluationResponse;
class UpdateMLModelRequest;
class UpdateMLModelResponse;

class QTAWSMACHINELEARNING_EXPORT MachineLearningClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MachineLearningClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MachineLearningClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateBatchPredictionResponse * createBatchPrediction(const CreateBatchPredictionRequest &request);
    CreateDataSourceFromRDSResponse * createDataSourceFromRDS(const CreateDataSourceFromRDSRequest &request);
    CreateDataSourceFromRedshiftResponse * createDataSourceFromRedshift(const CreateDataSourceFromRedshiftRequest &request);
    CreateDataSourceFromS3Response * createDataSourceFromS3(const CreateDataSourceFromS3Request &request);
    CreateEvaluationResponse * createEvaluation(const CreateEvaluationRequest &request);
    CreateMLModelResponse * createMLModel(const CreateMLModelRequest &request);
    CreateRealtimeEndpointResponse * createRealtimeEndpoint(const CreateRealtimeEndpointRequest &request);
    DeleteBatchPredictionResponse * deleteBatchPrediction(const DeleteBatchPredictionRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteEvaluationResponse * deleteEvaluation(const DeleteEvaluationRequest &request);
    DeleteMLModelResponse * deleteMLModel(const DeleteMLModelRequest &request);
    DeleteRealtimeEndpointResponse * deleteRealtimeEndpoint(const DeleteRealtimeEndpointRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeBatchPredictionsResponse * describeBatchPredictions(const DescribeBatchPredictionsRequest &request);
    DescribeDataSourcesResponse * describeDataSources(const DescribeDataSourcesRequest &request);
    DescribeEvaluationsResponse * describeEvaluations(const DescribeEvaluationsRequest &request);
    DescribeMLModelsResponse * describeMLModels(const DescribeMLModelsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    GetBatchPredictionResponse * getBatchPrediction(const GetBatchPredictionRequest &request);
    GetDataSourceResponse * getDataSource(const GetDataSourceRequest &request);
    GetEvaluationResponse * getEvaluation(const GetEvaluationRequest &request);
    GetMLModelResponse * getMLModel(const GetMLModelRequest &request);
    PredictResponse * predict(const PredictRequest &request);
    UpdateBatchPredictionResponse * updateBatchPrediction(const UpdateBatchPredictionRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateEvaluationResponse * updateEvaluation(const UpdateEvaluationRequest &request);
    UpdateMLModelResponse * updateMLModel(const UpdateMLModelRequest &request);

private:
    Q_DECLARE_PRIVATE(MachineLearningClient)
    Q_DISABLE_COPY(MachineLearningClient)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
