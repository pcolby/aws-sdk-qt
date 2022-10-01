// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTMETRICSCLIENT_H
#define QTAWS_LOOKOUTMETRICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawslookoutmetricsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace LookoutMetrics {

class LookoutMetricsClientPrivate;
class ActivateAnomalyDetectorRequest;
class ActivateAnomalyDetectorResponse;
class BackTestAnomalyDetectorRequest;
class BackTestAnomalyDetectorResponse;
class CreateAlertRequest;
class CreateAlertResponse;
class CreateAnomalyDetectorRequest;
class CreateAnomalyDetectorResponse;
class CreateMetricSetRequest;
class CreateMetricSetResponse;
class DeactivateAnomalyDetectorRequest;
class DeactivateAnomalyDetectorResponse;
class DeleteAlertRequest;
class DeleteAlertResponse;
class DeleteAnomalyDetectorRequest;
class DeleteAnomalyDetectorResponse;
class DescribeAlertRequest;
class DescribeAlertResponse;
class DescribeAnomalyDetectionExecutionsRequest;
class DescribeAnomalyDetectionExecutionsResponse;
class DescribeAnomalyDetectorRequest;
class DescribeAnomalyDetectorResponse;
class DescribeMetricSetRequest;
class DescribeMetricSetResponse;
class DetectMetricSetConfigRequest;
class DetectMetricSetConfigResponse;
class GetAnomalyGroupRequest;
class GetAnomalyGroupResponse;
class GetDataQualityMetricsRequest;
class GetDataQualityMetricsResponse;
class GetFeedbackRequest;
class GetFeedbackResponse;
class GetSampleDataRequest;
class GetSampleDataResponse;
class ListAlertsRequest;
class ListAlertsResponse;
class ListAnomalyDetectorsRequest;
class ListAnomalyDetectorsResponse;
class ListAnomalyGroupRelatedMetricsRequest;
class ListAnomalyGroupRelatedMetricsResponse;
class ListAnomalyGroupSummariesRequest;
class ListAnomalyGroupSummariesResponse;
class ListAnomalyGroupTimeSeriesRequest;
class ListAnomalyGroupTimeSeriesResponse;
class ListMetricSetsRequest;
class ListMetricSetsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutFeedbackRequest;
class PutFeedbackResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAlertRequest;
class UpdateAlertResponse;
class UpdateAnomalyDetectorRequest;
class UpdateAnomalyDetectorResponse;
class UpdateMetricSetRequest;
class UpdateMetricSetResponse;

class QTAWSLOOKOUTMETRICS_EXPORT LookoutMetricsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    LookoutMetricsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit LookoutMetricsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivateAnomalyDetectorResponse * activateAnomalyDetector(const ActivateAnomalyDetectorRequest &request);
    BackTestAnomalyDetectorResponse * backTestAnomalyDetector(const BackTestAnomalyDetectorRequest &request);
    CreateAlertResponse * createAlert(const CreateAlertRequest &request);
    CreateAnomalyDetectorResponse * createAnomalyDetector(const CreateAnomalyDetectorRequest &request);
    CreateMetricSetResponse * createMetricSet(const CreateMetricSetRequest &request);
    DeactivateAnomalyDetectorResponse * deactivateAnomalyDetector(const DeactivateAnomalyDetectorRequest &request);
    DeleteAlertResponse * deleteAlert(const DeleteAlertRequest &request);
    DeleteAnomalyDetectorResponse * deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request);
    DescribeAlertResponse * describeAlert(const DescribeAlertRequest &request);
    DescribeAnomalyDetectionExecutionsResponse * describeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest &request);
    DescribeAnomalyDetectorResponse * describeAnomalyDetector(const DescribeAnomalyDetectorRequest &request);
    DescribeMetricSetResponse * describeMetricSet(const DescribeMetricSetRequest &request);
    DetectMetricSetConfigResponse * detectMetricSetConfig(const DetectMetricSetConfigRequest &request);
    GetAnomalyGroupResponse * getAnomalyGroup(const GetAnomalyGroupRequest &request);
    GetDataQualityMetricsResponse * getDataQualityMetrics(const GetDataQualityMetricsRequest &request);
    GetFeedbackResponse * getFeedback(const GetFeedbackRequest &request);
    GetSampleDataResponse * getSampleData(const GetSampleDataRequest &request);
    ListAlertsResponse * listAlerts(const ListAlertsRequest &request);
    ListAnomalyDetectorsResponse * listAnomalyDetectors(const ListAnomalyDetectorsRequest &request);
    ListAnomalyGroupRelatedMetricsResponse * listAnomalyGroupRelatedMetrics(const ListAnomalyGroupRelatedMetricsRequest &request);
    ListAnomalyGroupSummariesResponse * listAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest &request);
    ListAnomalyGroupTimeSeriesResponse * listAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest &request);
    ListMetricSetsResponse * listMetricSets(const ListMetricSetsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutFeedbackResponse * putFeedback(const PutFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAlertResponse * updateAlert(const UpdateAlertRequest &request);
    UpdateAnomalyDetectorResponse * updateAnomalyDetector(const UpdateAnomalyDetectorRequest &request);
    UpdateMetricSetResponse * updateMetricSet(const UpdateMetricSetRequest &request);

private:
    Q_DECLARE_PRIVATE(LookoutMetricsClient)
    Q_DISABLE_COPY(LookoutMetricsClient)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
