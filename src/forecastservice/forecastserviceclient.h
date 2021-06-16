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

#ifndef QTAWS_FORECASTSERVICECLIENT_H
#define QTAWS_FORECASTSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ForecastService {

class ForecastServiceClientPrivate;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateDatasetGroupRequest;
class CreateDatasetGroupResponse;
class CreateDatasetImportJobRequest;
class CreateDatasetImportJobResponse;
class CreateForecastRequest;
class CreateForecastResponse;
class CreateForecastExportJobRequest;
class CreateForecastExportJobResponse;
class CreatePredictorRequest;
class CreatePredictorResponse;
class CreatePredictorBacktestExportJobRequest;
class CreatePredictorBacktestExportJobResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteDatasetGroupRequest;
class DeleteDatasetGroupResponse;
class DeleteDatasetImportJobRequest;
class DeleteDatasetImportJobResponse;
class DeleteForecastRequest;
class DeleteForecastResponse;
class DeleteForecastExportJobRequest;
class DeleteForecastExportJobResponse;
class DeletePredictorRequest;
class DeletePredictorResponse;
class DeletePredictorBacktestExportJobRequest;
class DeletePredictorBacktestExportJobResponse;
class DeleteResourceTreeRequest;
class DeleteResourceTreeResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeDatasetGroupRequest;
class DescribeDatasetGroupResponse;
class DescribeDatasetImportJobRequest;
class DescribeDatasetImportJobResponse;
class DescribeForecastRequest;
class DescribeForecastResponse;
class DescribeForecastExportJobRequest;
class DescribeForecastExportJobResponse;
class DescribePredictorRequest;
class DescribePredictorResponse;
class DescribePredictorBacktestExportJobRequest;
class DescribePredictorBacktestExportJobResponse;
class GetAccuracyMetricsRequest;
class GetAccuracyMetricsResponse;
class ListDatasetGroupsRequest;
class ListDatasetGroupsResponse;
class ListDatasetImportJobsRequest;
class ListDatasetImportJobsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListForecastExportJobsRequest;
class ListForecastExportJobsResponse;
class ListForecastsRequest;
class ListForecastsResponse;
class ListPredictorBacktestExportJobsRequest;
class ListPredictorBacktestExportJobsResponse;
class ListPredictorsRequest;
class ListPredictorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StopResourceRequest;
class StopResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatasetGroupRequest;
class UpdateDatasetGroupResponse;

class QTAWS_EXPORT ForecastServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ForecastServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ForecastServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateDatasetGroupResponse * createDatasetGroup(const CreateDatasetGroupRequest &request);
    CreateDatasetImportJobResponse * createDatasetImportJob(const CreateDatasetImportJobRequest &request);
    CreateForecastResponse * createForecast(const CreateForecastRequest &request);
    CreateForecastExportJobResponse * createForecastExportJob(const CreateForecastExportJobRequest &request);
    CreatePredictorResponse * createPredictor(const CreatePredictorRequest &request);
    CreatePredictorBacktestExportJobResponse * createPredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteDatasetGroupResponse * deleteDatasetGroup(const DeleteDatasetGroupRequest &request);
    DeleteDatasetImportJobResponse * deleteDatasetImportJob(const DeleteDatasetImportJobRequest &request);
    DeleteForecastResponse * deleteForecast(const DeleteForecastRequest &request);
    DeleteForecastExportJobResponse * deleteForecastExportJob(const DeleteForecastExportJobRequest &request);
    DeletePredictorResponse * deletePredictor(const DeletePredictorRequest &request);
    DeletePredictorBacktestExportJobResponse * deletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest &request);
    DeleteResourceTreeResponse * deleteResourceTree(const DeleteResourceTreeRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeDatasetGroupResponse * describeDatasetGroup(const DescribeDatasetGroupRequest &request);
    DescribeDatasetImportJobResponse * describeDatasetImportJob(const DescribeDatasetImportJobRequest &request);
    DescribeForecastResponse * describeForecast(const DescribeForecastRequest &request);
    DescribeForecastExportJobResponse * describeForecastExportJob(const DescribeForecastExportJobRequest &request);
    DescribePredictorResponse * describePredictor(const DescribePredictorRequest &request);
    DescribePredictorBacktestExportJobResponse * describePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest &request);
    GetAccuracyMetricsResponse * getAccuracyMetrics(const GetAccuracyMetricsRequest &request);
    ListDatasetGroupsResponse * listDatasetGroups(const ListDatasetGroupsRequest &request);
    ListDatasetImportJobsResponse * listDatasetImportJobs(const ListDatasetImportJobsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListForecastExportJobsResponse * listForecastExportJobs(const ListForecastExportJobsRequest &request);
    ListForecastsResponse * listForecasts(const ListForecastsRequest &request);
    ListPredictorBacktestExportJobsResponse * listPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest &request);
    ListPredictorsResponse * listPredictors(const ListPredictorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StopResourceResponse * stopResource(const StopResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatasetGroupResponse * updateDatasetGroup(const UpdateDatasetGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(ForecastServiceClient)
    Q_DISABLE_COPY(ForecastServiceClient)

};

} // namespace ForecastService
} // namespace QtAws

#endif
