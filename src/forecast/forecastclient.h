// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTCLIENT_H
#define QTAWS_FORECASTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsforecastglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Forecast {

class ForecastClientPrivate;
class CreateAutoPredictorRequest;
class CreateAutoPredictorResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateDatasetGroupRequest;
class CreateDatasetGroupResponse;
class CreateDatasetImportJobRequest;
class CreateDatasetImportJobResponse;
class CreateExplainabilityRequest;
class CreateExplainabilityResponse;
class CreateExplainabilityExportRequest;
class CreateExplainabilityExportResponse;
class CreateForecastRequest;
class CreateForecastResponse;
class CreateForecastExportJobRequest;
class CreateForecastExportJobResponse;
class CreateMonitorRequest;
class CreateMonitorResponse;
class CreatePredictorRequest;
class CreatePredictorResponse;
class CreatePredictorBacktestExportJobRequest;
class CreatePredictorBacktestExportJobResponse;
class CreateWhatIfAnalysisRequest;
class CreateWhatIfAnalysisResponse;
class CreateWhatIfForecastRequest;
class CreateWhatIfForecastResponse;
class CreateWhatIfForecastExportRequest;
class CreateWhatIfForecastExportResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteDatasetGroupRequest;
class DeleteDatasetGroupResponse;
class DeleteDatasetImportJobRequest;
class DeleteDatasetImportJobResponse;
class DeleteExplainabilityRequest;
class DeleteExplainabilityResponse;
class DeleteExplainabilityExportRequest;
class DeleteExplainabilityExportResponse;
class DeleteForecastRequest;
class DeleteForecastResponse;
class DeleteForecastExportJobRequest;
class DeleteForecastExportJobResponse;
class DeleteMonitorRequest;
class DeleteMonitorResponse;
class DeletePredictorRequest;
class DeletePredictorResponse;
class DeletePredictorBacktestExportJobRequest;
class DeletePredictorBacktestExportJobResponse;
class DeleteResourceTreeRequest;
class DeleteResourceTreeResponse;
class DeleteWhatIfAnalysisRequest;
class DeleteWhatIfAnalysisResponse;
class DeleteWhatIfForecastRequest;
class DeleteWhatIfForecastResponse;
class DeleteWhatIfForecastExportRequest;
class DeleteWhatIfForecastExportResponse;
class DescribeAutoPredictorRequest;
class DescribeAutoPredictorResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeDatasetGroupRequest;
class DescribeDatasetGroupResponse;
class DescribeDatasetImportJobRequest;
class DescribeDatasetImportJobResponse;
class DescribeExplainabilityRequest;
class DescribeExplainabilityResponse;
class DescribeExplainabilityExportRequest;
class DescribeExplainabilityExportResponse;
class DescribeForecastRequest;
class DescribeForecastResponse;
class DescribeForecastExportJobRequest;
class DescribeForecastExportJobResponse;
class DescribeMonitorRequest;
class DescribeMonitorResponse;
class DescribePredictorRequest;
class DescribePredictorResponse;
class DescribePredictorBacktestExportJobRequest;
class DescribePredictorBacktestExportJobResponse;
class DescribeWhatIfAnalysisRequest;
class DescribeWhatIfAnalysisResponse;
class DescribeWhatIfForecastRequest;
class DescribeWhatIfForecastResponse;
class DescribeWhatIfForecastExportRequest;
class DescribeWhatIfForecastExportResponse;
class GetAccuracyMetricsRequest;
class GetAccuracyMetricsResponse;
class ListDatasetGroupsRequest;
class ListDatasetGroupsResponse;
class ListDatasetImportJobsRequest;
class ListDatasetImportJobsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListExplainabilitiesRequest;
class ListExplainabilitiesResponse;
class ListExplainabilityExportsRequest;
class ListExplainabilityExportsResponse;
class ListForecastExportJobsRequest;
class ListForecastExportJobsResponse;
class ListForecastsRequest;
class ListForecastsResponse;
class ListMonitorEvaluationsRequest;
class ListMonitorEvaluationsResponse;
class ListMonitorsRequest;
class ListMonitorsResponse;
class ListPredictorBacktestExportJobsRequest;
class ListPredictorBacktestExportJobsResponse;
class ListPredictorsRequest;
class ListPredictorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWhatIfAnalysesRequest;
class ListWhatIfAnalysesResponse;
class ListWhatIfForecastExportsRequest;
class ListWhatIfForecastExportsResponse;
class ListWhatIfForecastsRequest;
class ListWhatIfForecastsResponse;
class ResumeResourceRequest;
class ResumeResourceResponse;
class StopResourceRequest;
class StopResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatasetGroupRequest;
class UpdateDatasetGroupResponse;

