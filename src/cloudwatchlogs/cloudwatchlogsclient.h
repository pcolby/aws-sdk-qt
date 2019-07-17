/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CLOUDWATCHLOGSCLIENT_H
#define QTAWS_CLOUDWATCHLOGSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudWatchLogs {

class CloudWatchLogsClientPrivate;
class AssociateKmsKeyRequest;
class AssociateKmsKeyResponse;
class CancelExportTaskRequest;
class CancelExportTaskResponse;
class CreateExportTaskRequest;
class CreateExportTaskResponse;
class CreateLogGroupRequest;
class CreateLogGroupResponse;
class CreateLogStreamRequest;
class CreateLogStreamResponse;
class DeleteDestinationRequest;
class DeleteDestinationResponse;
class DeleteLogGroupRequest;
class DeleteLogGroupResponse;
class DeleteLogStreamRequest;
class DeleteLogStreamResponse;
class DeleteMetricFilterRequest;
class DeleteMetricFilterResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteRetentionPolicyRequest;
class DeleteRetentionPolicyResponse;
class DeleteSubscriptionFilterRequest;
class DeleteSubscriptionFilterResponse;
class DescribeDestinationsRequest;
class DescribeDestinationsResponse;
class DescribeExportTasksRequest;
class DescribeExportTasksResponse;
class DescribeLogGroupsRequest;
class DescribeLogGroupsResponse;
class DescribeLogStreamsRequest;
class DescribeLogStreamsResponse;
class DescribeMetricFiltersRequest;
class DescribeMetricFiltersResponse;
class DescribeQueriesRequest;
class DescribeQueriesResponse;
class DescribeResourcePoliciesRequest;
class DescribeResourcePoliciesResponse;
class DescribeSubscriptionFiltersRequest;
class DescribeSubscriptionFiltersResponse;
class DisassociateKmsKeyRequest;
class DisassociateKmsKeyResponse;
class FilterLogEventsRequest;
class FilterLogEventsResponse;
class GetLogEventsRequest;
class GetLogEventsResponse;
class GetLogGroupFieldsRequest;
class GetLogGroupFieldsResponse;
class GetLogRecordRequest;
class GetLogRecordResponse;
class GetQueryResultsRequest;
class GetQueryResultsResponse;
class ListTagsLogGroupRequest;
class ListTagsLogGroupResponse;
class PutDestinationRequest;
class PutDestinationResponse;
class PutDestinationPolicyRequest;
class PutDestinationPolicyResponse;
class PutLogEventsRequest;
class PutLogEventsResponse;
class PutMetricFilterRequest;
class PutMetricFilterResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class PutRetentionPolicyRequest;
class PutRetentionPolicyResponse;
class PutSubscriptionFilterRequest;
class PutSubscriptionFilterResponse;
class StartQueryRequest;
class StartQueryResponse;
class StopQueryRequest;
class StopQueryResponse;
class TagLogGroupRequest;
class TagLogGroupResponse;
class TestMetricFilterRequest;
class TestMetricFilterResponse;
class UntagLogGroupRequest;
class UntagLogGroupResponse;

class QTAWS_EXPORT CloudWatchLogsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchLogsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchLogsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateKmsKeyResponse * associateKmsKey(const AssociateKmsKeyRequest &request);
    CancelExportTaskResponse * cancelExportTask(const CancelExportTaskRequest &request);
    CreateExportTaskResponse * createExportTask(const CreateExportTaskRequest &request);
    CreateLogGroupResponse * createLogGroup(const CreateLogGroupRequest &request);
    CreateLogStreamResponse * createLogStream(const CreateLogStreamRequest &request);
    DeleteDestinationResponse * deleteDestination(const DeleteDestinationRequest &request);
    DeleteLogGroupResponse * deleteLogGroup(const DeleteLogGroupRequest &request);
    DeleteLogStreamResponse * deleteLogStream(const DeleteLogStreamRequest &request);
    DeleteMetricFilterResponse * deleteMetricFilter(const DeleteMetricFilterRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteRetentionPolicyResponse * deleteRetentionPolicy(const DeleteRetentionPolicyRequest &request);
    DeleteSubscriptionFilterResponse * deleteSubscriptionFilter(const DeleteSubscriptionFilterRequest &request);
    DescribeDestinationsResponse * describeDestinations(const DescribeDestinationsRequest &request);
    DescribeExportTasksResponse * describeExportTasks(const DescribeExportTasksRequest &request);
    DescribeLogGroupsResponse * describeLogGroups(const DescribeLogGroupsRequest &request);
    DescribeLogStreamsResponse * describeLogStreams(const DescribeLogStreamsRequest &request);
    DescribeMetricFiltersResponse * describeMetricFilters(const DescribeMetricFiltersRequest &request);
    DescribeQueriesResponse * describeQueries(const DescribeQueriesRequest &request);
    DescribeResourcePoliciesResponse * describeResourcePolicies(const DescribeResourcePoliciesRequest &request);
    DescribeSubscriptionFiltersResponse * describeSubscriptionFilters(const DescribeSubscriptionFiltersRequest &request);
    DisassociateKmsKeyResponse * disassociateKmsKey(const DisassociateKmsKeyRequest &request);
    FilterLogEventsResponse * filterLogEvents(const FilterLogEventsRequest &request);
    GetLogEventsResponse * getLogEvents(const GetLogEventsRequest &request);
    GetLogGroupFieldsResponse * getLogGroupFields(const GetLogGroupFieldsRequest &request);
    GetLogRecordResponse * getLogRecord(const GetLogRecordRequest &request);
    GetQueryResultsResponse * getQueryResults(const GetQueryResultsRequest &request);
    ListTagsLogGroupResponse * listTagsLogGroup(const ListTagsLogGroupRequest &request);
    PutDestinationResponse * putDestination(const PutDestinationRequest &request);
    PutDestinationPolicyResponse * putDestinationPolicy(const PutDestinationPolicyRequest &request);
    PutLogEventsResponse * putLogEvents(const PutLogEventsRequest &request);
    PutMetricFilterResponse * putMetricFilter(const PutMetricFilterRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    PutRetentionPolicyResponse * putRetentionPolicy(const PutRetentionPolicyRequest &request);
    PutSubscriptionFilterResponse * putSubscriptionFilter(const PutSubscriptionFilterRequest &request);
    StartQueryResponse * startQuery(const StartQueryRequest &request);
    StopQueryResponse * stopQuery(const StopQueryRequest &request);
    TagLogGroupResponse * tagLogGroup(const TagLogGroupRequest &request);
    TestMetricFilterResponse * testMetricFilter(const TestMetricFilterRequest &request);
    UntagLogGroupResponse * untagLogGroup(const UntagLogGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchLogsClient)
    Q_DISABLE_COPY(CloudWatchLogsClient)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
