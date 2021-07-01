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
class GetAnomalyGroupRequest;
class GetAnomalyGroupResponse;
class GetFeedbackRequest;
class GetFeedbackResponse;
class GetSampleDataRequest;
class GetSampleDataResponse;
class ListAlertsRequest;
class ListAlertsResponse;
class ListAnomalyDetectorsRequest;
class ListAnomalyDetectorsResponse;
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
    DeleteAlertResponse * deleteAlert(const DeleteAlertRequest &request);
    DeleteAnomalyDetectorResponse * deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request);
    DescribeAlertResponse * describeAlert(const DescribeAlertRequest &request);
    DescribeAnomalyDetectionExecutionsResponse * describeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest &request);
    DescribeAnomalyDetectorResponse * describeAnomalyDetector(const DescribeAnomalyDetectorRequest &request);
    DescribeMetricSetResponse * describeMetricSet(const DescribeMetricSetRequest &request);
    GetAnomalyGroupResponse * getAnomalyGroup(const GetAnomalyGroupRequest &request);
    GetFeedbackResponse * getFeedback(const GetFeedbackRequest &request);
    GetSampleDataResponse * getSampleData(const GetSampleDataRequest &request);
    ListAlertsResponse * listAlerts(const ListAlertsRequest &request);
    ListAnomalyDetectorsResponse * listAnomalyDetectors(const ListAnomalyDetectorsRequest &request);
    ListAnomalyGroupSummariesResponse * listAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest &request);
    ListAnomalyGroupTimeSeriesResponse * listAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest &request);
    ListMetricSetsResponse * listMetricSets(const ListMetricSetsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutFeedbackResponse * putFeedback(const PutFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAnomalyDetectorResponse * updateAnomalyDetector(const UpdateAnomalyDetectorRequest &request);
    UpdateMetricSetResponse * updateMetricSet(const UpdateMetricSetRequest &request);

private:
    Q_DECLARE_PRIVATE(LookoutMetricsClient)
    Q_DISABLE_COPY(LookoutMetricsClient)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
