/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CLOUDWATCHCLIENT_H
#define QTAWS_CLOUDWATCHCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudWatch {

class CloudWatchClientPrivate;
class DeleteAlarmsRequest;
class DeleteAlarmsResponse;
class DeleteAnomalyDetectorRequest;
class DeleteAnomalyDetectorResponse;
class DeleteDashboardsRequest;
class DeleteDashboardsResponse;
class DescribeAlarmHistoryRequest;
class DescribeAlarmHistoryResponse;
class DescribeAlarmsRequest;
class DescribeAlarmsResponse;
class DescribeAlarmsForMetricRequest;
class DescribeAlarmsForMetricResponse;
class DescribeAnomalyDetectorsRequest;
class DescribeAnomalyDetectorsResponse;
class DisableAlarmActionsRequest;
class DisableAlarmActionsResponse;
class EnableAlarmActionsRequest;
class EnableAlarmActionsResponse;
class GetDashboardRequest;
class GetDashboardResponse;
class GetMetricDataRequest;
class GetMetricDataResponse;
class GetMetricStatisticsRequest;
class GetMetricStatisticsResponse;
class GetMetricWidgetImageRequest;
class GetMetricWidgetImageResponse;
class ListDashboardsRequest;
class ListDashboardsResponse;
class ListMetricsRequest;
class ListMetricsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAnomalyDetectorRequest;
class PutAnomalyDetectorResponse;
class PutDashboardRequest;
class PutDashboardResponse;
class PutMetricAlarmRequest;
class PutMetricAlarmResponse;
class PutMetricDataRequest;
class PutMetricDataResponse;
class SetAlarmStateRequest;
class SetAlarmStateResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT CloudWatchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteAlarmsResponse * deleteAlarms(const DeleteAlarmsRequest &request);
    DeleteAnomalyDetectorResponse * deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request);
    DeleteDashboardsResponse * deleteDashboards(const DeleteDashboardsRequest &request);
    DescribeAlarmHistoryResponse * describeAlarmHistory(const DescribeAlarmHistoryRequest &request);
    DescribeAlarmsResponse * describeAlarms(const DescribeAlarmsRequest &request);
    DescribeAlarmsForMetricResponse * describeAlarmsForMetric(const DescribeAlarmsForMetricRequest &request);
    DescribeAnomalyDetectorsResponse * describeAnomalyDetectors(const DescribeAnomalyDetectorsRequest &request);
    DisableAlarmActionsResponse * disableAlarmActions(const DisableAlarmActionsRequest &request);
    EnableAlarmActionsResponse * enableAlarmActions(const EnableAlarmActionsRequest &request);
    GetDashboardResponse * getDashboard(const GetDashboardRequest &request);
    GetMetricDataResponse * getMetricData(const GetMetricDataRequest &request);
    GetMetricStatisticsResponse * getMetricStatistics(const GetMetricStatisticsRequest &request);
    GetMetricWidgetImageResponse * getMetricWidgetImage(const GetMetricWidgetImageRequest &request);
    ListDashboardsResponse * listDashboards(const ListDashboardsRequest &request);
    ListMetricsResponse * listMetrics(const ListMetricsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAnomalyDetectorResponse * putAnomalyDetector(const PutAnomalyDetectorRequest &request);
    PutDashboardResponse * putDashboard(const PutDashboardRequest &request);
    PutMetricAlarmResponse * putMetricAlarm(const PutMetricAlarmRequest &request);
    PutMetricDataResponse * putMetricData(const PutMetricDataRequest &request);
    SetAlarmStateResponse * setAlarmState(const SetAlarmStateRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchClient)
    Q_DISABLE_COPY(CloudWatchClient)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