class QTAWSFORECAST_EXPORT ForecastClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ForecastClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ForecastClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAutoPredictorResponse * createAutoPredictor(const CreateAutoPredictorRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateDatasetGroupResponse * createDatasetGroup(const CreateDatasetGroupRequest &request);
    CreateDatasetImportJobResponse * createDatasetImportJob(const CreateDatasetImportJobRequest &request);
    CreateExplainabilityResponse * createExplainability(const CreateExplainabilityRequest &request);
    CreateExplainabilityExportResponse * createExplainabilityExport(const CreateExplainabilityExportRequest &request);
    CreateForecastResponse * createForecast(const CreateForecastRequest &request);
    CreateForecastExportJobResponse * createForecastExportJob(const CreateForecastExportJobRequest &request);
    CreateMonitorResponse * createMonitor(const CreateMonitorRequest &request);
    CreatePredictorResponse * createPredictor(const CreatePredictorRequest &request);
    CreatePredictorBacktestExportJobResponse * createPredictorBacktestExportJob(const CreatePredictorBacktestExportJobRequest &request);
    CreateWhatIfAnalysisResponse * createWhatIfAnalysis(const CreateWhatIfAnalysisRequest &request);
    CreateWhatIfForecastResponse * createWhatIfForecast(const CreateWhatIfForecastRequest &request);
    CreateWhatIfForecastExportResponse * createWhatIfForecastExport(const CreateWhatIfForecastExportRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteDatasetGroupResponse * deleteDatasetGroup(const DeleteDatasetGroupRequest &request);
    DeleteDatasetImportJobResponse * deleteDatasetImportJob(const DeleteDatasetImportJobRequest &request);
    DeleteExplainabilityResponse * deleteExplainability(const DeleteExplainabilityRequest &request);
    DeleteExplainabilityExportResponse * deleteExplainabilityExport(const DeleteExplainabilityExportRequest &request);
    DeleteForecastResponse * deleteForecast(const DeleteForecastRequest &request);
    DeleteForecastExportJobResponse * deleteForecastExportJob(const DeleteForecastExportJobRequest &request);
    DeleteMonitorResponse * deleteMonitor(const DeleteMonitorRequest &request);
    DeletePredictorResponse * deletePredictor(const DeletePredictorRequest &request);
    DeletePredictorBacktestExportJobResponse * deletePredictorBacktestExportJob(const DeletePredictorBacktestExportJobRequest &request);
    DeleteResourceTreeResponse * deleteResourceTree(const DeleteResourceTreeRequest &request);
    DeleteWhatIfAnalysisResponse * deleteWhatIfAnalysis(const DeleteWhatIfAnalysisRequest &request);
    DeleteWhatIfForecastResponse * deleteWhatIfForecast(const DeleteWhatIfForecastRequest &request);
    DeleteWhatIfForecastExportResponse * deleteWhatIfForecastExport(const DeleteWhatIfForecastExportRequest &request);
    DescribeAutoPredictorResponse * describeAutoPredictor(const DescribeAutoPredictorRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeDatasetGroupResponse * describeDatasetGroup(const DescribeDatasetGroupRequest &request);
    DescribeDatasetImportJobResponse * describeDatasetImportJob(const DescribeDatasetImportJobRequest &request);
    DescribeExplainabilityResponse * describeExplainability(const DescribeExplainabilityRequest &request);
    DescribeExplainabilityExportResponse * describeExplainabilityExport(const DescribeExplainabilityExportRequest &request);
    DescribeForecastResponse * describeForecast(const DescribeForecastRequest &request);
    DescribeForecastExportJobResponse * describeForecastExportJob(const DescribeForecastExportJobRequest &request);
    DescribeMonitorResponse * describeMonitor(const DescribeMonitorRequest &request);
    DescribePredictorResponse * describePredictor(const DescribePredictorRequest &request);
    DescribePredictorBacktestExportJobResponse * describePredictorBacktestExportJob(const DescribePredictorBacktestExportJobRequest &request);
    DescribeWhatIfAnalysisResponse * describeWhatIfAnalysis(const DescribeWhatIfAnalysisRequest &request);
    DescribeWhatIfForecastResponse * describeWhatIfForecast(const DescribeWhatIfForecastRequest &request);
    DescribeWhatIfForecastExportResponse * describeWhatIfForecastExport(const DescribeWhatIfForecastExportRequest &request);
    GetAccuracyMetricsResponse * getAccuracyMetrics(const GetAccuracyMetricsRequest &request);
    ListDatasetGroupsResponse * listDatasetGroups(const ListDatasetGroupsRequest &request);
    ListDatasetImportJobsResponse * listDatasetImportJobs(const ListDatasetImportJobsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListExplainabilitiesResponse * listExplainabilities(const ListExplainabilitiesRequest &request);
    ListExplainabilityExportsResponse * listExplainabilityExports(const ListExplainabilityExportsRequest &request);
    ListForecastExportJobsResponse * listForecastExportJobs(const ListForecastExportJobsRequest &request);
    ListForecastsResponse * listForecasts(const ListForecastsRequest &request);
    ListMonitorEvaluationsResponse * listMonitorEvaluations(const ListMonitorEvaluationsRequest &request);
    ListMonitorsResponse * listMonitors(const ListMonitorsRequest &request);
    ListPredictorBacktestExportJobsResponse * listPredictorBacktestExportJobs(const ListPredictorBacktestExportJobsRequest &request);
    ListPredictorsResponse * listPredictors(const ListPredictorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWhatIfAnalysesResponse * listWhatIfAnalyses(const ListWhatIfAnalysesRequest &request);
    ListWhatIfForecastExportsResponse * listWhatIfForecastExports(const ListWhatIfForecastExportsRequest &request);
    ListWhatIfForecastsResponse * listWhatIfForecasts(const ListWhatIfForecastsRequest &request);
    ResumeResourceResponse * resumeResource(const ResumeResourceRequest &request);
    StopResourceResponse * stopResource(const StopResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatasetGroupResponse * updateDatasetGroup(const UpdateDatasetGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(ForecastClient)
    Q_DISABLE_COPY(ForecastClient)

};

} // namespace Forecast
} // namespace QtAws

#endif
