/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloudwatchlogsclient.h"
#include "cloudwatchlogsclient_p.h"

#include "core/awssignaturev4.h"
#include "associatekmskeyrequest.h"
#include "associatekmskeyresponse.h"
#include "cancelexporttaskrequest.h"
#include "cancelexporttaskresponse.h"
#include "createexporttaskrequest.h"
#include "createexporttaskresponse.h"
#include "createloggrouprequest.h"
#include "createloggroupresponse.h"
#include "createlogstreamrequest.h"
#include "createlogstreamresponse.h"
#include "deletedestinationrequest.h"
#include "deletedestinationresponse.h"
#include "deleteloggrouprequest.h"
#include "deleteloggroupresponse.h"
#include "deletelogstreamrequest.h"
#include "deletelogstreamresponse.h"
#include "deletemetricfilterrequest.h"
#include "deletemetricfilterresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleteretentionpolicyrequest.h"
#include "deleteretentionpolicyresponse.h"
#include "deletesubscriptionfilterrequest.h"
#include "deletesubscriptionfilterresponse.h"
#include "describedestinationsrequest.h"
#include "describedestinationsresponse.h"
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describeloggroupsrequest.h"
#include "describeloggroupsresponse.h"
#include "describelogstreamsrequest.h"
#include "describelogstreamsresponse.h"
#include "describemetricfiltersrequest.h"
#include "describemetricfiltersresponse.h"
#include "describeresourcepoliciesrequest.h"
#include "describeresourcepoliciesresponse.h"
#include "describesubscriptionfiltersrequest.h"
#include "describesubscriptionfiltersresponse.h"
#include "disassociatekmskeyrequest.h"
#include "disassociatekmskeyresponse.h"
#include "filterlogeventsrequest.h"
#include "filterlogeventsresponse.h"
#include "getlogeventsrequest.h"
#include "getlogeventsresponse.h"
#include "listtagsloggrouprequest.h"
#include "listtagsloggroupresponse.h"
#include "putdestinationrequest.h"
#include "putdestinationresponse.h"
#include "putdestinationpolicyrequest.h"
#include "putdestinationpolicyresponse.h"
#include "putlogeventsrequest.h"
#include "putlogeventsresponse.h"
#include "putmetricfilterrequest.h"
#include "putmetricfilterresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putretentionpolicyrequest.h"
#include "putretentionpolicyresponse.h"
#include "putsubscriptionfilterrequest.h"
#include "putsubscriptionfilterresponse.h"
#include "tagloggrouprequest.h"
#include "tagloggroupresponse.h"
#include "testmetricfilterrequest.h"
#include "testmetricfilterresponse.h"
#include "untagloggrouprequest.h"
#include "untagloggroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatchLogs
 * \brief The QtAws::CloudWatchLogs contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsClient
 * \brief The CloudWatchLogsClient class provides access to the Amazon CloudWatch Logs service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon EC2 instances, AWS
 *  CloudTrail, or other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch
 *  console, CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring; so, no code changes are required. For example, you can monitor application logs for specific literal
 *  terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position
 *  in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 *  CloudWatch Logs reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail and use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 */

/*!
 * \brief Constructs a CloudWatchLogsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudWatchLogsClient::CloudWatchLogsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->apiVersion = QStringLiteral("2014-03-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("logs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Logs");
    d->serviceName = QStringLiteral("logs");
}

/*!
 * \overload CloudWatchLogsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CloudWatchLogsClient::CloudWatchLogsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchLogsClientPrivate(this), parent)
{
    Q_D(CloudWatchLogsClient);
    d->apiVersion = QStringLiteral("2014-03-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("logs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch Logs");
    d->serviceName = QStringLiteral("logs");
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * AssociateKmsKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified AWS Key Management Service (AWS KMS) customer master key (CMK) with the specified log
 *
 * group>
 *
 * Associating an AWS KMS CMK with a log group overrides any existing associations between the log group and a CMK. After a
 * CMK is associated with a log group, all newly ingested data for the log group is encrypted using the CMK. This
 * association is stored as long as the data encrypted with the CMK is still within Amazon CloudWatch Logs. This enables
 * Amazon CloudWatch Logs to decrypt this data whenever it is
 *
 * requested>
 *
 * Note that it can take up to 5 minutes for this operation to take
 *
 * effect>
 *
 * If you attempt to associate a CMK with a log group but the CMK does not exist or the CMK is disabled, you will receive
 * an <code>InvalidParameterException</code> error.
 */
