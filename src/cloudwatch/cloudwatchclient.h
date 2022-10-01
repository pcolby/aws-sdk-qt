// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDWATCHCLIENT_H
#define QTAWS_CLOUDWATCHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudwatchglobal.h"

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
class DeleteInsightRulesRequest;
class DeleteInsightRulesResponse;
class DeleteMetricStreamRequest;
class DeleteMetricStreamResponse;
class DescribeAlarmHistoryRequest;
class DescribeAlarmHistoryResponse;
class DescribeAlarmsRequest;
class DescribeAlarmsResponse;
class DescribeAlarmsForMetricRequest;
class DescribeAlarmsForMetricResponse;
class DescribeAnomalyDetectorsRequest;
class DescribeAnomalyDetectorsResponse;
class DescribeInsightRulesRequest;
class DescribeInsightRulesResponse;
class DisableAlarmActionsRequest;
class DisableAlarmActionsResponse;
class DisableInsightRulesRequest;
class DisableInsightRulesResponse;
class EnableAlarmActionsRequest;
class EnableAlarmActionsResponse;
class EnableInsightRulesRequest;
class EnableInsightRulesResponse;
class GetDashboardRequest;
class GetDashboardResponse;
class GetInsightRuleReportRequest;
class GetInsightRuleReportResponse;
class GetMetricDataRequest;
class GetMetricDataResponse;
class GetMetricStatisticsRequest;
class GetMetricStatisticsResponse;
class GetMetricStreamRequest;
class GetMetricStreamResponse;
class GetMetricWidgetImageRequest;
class GetMetricWidgetImageResponse;
class ListDashboardsRequest;
class ListDashboardsResponse;
class ListManagedInsightRulesRequest;
class ListManagedInsightRulesResponse;
class ListMetricStreamsRequest;
class ListMetricStreamsResponse;
class ListMetricsRequest;
class ListMetricsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAnomalyDetectorRequest;
class PutAnomalyDetectorResponse;
class PutCompositeAlarmRequest;
class PutCompositeAlarmResponse;
class PutDashboardRequest;
class PutDashboardResponse;
class PutInsightRuleRequest;
class PutInsightRuleResponse;
class PutManagedInsightRulesRequest;
class PutManagedInsightRulesResponse;
class PutMetricAlarmRequest;
class PutMetricAlarmResponse;
class PutMetricDataRequest;
class PutMetricDataResponse;
class PutMetricStreamRequest;
class PutMetricStreamResponse;
class SetAlarmStateRequest;
class SetAlarmStateResponse;
class StartMetricStreamsRequest;
class StartMetricStreamsResponse;
class StopMetricStreamsRequest;
class StopMetricStreamsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSCLOUDWATCH_EXPORT CloudWatchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudWatchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteAlarmsResponse * deleteAlarms(const DeleteAlarmsRequest &request);
    DeleteAnomalyDetectorResponse * deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request);
    DeleteDashboardsResponse * deleteDashboards(const DeleteDashboardsRequest &request);
    DeleteInsightRulesResponse * deleteInsightRules(const DeleteInsightRulesRequest &request);
    DeleteMetricStreamResponse * deleteMetricStream(const DeleteMetricStreamRequest &request);
    DescribeAlarmHistoryResponse * describeAlarmHistory(const DescribeAlarmHistoryRequest &request);
    DescribeAlarmsResponse * describeAlarms(const DescribeAlarmsRequest &request);
    DescribeAlarmsForMetricResponse * describeAlarmsForMetric(const DescribeAlarmsForMetricRequest &request);
    DescribeAnomalyDetectorsResponse * describeAnomalyDetectors(const DescribeAnomalyDetectorsRequest &request);
    DescribeInsightRulesResponse * describeInsightRules(const DescribeInsightRulesRequest &request);
    DisableAlarmActionsResponse * disableAlarmActions(const DisableAlarmActionsRequest &request);
    DisableInsightRulesResponse * disableInsightRules(const DisableInsightRulesRequest &request);
    EnableAlarmActionsResponse * enableAlarmActions(const EnableAlarmActionsRequest &request);
    EnableInsightRulesResponse * enableInsightRules(const EnableInsightRulesRequest &request);
    GetDashboardResponse * getDashboard(const GetDashboardRequest &request);
    GetInsightRuleReportResponse * getInsightRuleReport(const GetInsightRuleReportRequest &request);
    GetMetricDataResponse * getMetricData(const GetMetricDataRequest &request);
    GetMetricStatisticsResponse * getMetricStatistics(const GetMetricStatisticsRequest &request);
    GetMetricStreamResponse * getMetricStream(const GetMetricStreamRequest &request);
    GetMetricWidgetImageResponse * getMetricWidgetImage(const GetMetricWidgetImageRequest &request);
    ListDashboardsResponse * listDashboards(const ListDashboardsRequest &request);
    ListManagedInsightRulesResponse * listManagedInsightRules(const ListManagedInsightRulesRequest &request);
    ListMetricStreamsResponse * listMetricStreams(const ListMetricStreamsRequest &request);
    ListMetricsResponse * listMetrics(const ListMetricsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAnomalyDetectorResponse * putAnomalyDetector(const PutAnomalyDetectorRequest &request);
    PutCompositeAlarmResponse * putCompositeAlarm(const PutCompositeAlarmRequest &request);
    PutDashboardResponse * putDashboard(const PutDashboardRequest &request);
    PutInsightRuleResponse * putInsightRule(const PutInsightRuleRequest &request);
    PutManagedInsightRulesResponse * putManagedInsightRules(const PutManagedInsightRulesRequest &request);
    PutMetricAlarmResponse * putMetricAlarm(const PutMetricAlarmRequest &request);
    PutMetricDataResponse * putMetricData(const PutMetricDataRequest &request);
    PutMetricStreamResponse * putMetricStream(const PutMetricStreamRequest &request);
    SetAlarmStateResponse * setAlarmState(const SetAlarmStateRequest &request);
    StartMetricStreamsResponse * startMetricStreams(const StartMetricStreamsRequest &request);
    StopMetricStreamsResponse * stopMetricStreams(const StopMetricStreamsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchClient)
    Q_DISABLE_COPY(CloudWatchClient)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
