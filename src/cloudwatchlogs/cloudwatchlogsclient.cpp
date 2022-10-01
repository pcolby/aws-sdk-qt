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
#include "deletequerydefinitionrequest.h"
#include "deletequerydefinitionresponse.h"
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
#include "describequeriesrequest.h"
#include "describequeriesresponse.h"
#include "describequerydefinitionsrequest.h"
#include "describequerydefinitionsresponse.h"
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
#include "getloggroupfieldsrequest.h"
#include "getloggroupfieldsresponse.h"
#include "getlogrecordrequest.h"
#include "getlogrecordresponse.h"
#include "getqueryresultsrequest.h"
#include "getqueryresultsresponse.h"
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
#include "putquerydefinitionrequest.h"
#include "putquerydefinitionresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "putretentionpolicyrequest.h"
#include "putretentionpolicyresponse.h"
#include "putsubscriptionfilterrequest.h"
#include "putsubscriptionfilterresponse.h"
#include "startqueryrequest.h"
#include "startqueryresponse.h"
#include "stopqueryrequest.h"
#include "stopqueryresponse.h"
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
 * \brief Contains classess for accessing Amazon CloudWatch Logs.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
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
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from EC2 instances, CloudTrail, and
 *  other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch console,
 *  CloudWatch Logs commands in the Amazon Web Services CLI, CloudWatch Logs API, or CloudWatch Logs
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
 *  for monitoring so no code changes are required. For example, you can monitor application logs for specific literal terms
 *  (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position in log
 *  data (such as "404" status codes in an Apache access log). When the term you are searching for is found, CloudWatch Logs
 *  reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular API
 *  activity as captured by CloudTrail. You can use the notification to perform
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Associates the specified Key Management Service customer master key (CMK) with the specified log
 *
 * group>
 *
 * Associating an KMS CMK with a log group overrides any existing associations between the log group and a CMK. After a CMK
 * is associated with a log group, all newly ingested data for the log group is encrypted using the CMK. This association
 * is stored as long as the data encrypted with the CMK is still within CloudWatch Logs. This enables CloudWatch Logs to
 * decrypt this data whenever it is
 *
 * requested> <b>
 *
 * CloudWatch Logs supports only symmetric CMKs. Do not use an associate an asymmetric CMK with your log group. For more
 * information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
 * Symmetric and Asymmetric
 *
 * Keys</a>> </b>
 *
 * It can take up to 5 minutes for this operation to take
 *
 * effect>
 *
 * If you attempt to associate a CMK with a log group but the CMK does not exist or the CMK is disabled, you receive an
 * <code>InvalidParameterException</code> error.
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
 * Creates an export task, which allows you to efficiently export data from a log group to an Amazon S3 bucket. When you
 * perform a <code>CreateExportTask</code> operation, you must use credentials that have permission to write to the S3
 * bucket that you specify as the
 *
 * destination> <b>
 *
 * Exporting log data to Amazon S3 buckets that are encrypted by KMS is not supported. Exporting log data to Amazon S3
 * buckets that have S3 Object Lock enabled with a retention period is not
 *
 * supported>
 *
 * Exporting to S3 buckets that are encrypted with AES-256 is supported.
 *
 * </p </b>
 *
 * This is an asynchronous call. If all the required information is provided, this operation initiates an export task and
 * responds with the ID of the task. After the task has started, you can use <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeExportTasks.html">DescribeExportTasks</a>
 * to get the status of the export task. Each account can only have one active (<code>RUNNING</code> or
 * <code>PENDING</code>) export task at a time. To cancel an export task, use <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CancelExportTask.html">CancelExportTask</a>>
 *
 * You can export logs from multiple log groups or multiple time ranges to the same S3 bucket. To separate out log data for
 * each export task, you can specify a prefix to be used as the Amazon S3 key prefix for all exported
 *
 * objects> <note>
 *
 * Time-based sorting on chunks of log data inside an exported file is not guaranteed. You can sort the exported log fild
 * data by using Linux
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
 * Creates a log group with the specified name. You can create up to 20,000 log groups per
 *
 * account>
 *
 * You must use the following guidelines when naming a log
 *
 * group> <ul> <li>
 *
 * Log group names must be unique within a region for an Amazon Web Services
 *
 * account> </li> <li>
 *
 * Log group names can be between 1 and 512 characters
 *
 * long> </li> <li>
 *
 * Log group names consist of the following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/' (forward slash),
 * '.' (period), and '#' (number
 *
 * sign> </li> </ul>
 *
 * When you create a log group, by default the log events in the log group never expire. To set a retention policy so that
 * events expire and are deleted after a specified time, use <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutRetentionPolicy.html">PutRetentionPolicy</a>>
 *
 * If you associate a Key Management Service customer master key (CMK) with the log group, ingested data is encrypted using
 * the CMK. This association is stored as long as the data encrypted with the CMK is still within CloudWatch Logs. This
 * enables CloudWatch Logs to decrypt this data whenever it is
 *
 * requested>
 *
 * If you attempt to associate a CMK with the log group but the CMK does not exist or the CMK is disabled, you receive an
 * <code>InvalidParameterException</code> error.
 *
 * </p <b>
 *
 * CloudWatch Logs supports only symmetric CMKs. Do not associate an asymmetric CMK with your log group. For more
 * information, see <a href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
 * Symmetric and Asymmetric
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
 * Creates a log stream for the specified log group. A log stream is a sequence of log events that originate from a single
 * source, such as an application instance or a resource that is being
 *
 * monitored>
 *
 * There is no limit on the number of log streams that you can create for a log group. There is a limit of 50 TPS on
 * <code>CreateLogStream</code> operations, after which transactions are
 *
 * throttled>
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
 * DeleteQueryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a saved CloudWatch Logs Insights query definition. A query definition contains details about a saved CloudWatch
 * Logs Insights
 *
 * query>
 *
 * Each <code>DeleteQueryDefinition</code> operation can delete one query
 *
 * definition>
 *
 * You must have the <code>logs:DeleteQueryDefinition</code> permission to be able to perform this
 */
DeleteQueryDefinitionResponse * CloudWatchLogsClient::deleteQueryDefinition(const DeleteQueryDefinitionRequest &request)
{
    return qobject_cast<DeleteQueryDefinitionResponse *>(send(request));
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
 *
 * name>
 *
 * CloudWatch Logs doesn’t support IAM policies that control access to the <code>DescribeLogGroups</code> action by using
 * the <code>aws:ResourceTag/<i>key-name</i> </code> condition key. Other CloudWatch Logs actions do support the use of the
 * <code>aws:ResourceTag/<i>key-name</i> </code> condition key to control access. For more information about using tags to
 * control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling access to
 * Amazon Web Services resources using
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
 * Lists the specified metric filters. You can list all of the metric filters or filter the results by log name, prefix,
 * metric name, or metric namespace. The results are ASCII-sorted by filter
 */
DescribeMetricFiltersResponse * CloudWatchLogsClient::describeMetricFilters(const DescribeMetricFiltersRequest &request)
{
    return qobject_cast<DescribeMetricFiltersResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeQueriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of CloudWatch Logs Insights queries that are scheduled, executing, or have been executed recently in this
 * account. You can request all queries or limit it to queries of a specific log group or queries with a certain
 */
DescribeQueriesResponse * CloudWatchLogsClient::describeQueries(const DescribeQueriesRequest &request)
{
    return qobject_cast<DescribeQueriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * DescribeQueryDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns a paginated list of your saved CloudWatch Logs Insights query
 *
 * definitions>
 *
 * You can use the <code>queryDefinitionNamePrefix</code> parameter to limit the results to only the query definitions that
 * have names that start with a certain
 */
DescribeQueryDefinitionsResponse * CloudWatchLogsClient::describeQueryDefinitions(const DescribeQueryDefinitionsRequest &request)
{
    return qobject_cast<DescribeQueryDefinitionsResponse *>(send(request));
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
 * Disassociates the associated Key Management Service customer master key (CMK) from the specified log
 *
 * group>
 *
 * After the KMS CMK is disassociated from the log group, CloudWatch Logs stops encrypting newly ingested data for the log
 * group. All previously ingested data remains encrypted, and CloudWatch Logs requires permissions for the CMK whenever the
 * encrypted data is
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
 * By default, this operation returns as many log events as can fit in 1 MB (up to 10,000 log events) or all the events
 * found within the time range that you specify. If the results include a token, then there are more log events available,
 * and you can get additional results by specifying the token in a subsequent call. This operation can return empty results
 * while there are more log events available through the
 *
 * token>
 *
 * The returned log events are sorted by event timestamp, the timestamp when the event was ingested by CloudWatch Logs, and
 * the ID of the <code>PutLogEvents</code>
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
 * Lists log events from the specified log stream. You can list all of the log events or filter using a time
 *
 * range>
 *
 * By default, this operation returns as many log events as can fit in a response size of 1MB (up to 10,000 log events).
 * You can get additional log events by specifying one of the tokens in a subsequent call. This operation can return empty
 * results while there are more log events available through the
 */
GetLogEventsResponse * CloudWatchLogsClient::getLogEvents(const GetLogEventsRequest &request)
{
    return qobject_cast<GetLogEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * GetLogGroupFieldsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the fields that are included in log events in the specified log group, along with the percentage of
 * log events that contain each field. The search is limited to a time period that you
 *
 * specify>
 *
 * In the results, fields that start with @ are fields generated by CloudWatch Logs. For example, <code>@timestamp</code>
 * is the timestamp of each log event. For more information about the fields that are generated by CloudWatch logs, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData-discoverable-fields.html">Supported
 * Logs and Discovered
 *
 * Fields</a>>
 *
 * The response results are sorted by the frequency percentage, starting with the highest
 */
GetLogGroupFieldsResponse * CloudWatchLogsClient::getLogGroupFields(const GetLogGroupFieldsRequest &request)
{
    return qobject_cast<GetLogGroupFieldsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * GetLogRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all of the fields and values of a single log event. All fields are retrieved, even if the original query that
 * produced the <code>logRecordPointer</code> retrieved only a subset of fields. Fields are returned as field name/field
 * value
 *
 * pairs>
 *
 * The full unparsed log event is returned within
 */
GetLogRecordResponse * CloudWatchLogsClient::getLogRecord(const GetLogRecordRequest &request)
{
    return qobject_cast<GetLogRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * GetQueryResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the results from the specified
 *
 * query>
 *
 * Only the fields requested in the query are returned, along with a <code>@ptr</code> field, which is the identifier for
 * the log record. You can use the value of <code>@ptr</code> in a <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogRecord.html">GetLogRecord</a>
 * operation to get the full log
 *
 * record>
 *
 * <code>GetQueryResults</code> does not start a query execution. To run a query, use <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>>
 *
 * If the value of the <code>Status</code> field in the output is <code>Running</code>, this operation returns only partial
 * results. If you see a value of <code>Scheduled</code> or <code>Running</code> for the status, you can retry the
 * operation later to see the final results.
 */
GetQueryResultsResponse * CloudWatchLogsClient::getQueryResults(const GetQueryResultsRequest &request)
{
    return qobject_cast<GetQueryResultsResponse *>(send(request));
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
 * Creates or updates a destination. This operation is used only to create destinations for cross-account
 *
 * subscriptions>
 *
 * A destination encapsulates a physical resource (such as an Amazon Kinesis stream) and enables you to subscribe to a
 * real-time stream of log events for a different account, ingested using <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>>
 *
 * Through an access policy, a destination controls what is written to it. By default, <code>PutDestination</code> does not
 * set any access policy with the destination, which means a cross-account user cannot call <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutSubscriptionFilter.html">PutSubscriptionFilter</a>
 * against this destination. To enable this, the destination owner must call <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>
 * after
 *
 * <code>PutDestination</code>>
 *
 * To perform a <code>PutDestination</code> operation, you must also have the <code>iam:PassRole</code>
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
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM policy document</a> that is used to
 * authorize claims to register a subscription filter against a given
 *
 * destination>
 *
 * If multiple Amazon Web Services accounts are sending logs to this destination, each sender account must be listed
 * separately in the policy. The policy does not support specifying <code>*</code> as the Principal or the use of the
 * <code>aws:PrincipalOrgId</code> global
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
 * stream does not require a sequence token. You can also get the sequence token in the <code>expectedSequenceToken</code>
 * field from <code>InvalidSequenceTokenException</code>. If you call <code>PutLogEvents</code> twice within a narrow time
 * period using the same value for <code>sequenceToken</code>, both calls might be successful or one might be
 *
 * rejected>
 *
 * The batch of events must satisfy the following
 *
 * constraints> <ul> <li>
 *
 * The maximum batch size is 1,048,576 bytes. This size is calculated as the sum of all event messages in UTF-8, plus 26
 * bytes for each log
 *
 * event> </li> <li>
 *
 * None of the log events in the batch can be more than 2 hours in the
 *
 * future> </li> <li>
 *
 * None of the log events in the batch can be older than 14 days or older than the retention period of the log
 *
 * group> </li> <li>
 *
 * The log events in the batch must be in chronological order by their timestamp. The timestamp is the time the event
 * occurred, expressed as the number of milliseconds after Jan 1, 1970 00:00:00 UTC. (In Amazon Web Services Tools for
 * PowerShell and the Amazon Web Services SDK for .NET, the timestamp is specified in .NET format: yyyy-mm-ddThh:mm:ss. For
 * example, 2017-09-15T13:45:30.)
 *
 * </p </li> <li>
 *
 * A batch of log events in a single request cannot span more than 24 hours. Otherwise, the operation
 *
 * fails> </li> <li>
 *
 * The maximum number of log events in a batch is
 *
 * 10,000> </li> <li>
 *
 * There is a quota of 5 requests per second per log stream. Additional requests are throttled. This quota can't be
 *
 * changed> </li> </ul>
 *
 * If a call to <code>PutLogEvents</code> returns "UnrecognizedClientException" the most likely cause is an invalid Amazon
 * Web Services access key ID or secret key.
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
 * rules to extract metric data from log events ingested through <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>>
 *
 * The maximum number of metric filters that can be associated with a log group is
 *
 * 100>
 *
 * When you create a metric filter, you can also optionally assign a unit and dimensions to the metric that is
 *
 * created> <b>
 *
 * Metrics extracted from log events are charged as custom metrics. To prevent unexpected high charges, do not specify
 * high-cardinality fields such as <code>IPAddress</code> or <code>requestID</code> as dimensions. Each different value
 * found for a dimension is treated as a separate metric and accrues charges as a separate custom metric.
 *
 * </p
 *
 * To help prevent accidental high charges, Amazon disables a metric filter if it generates 1000 different name/value pairs
 * for the dimensions that you have specified within a certain amount of
 *
 * time>
 *
 * You can also set up a billing alarm to alert you if your charges are higher than expected. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
 * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services Charges</a>.
 */
PutMetricFilterResponse * CloudWatchLogsClient::putMetricFilter(const PutMetricFilterRequest &request)
{
    return qobject_cast<PutMetricFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutQueryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a query definition for CloudWatch Logs Insights. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AnalyzingLogData.html">Analyzing Log Data with CloudWatch
 * Logs
 *
 * Insights</a>>
 *
 * To update a query definition, specify its <code>queryDefinitionId</code> in your request. The values of
 * <code>name</code>, <code>queryString</code>, and <code>logGroupNames</code> are changed to the values that you specify
 * in your update operation. No current values are retained from the current query definition. For example, if you update a
 * current query definition that includes log groups, and you don't specify the <code>logGroupNames</code> parameter in
 * your update operation, the query definition changes to contain no log
 *
 * groups>
 *
 * You must have the <code>logs:PutQueryDefinition</code> permission to be able to perform this
 */
PutQueryDefinitionResponse * CloudWatchLogsClient::putQueryDefinition(const PutQueryDefinitionRequest &request)
{
    return qobject_cast<PutQueryDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a resource policy allowing other Amazon Web Services services to put log events to this account, such
 * as Amazon Route 53. An account can have up to 10 resource policies per Amazon Web Services
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
 * to subscribe to a real-time stream of log events ingested through <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a> and
 * have them delivered to a specific destination. When log events are sent to the receiving service, they are Base64
 * encoded and compressed with the gzip
 *
 * format>
 *
 * The following destinations are supported for subscription
 *
 * filters> <ul> <li>
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
 * An Lambda function that belongs to the same account as the subscription filter, for same-account
 *
 * delivery> </li> </ul>
 *
 * Each log group can have up to two subscription filters associated with it. If you are updating an existing filter, you
 * must specify the correct name in <code>filterName</code>.
 *
 * </p
 *
 * To perform a <code>PutSubscriptionFilter</code> operation, you must also have the <code>iam:PassRole</code>
 */
PutSubscriptionFilterResponse * CloudWatchLogsClient::putSubscriptionFilter(const PutSubscriptionFilterRequest &request)
{
    return qobject_cast<PutSubscriptionFilterResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * StartQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules a query of a log group using CloudWatch Logs Insights. You specify the log group and time range to query and
 * the query string to
 *
 * use>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch Logs Insights Query
 *
 * Syntax</a>>
 *
 * Queries time out after 15 minutes of execution. If your queries are timing out, reduce the time range being searched or
 * partition your query into a number of
 */
StartQueryResponse * CloudWatchLogsClient::startQuery(const StartQueryRequest &request)
{
    return qobject_cast<StartQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchLogsClient service, and returns a pointer to an
 * StopQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a CloudWatch Logs Insights query that is in progress. If the query has already ended, the operation returns an
 * error indicating that the specified query is not
 */
StopQueryResponse * CloudWatchLogsClient::stopQuery(const StopQueryRequest &request)
{
    return qobject_cast<StopQueryResponse *>(send(request));
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
 * To list the tags for a log group, use <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
 * To remove tags, use <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UntagLogGroup.html">UntagLogGroup</a>>
 *
 * For more information about tags, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html#log-group-tagging">Tag
 * Log Groups in Amazon CloudWatch Logs</a> in the <i>Amazon CloudWatch Logs User
 *
 * Guide</i>>
 *
 * CloudWatch Logs doesn’t support IAM policies that prevent users from assigning specified tags to log groups using the
 * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition keys. For more information about using
 * tags to control access, see <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
 * access to Amazon Web Services resources using
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
 * To list the tags for a log group, use <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_ListTagsLogGroup.html">ListTagsLogGroup</a>.
 * To add tags, use <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_TagLogGroup.html">TagLogGroup</a>>
 *
 * CloudWatch Logs doesn’t support IAM policies that prevent users from assigning specified tags to log groups using the
 * <code>aws:Resource/<i>key-name</i> </code> or <code>aws:TagKeys</code> condition keys.
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
