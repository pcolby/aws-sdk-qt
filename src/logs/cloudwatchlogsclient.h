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

#ifndef QTAWS_CLOUDWATCHLOGSCLIENT_H
#define QTAWS_CLOUDWATCHLOGSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CloudWatchLogsClientPrivate;

class QTAWS_EXPORT CloudWatchLogsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchLogsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchLogsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloudWatchLogsCancelExportTaskResponse * cancelExportTask(const CloudWatchLogsCancelExportTaskRequest &request);
    CloudWatchLogsCreateExportTaskResponse * createExportTask(const CloudWatchLogsCreateExportTaskRequest &request);
    CloudWatchLogsCreateLogGroupResponse * createLogGroup(const CloudWatchLogsCreateLogGroupRequest &request);
    CloudWatchLogsCreateLogStreamResponse * createLogStream(const CloudWatchLogsCreateLogStreamRequest &request);
    CloudWatchLogsDeleteDestinationResponse * deleteDestination(const CloudWatchLogsDeleteDestinationRequest &request);
    CloudWatchLogsDeleteLogGroupResponse * deleteLogGroup(const CloudWatchLogsDeleteLogGroupRequest &request);
    CloudWatchLogsDeleteLogStreamResponse * deleteLogStream(const CloudWatchLogsDeleteLogStreamRequest &request);
    CloudWatchLogsDeleteMetricFilterResponse * deleteMetricFilter(const CloudWatchLogsDeleteMetricFilterRequest &request);
    CloudWatchLogsDeleteRetentionPolicyResponse * deleteRetentionPolicy(const CloudWatchLogsDeleteRetentionPolicyRequest &request);
    CloudWatchLogsDeleteSubscriptionFilterResponse * deleteSubscriptionFilter(const CloudWatchLogsDeleteSubscriptionFilterRequest &request);
    CloudWatchLogsDescribeDestinationsResponse * describeDestinations(const CloudWatchLogsDescribeDestinationsRequest &request);
    CloudWatchLogsDescribeExportTasksResponse * describeExportTasks(const CloudWatchLogsDescribeExportTasksRequest &request);
    CloudWatchLogsDescribeLogGroupsResponse * describeLogGroups(const CloudWatchLogsDescribeLogGroupsRequest &request);
    CloudWatchLogsDescribeLogStreamsResponse * describeLogStreams(const CloudWatchLogsDescribeLogStreamsRequest &request);
    CloudWatchLogsDescribeMetricFiltersResponse * describeMetricFilters(const CloudWatchLogsDescribeMetricFiltersRequest &request);
    CloudWatchLogsDescribeSubscriptionFiltersResponse * describeSubscriptionFilters(const CloudWatchLogsDescribeSubscriptionFiltersRequest &request);
    CloudWatchLogsFilterLogEventsResponse * filterLogEvents(const CloudWatchLogsFilterLogEventsRequest &request);
    CloudWatchLogsGetLogEventsResponse * getLogEvents(const CloudWatchLogsGetLogEventsRequest &request);
    CloudWatchLogsPutDestinationResponse * putDestination(const CloudWatchLogsPutDestinationRequest &request);
    CloudWatchLogsPutDestinationPolicyResponse * putDestinationPolicy(const CloudWatchLogsPutDestinationPolicyRequest &request);
    CloudWatchLogsPutLogEventsResponse * putLogEvents(const CloudWatchLogsPutLogEventsRequest &request);
    CloudWatchLogsPutMetricFilterResponse * putMetricFilter(const CloudWatchLogsPutMetricFilterRequest &request);
    CloudWatchLogsPutRetentionPolicyResponse * putRetentionPolicy(const CloudWatchLogsPutRetentionPolicyRequest &request);
    CloudWatchLogsPutSubscriptionFilterResponse * putSubscriptionFilter(const CloudWatchLogsPutSubscriptionFilterRequest &request);
    CloudWatchLogsTestMetricFilterResponse * testMetricFilter(const CloudWatchLogsTestMetricFilterRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchLogsClient)
    Q_DISABLE_COPY(CloudWatchLogsClient)

};

QTAWS_END_NAMESPACE

#endif
