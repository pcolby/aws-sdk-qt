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

#ifndef QTAWS_MACHINELEARNINGCLIENT_H
#define QTAWS_MACHINELEARNINGCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class MachineLearningClientPrivate;

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
    MachineLearningAddTagsResponse * addTags(const MachineLearningAddTagsRequest &request);
    MachineLearningCreateBatchPredictionResponse * createBatchPrediction(const MachineLearningCreateBatchPredictionRequest &request);
    MachineLearningCreateDataSourceFromRDSResponse * createDataSourceFromRDS(const MachineLearningCreateDataSourceFromRDSRequest &request);
    MachineLearningCreateDataSourceFromRedshiftResponse * createDataSourceFromRedshift(const MachineLearningCreateDataSourceFromRedshiftRequest &request);
    MachineLearningCreateDataSourceFromS3Response * createDataSourceFromS3(const MachineLearningCreateDataSourceFromS3Request &request);
    MachineLearningCreateEvaluationResponse * createEvaluation(const MachineLearningCreateEvaluationRequest &request);
    MachineLearningCreateMLModelResponse * createMLModel(const MachineLearningCreateMLModelRequest &request);
    MachineLearningCreateRealtimeEndpointResponse * createRealtimeEndpoint(const MachineLearningCreateRealtimeEndpointRequest &request);
    MachineLearningDeleteBatchPredictionResponse * deleteBatchPrediction(const MachineLearningDeleteBatchPredictionRequest &request);
    MachineLearningDeleteDataSourceResponse * deleteDataSource(const MachineLearningDeleteDataSourceRequest &request);
    MachineLearningDeleteEvaluationResponse * deleteEvaluation(const MachineLearningDeleteEvaluationRequest &request);
    MachineLearningDeleteMLModelResponse * deleteMLModel(const MachineLearningDeleteMLModelRequest &request);
    MachineLearningDeleteRealtimeEndpointResponse * deleteRealtimeEndpoint(const MachineLearningDeleteRealtimeEndpointRequest &request);
    MachineLearningDeleteTagsResponse * deleteTags(const MachineLearningDeleteTagsRequest &request);
    MachineLearningDescribeBatchPredictionsResponse * describeBatchPredictions(const MachineLearningDescribeBatchPredictionsRequest &request);
    MachineLearningDescribeDataSourcesResponse * describeDataSources(const MachineLearningDescribeDataSourcesRequest &request);
    MachineLearningDescribeEvaluationsResponse * describeEvaluations(const MachineLearningDescribeEvaluationsRequest &request);
    MachineLearningDescribeMLModelsResponse * describeMLModels(const MachineLearningDescribeMLModelsRequest &request);
    MachineLearningDescribeTagsResponse * describeTags(const MachineLearningDescribeTagsRequest &request);
    MachineLearningGetBatchPredictionResponse * getBatchPrediction(const MachineLearningGetBatchPredictionRequest &request);
    MachineLearningGetDataSourceResponse * getDataSource(const MachineLearningGetDataSourceRequest &request);
    MachineLearningGetEvaluationResponse * getEvaluation(const MachineLearningGetEvaluationRequest &request);
    MachineLearningGetMLModelResponse * getMLModel(const MachineLearningGetMLModelRequest &request);
    MachineLearningPredictResponse * predict(const MachineLearningPredictRequest &request);
    MachineLearningUpdateBatchPredictionResponse * updateBatchPrediction(const MachineLearningUpdateBatchPredictionRequest &request);
    MachineLearningUpdateDataSourceResponse * updateDataSource(const MachineLearningUpdateDataSourceRequest &request);
    MachineLearningUpdateEvaluationResponse * updateEvaluation(const MachineLearningUpdateEvaluationRequest &request);
    MachineLearningUpdateMLModelResponse * updateMLModel(const MachineLearningUpdateMLModelRequest &request);

private:
    Q_DECLARE_PRIVATE(MachineLearningClient)
    Q_DISABLE_COPY(MachineLearningClient)

};

QTAWS_END_NAMESPACE

#endif
