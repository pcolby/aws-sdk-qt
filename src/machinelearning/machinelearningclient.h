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

#ifndef QTAWS_MACHINELEARNINGCLIENT_H
#define QTAWS_MACHINELEARNINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MachineLearning {

class MachineLearningClientPrivate;
class AddTagsResponse;
class CreateBatchPredictionResponse;
class CreateDataSourceFromRDSResponse;
class CreateDataSourceFromRedshiftResponse;
class CreateDataSourceFromS3Response;
class CreateEvaluationResponse;
class CreateMLModelResponse;
class CreateRealtimeEndpointResponse;
class DeleteBatchPredictionResponse;
class DeleteDataSourceResponse;
class DeleteEvaluationResponse;
class DeleteMLModelResponse;
class DeleteRealtimeEndpointResponse;
class DeleteTagsResponse;
class DescribeBatchPredictionsResponse;
class DescribeDataSourcesResponse;
class DescribeEvaluationsResponse;
class DescribeMLModelsResponse;
class DescribeTagsResponse;
class GetBatchPredictionResponse;
class GetDataSourceResponse;
class GetEvaluationResponse;
class GetMLModelResponse;
class PredictResponse;
class UpdateBatchPredictionResponse;
class UpdateDataSourceResponse;
class UpdateEvaluationResponse;
class UpdateMLModelResponse;

class QTAWS_EXPORT MachineLearningClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MachineLearningClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MachineLearningClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