AssociateKmsKeyResponse * CloudWatchLogsClient::associateKmsKey(const AssociateKmsKeyRequest &request)
{
    return qobject_cast<AssociateKmsKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * CancelExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified export
 *
 * task>
 *
 * The task must be in the <code>PENDING</code> or <code>RUNNING</code>
 */
CancelExportTaskResponse * CloudWatchLogsClient::cancelExportTask(const CancelExportTaskRequest &request)
{
    return qobject_cast<CancelExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * CreateExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an export task, which allows you to efficiently export data from a log group to an Amazon S3
 *
 * bucket>
 *
 * This is an asynchronous call. If all the required information is provided, this operation initiates an export task and
 * responds with the ID of the task. After the task has started, you can use <a>DescribeExportTasks</a> to get the status
 * of the export task. Each account can only have one active (<code>RUNNING</code> or <code>PENDING</code>) export task at
 * a time. To cancel an export task, use
 *
 * <a>CancelExportTask</a>>
 *
 * You can export logs from multiple log groups or multiple time ranges to the same S3 bucket. To separate out log data for
 * each export task, you can specify a prefix to be used as the Amazon S3 key prefix for all exported
 */
CreateExportTaskResponse * CloudWatchLogsClient::createExportTask(const CreateExportTaskRequest &request)
{
    return qobject_cast<CreateExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * CreateLogGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a log group with the specified
 *
 * name>
 *
 * You can create up to 5000 log groups per
 *
 * account>
 *
 * You must use the following guidelines when naming a log
 *
 * group> <ul> <li>
 *
 * Log group names must be unique within a region for an AWS
 *
 * account> </li> <li>
 *
 * Log group names can be between 1 and 512 characters
 *
 * long> </li> <li>
 *
 * Log group names consist of the following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
 * and '.'
 *
 * (period)> </li> </ul>
 *
 * If you associate a AWS Key Management Service (AWS KMS) customer master key (CMK) with the log group, ingested data is
 * encrypted using the CMK. This association is stored as long as the data encrypted with the CMK is still within Amazon
 * CloudWatch Logs. This enables Amazon CloudWatch Logs to decrypt this data whenever it is
 *
 * requested>
 *
 * If you attempt to associate a CMK with the log group but the CMK does not exist or the CMK is disabled, you will receive
 * an <code>InvalidParameterException</code> error.
 */
CreateLogGroupResponse * CloudWatchLogsClient::createLogGroup(const CreateLogGroupRequest &request)
{
    return qobject_cast<CreateLogGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * CreateLogStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a log stream for the specified log
 *
 * group>
 *
 * There is no limit on the number of log streams that you can create for a log
 *
 * group>
 *
 * You must use the following guidelines when naming a log
 *
 * stream> <ul> <li>
 *
 * Log stream names must be unique within the log
 *
 * group> </li> <li>
 *
 * Log stream names can be between 1 and 512 characters
 *
 * long> </li> <li>
 *
 * The ':' (colon) and '*' (asterisk) characters are not
 */
CreateLogStreamResponse * CloudWatchLogsClient::createLogStream(const CreateLogStreamRequest &request)
{
    return qobject_cast<CreateLogStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified destination, and eventually disables all the subscription filters that publish to it. This
 * operation does not delete the physical resource encapsulated by the
 */
DeleteDestinationResponse * CloudWatchLogsClient::deleteDestination(const DeleteDestinationRequest &request)
{
    return qobject_cast<DeleteDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteLogGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified log group and permanently deletes all the archived log events associated with the log
 */
DeleteLogGroupResponse * CloudWatchLogsClient::deleteLogGroup(const DeleteLogGroupRequest &request)
{
    return qobject_cast<DeleteLogGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteLogStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified log stream and permanently deletes all the archived log events associated with the log
 */
DeleteLogStreamResponse * CloudWatchLogsClient::deleteLogStream(const DeleteLogStreamRequest &request)
{
    return qobject_cast<DeleteLogStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteMetricFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified metric
 */
DeleteMetricFilterResponse * CloudWatchLogsClient::deleteMetricFilter(const DeleteMetricFilterRequest &request)
{
    return qobject_cast<DeleteMetricFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource policy from this account. This revokes the access of the identities in that policy to put log events
 * to this
 */
DeleteResourcePolicyResponse * CloudWatchLogsClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteRetentionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified retention
 *
 * policy>
 *
 * Log events do not expire if they belong to log groups without a retention
 */
DeleteRetentionPolicyResponse * CloudWatchLogsClient::deleteRetentionPolicy(const DeleteRetentionPolicyRequest &request)
{
    return qobject_cast<DeleteRetentionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DeleteSubscriptionFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified subscription
 */
DeleteSubscriptionFilterResponse * CloudWatchLogsClient::deleteSubscriptionFilter(const DeleteSubscriptionFilterRequest &request)
{
    return qobject_cast<DeleteSubscriptionFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all your destinations. The results are ASCII-sorted by destination
 */
DescribeDestinationsResponse * CloudWatchLogsClient::describeDestinations(const DescribeDestinationsRequest &request)
{
    return qobject_cast<DescribeDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeExportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified export tasks. You can list all your export tasks or filter the results based on task ID or task
 */
DescribeExportTasksResponse * CloudWatchLogsClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeLogGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified log groups. You can list all your log groups or filter the results by prefix. The results are
 * ASCII-sorted by log group
 */
DescribeLogGroupsResponse * CloudWatchLogsClient::describeLogGroups(const DescribeLogGroupsRequest &request)
{
    return qobject_cast<DescribeLogGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeLogStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the log streams for the specified log group. You can list all the log streams or filter the results by prefix. You
 * can also control how the results are
 *
 * ordered>
 *
 * This operation has a limit of five transactions per second, after which transactions are
 */
DescribeLogStreamsResponse * CloudWatchLogsClient::describeLogStreams(const DescribeLogStreamsRequest &request)
{
    return qobject_cast<DescribeLogStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeMetricFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified metric filters. You can list all the metric filters or filter the results by log name, prefix,
 * metric name, or metric namespace. The results are ASCII-sorted by filter
 */
DescribeMetricFiltersResponse * CloudWatchLogsClient::describeMetricFilters(const DescribeMetricFiltersRequest &request)
{
    return qobject_cast<DescribeMetricFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeResourcePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource policies in this
 */
DescribeResourcePoliciesResponse * CloudWatchLogsClient::describeResourcePolicies(const DescribeResourcePoliciesRequest &request)
{
    return qobject_cast<DescribeResourcePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeSubscriptionFiltersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the subscription filters for the specified log group. You can list all the subscription filters or filter the
 * results by prefix. The results are ASCII-sorted by filter
 */
DescribeSubscriptionFiltersResponse * CloudWatchLogsClient::describeSubscriptionFilters(const DescribeSubscriptionFiltersRequest &request)
{
    return qobject_cast<DescribeSubscriptionFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DisassociateKmsKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the associated AWS Key Management Service (AWS KMS) customer master key (CMK) from the specified log
 *
 * group>
 *
 * After the AWS KMS CMK is disassociated from the log group, AWS CloudWatch Logs stops encrypting newly ingested data for
 * the log group. All previously ingested data remains encrypted, and AWS CloudWatch Logs requires permissions for the CMK
 * whenever the encrypted data is
 *
 * requested>
 *
 * Note that it can take up to 5 minutes for this operation to take
 */
DisassociateKmsKeyResponse * CloudWatchLogsClient::disassociateKmsKey(const DisassociateKmsKeyRequest &request)
{
    return qobject_cast<DisassociateKmsKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * FilterLogEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists log events from the specified log group. You can list all the log events or filter the results using a filter
 * pattern, a time range, and the name of the log
 *
 * stream>
 *
 * By default, this operation returns as many log events as can fit in 1 MB (up to 10,000 log events), or all the events
 * found within the time range that you specify. If the results include a token, then there are more log events available,
 * and you can get additional results by specifying the token in a subsequent
 */
FilterLogEventsResponse * CloudWatchLogsClient::filterLogEvents(const FilterLogEventsRequest &request)
{
    return qobject_cast<FilterLogEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * GetLogEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists log events from the specified log stream. You can list all the log events or filter using a time
 *
 * range>
 *
 * By default, this operation returns as many log events as can fit in a response size of 1MB (up to 10,000 log events).
 * You can get additional log events by specifying one of the tokens in a subsequent
 */
GetLogEventsResponse * CloudWatchLogsClient::getLogEvents(const GetLogEventsRequest &request)
{
    return qobject_cast<GetLogEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * ListTagsLogGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified log
 */
ListTagsLogGroupResponse * CloudWatchLogsClient::listTagsLogGroup(const ListTagsLogGroupRequest &request)
{
    return qobject_cast<ListTagsLogGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a destination. A destination encapsulates a physical resource (such as an Amazon Kinesis stream) and
 * enables you to subscribe to a real-time stream of log events for a different account, ingested using
 * <a>PutLogEvents</a>. Currently, the only supported physical resource is a Kinesis stream belonging to the same account
 * as the
 *
 * destination>
 *
 * Through an access policy, a destination controls what is written to its Kinesis stream. By default,
 * <code>PutDestination</code> does not set any access policy with the destination, which means a cross-account user cannot
 * call <a>PutSubscriptionFilter</a> against this destination. To enable this, the destination owner must call
 * <a>PutDestinationPolicy</a> after
 */
PutDestinationResponse * CloudWatchLogsClient::putDestination(const PutDestinationRequest &request)
{
    return qobject_cast<PutDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutDestinationPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an access policy associated with an existing destination. An access policy is an <a
 * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM policy document</a> that is used to
 * authorize claims to register a subscription filter against a given
 */
PutDestinationPolicyResponse * CloudWatchLogsClient::putDestinationPolicy(const PutDestinationPolicyRequest &request)
{
    return qobject_cast<PutDestinationPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutLogEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads a batch of log events to the specified log
 *
 * stream>
 *
 * You must include the sequence token obtained from the response of the previous call. An upload in a newly created log
 * stream does not require a sequence token. You can also get the sequence token using <a>DescribeLogStreams</a>. If you
 * call <code>PutLogEvents</code> twice within a narrow time period using the same value for <code>sequenceToken</code>,
 * both calls may be successful, or one may be
 *
 * rejected>
 *
 * The batch of events must satisfy the following
 *
 * constraints> <ul> <li>
 *
 * The maximum batch size is 1,048,576 bytes, and this size is calculated as the sum of all event messages in UTF-8, plus
 * 26 bytes for each log
 *
 * event> </li> <li>
 *
 * None of the log events in the batch can be more than 2 hours in the
 *
 * future> </li> <li>
 *
 * None of the log events in the batch can be older than 14 days or the retention period of the log
 *
 * group> </li> <li>
 *
 * The log events in the batch must be in chronological ordered by their time stamp (the time the event occurred, expressed
 * as the number of milliseconds after Jan 1, 1970 00:00:00
 *
 * UTC)> </li> <li>
 *
 * The maximum number of log events in a batch is
 *
 * 10,000> </li> <li>
 *
 * A batch of log events in a single request cannot span more than 24 hours. Otherwise, the operation
 */
PutLogEventsResponse * CloudWatchLogsClient::putLogEvents(const PutLogEventsRequest &request)
{
    return qobject_cast<PutLogEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutMetricFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a metric filter and associates it with the specified log group. Metric filters allow you to configure
 * rules to extract metric data from log events ingested through
 *
 * <a>PutLogEvents</a>>
 *
 * The maximum number of metric filters that can be associated with a log group is
 */
PutMetricFilterResponse * CloudWatchLogsClient::putMetricFilter(const PutMetricFilterRequest &request)
{
    return qobject_cast<PutMetricFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a resource policy allowing other AWS services to put log events to this account, such as Amazon Route
 * 53. An account can have up to 50 resource policies per
 */
PutResourcePolicyResponse * CloudWatchLogsClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutRetentionPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the retention of the specified log group. A retention policy allows you to configure the number of days for which
 * to retain log events in the specified log
 */
PutRetentionPolicyResponse * CloudWatchLogsClient::putRetentionPolicy(const PutRetentionPolicyRequest &request)
{
    return qobject_cast<PutRetentionPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutSubscriptionFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a subscription filter and associates it with the specified log group. Subscription filters allow you
 * to subscribe to a real-time stream of log events ingested through <a>PutLogEvents</a> and have them delivered to a
 * specific destination. Currently, the supported destinations
 *
 * are> <ul> <li>
 *
 * An Amazon Kinesis stream belonging to the same account as the subscription filter, for same-account
 *
 * delivery> </li> <li>
 *
 * A logical destination that belongs to a different account, for cross-account
 *
 * delivery> </li> <li>
 *
 * An Amazon Kinesis Firehose delivery stream that belongs to the same account as the subscription filter, for same-account
 *
 * delivery> </li> <li>
 *
 * An AWS Lambda function that belongs to the same account as the subscription filter, for same-account
 *
 * delivery> </li> </ul>
 *
 * There can only be one subscription filter associated with a log group. If you are updating an existing filter, you must
 * specify the correct name in <code>filterName</code>. Otherwise, the call fails because you cannot associate a second
 * filter with a log
 */
PutSubscriptionFilterResponse * CloudWatchLogsClient::putSubscriptionFilter(const PutSubscriptionFilterRequest &request)
{
    return qobject_cast<PutSubscriptionFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * TagLogGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates the specified tags for the specified log
 *
 * group>
 *
 * To list the tags for a log group, use <a>ListTagsLogGroup</a>. To remove tags, use
 *
 * <a>UntagLogGroup</a>>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/log-group-tagging.html">Tag Log Groups in Amazon
 * CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
 */
TagLogGroupResponse * CloudWatchLogsClient::tagLogGroup(const TagLogGroupRequest &request)
{
    return qobject_cast<TagLogGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * TestMetricFilterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests the filter pattern of a metric filter against a sample of log event messages. You can use this operation to
 * validate the correctness of a metric filter
 */
TestMetricFilterResponse * CloudWatchLogsClient::testMetricFilter(const TestMetricFilterRequest &request)
{
    return qobject_cast<TestMetricFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * UntagLogGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified log
 *
 * group>
 *
 * To list the tags for a log group, use <a>ListTagsLogGroup</a>. To add tags, use
 */
UntagLogGroupResponse * CloudWatchLogsClient::untagLogGroup(const UntagLogGroupRequest &request)
{
    return qobject_cast<UntagLogGroupResponse *>(send(request));
}

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsClientPrivate
 * \brief The CloudWatchLogsClientPrivate class provides private implementation for CloudWatchLogsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a CloudWatchLogsClientPrivate object with public implementation \a q.
 */
CloudWatchLogsClientPrivate::CloudWatchLogsClientPrivate(CloudWatchLogsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatchLogs
} // namespace QtAws
