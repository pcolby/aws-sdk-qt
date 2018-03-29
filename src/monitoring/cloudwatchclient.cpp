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

#include "cloudwatchclient.h"
#include "cloudwatchclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  CloudWatchClient
 *
 * @brief  Client for Amazon CloudWatch
 *
 * Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 * You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 *
 * applications>
 *
 * CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 * define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 * this data to determine whether you should launch additional instances to handle increased load. You can also use this
 * data to stop under-used instances to save
 *
 * money>
 *
 * In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 * CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 */

/**
 * @brief  Constructs a new CloudWatchClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudWatchClient::CloudWatchClient(
    const AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchClientPrivate(this), parent)
{
    Q_D(CloudWatchClient);
    d->apiVersion = QStringLiteral("2010-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("monitoring");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch");
    d->serviceName = QStringLiteral("monitoring");
}

/**
 * @brief  Constructs a new CloudWatchClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CloudWatchClient::CloudWatchClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudWatchClientPrivate(this), parent)
{
    Q_D(CloudWatchClient);
    d->apiVersion = QStringLiteral("2010-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("monitoring");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudWatch");
    d->serviceName = QStringLiteral("monitoring");
}

/**
 * Deletes the specified alarms. In the event of an error, no alarms are
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAlarmsResponse * CloudWatchClient::deleteAlarms(const DeleteAlarmsRequest &request)
{
    return qobject_cast<DeleteAlarmsResponse *>(send(request));
}

/**
 * Deletes all dashboards that you specify. You may specify up to 100 dashboards to delete. If there is an error during
 * this call, no dashboards are
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDashboardsResponse * CloudWatchClient::deleteDashboards(const DeleteDashboardsRequest &request)
{
    return qobject_cast<DeleteDashboardsResponse *>(send(request));
}

/**
 * Retrieves the history for the specified alarm. You can filter the results by date range or item type. If an alarm name
 * is not specified, the histories for all alarms are
 *
 * returned>
 *
 * CloudWatch retains the history of an alarm even if you delete the
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAlarmHistoryResponse * CloudWatchClient::describeAlarmHistory(const DescribeAlarmHistoryRequest &request)
{
    return qobject_cast<DescribeAlarmHistoryResponse *>(send(request));
}

/**
 * Retrieves the specified alarms. If no alarms are specified, all alarms are returned. Alarms can be retrieved by using
 * only a prefix for the alarm name, the alarm state, or a prefix for any
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAlarmsResponse * CloudWatchClient::describeAlarms(const DescribeAlarmsRequest &request)
{
    return qobject_cast<DescribeAlarmsResponse *>(send(request));
}

/**
 * Retrieves the alarms for the specified metric. To filter the results, specify a statistic, period, or
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAlarmsForMetricResponse * CloudWatchClient::describeAlarmsForMetric(const DescribeAlarmsForMetricRequest &request)
{
    return qobject_cast<DescribeAlarmsForMetricResponse *>(send(request));
}

/**
 * Disables the actions for the specified alarms. When an alarm's actions are disabled, the alarm actions do not execute
 * when the alarm state
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableAlarmActionsResponse * CloudWatchClient::disableAlarmActions(const DisableAlarmActionsRequest &request)
{
    return qobject_cast<DisableAlarmActionsResponse *>(send(request));
}

/**
 * Enables the actions for the specified
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableAlarmActionsResponse * CloudWatchClient::enableAlarmActions(const EnableAlarmActionsRequest &request)
{
    return qobject_cast<EnableAlarmActionsResponse *>(send(request));
}

/**
 * Displays the details of the dashboard that you
 *
 * specify>
 *
 * To copy an existing dashboard, use <code>GetDashboard</code>, and then use the data returned within
 * <code>DashboardBody</code> as the template for the new dashboard when you call <code>PutDashboard</code> to create the
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDashboardResponse * CloudWatchClient::getDashboard(const GetDashboardRequest &request)
{
    return qobject_cast<GetDashboardResponse *>(send(request));
}

/**
 * Gets statistics for the specified
 *
 * metric>
 *
 * The maximum number of data points returned from a single call is 1,440. If you request more than 1,440 data points,
 * CloudWatch returns an error. To reduce the number of data points, you can narrow the specified time range and make
 * multiple requests across adjacent time ranges, or you can increase the specified period. Data points are not returned in
 * chronological
 *
 * order>
 *
 * CloudWatch aggregates data points based on the length of the period that you specify. For example, if you request
 * statistics with a one-hour period, CloudWatch aggregates all data points with time stamps that fall within each one-hour
 * period. Therefore, the number of values aggregated by CloudWatch is larger than the number of data points
 *
 * returned>
 *
 * CloudWatch needs raw data points to calculate percentile statistics. If you publish data using a statistic set instead,
 * you can only retrieve percentile statistics for this data if one of the following conditions is
 *
 * true> <ul> <li>
 *
 * The SampleCount value of the statistic set is
 *
 * 1> </li> <li>
 *
 * The Min and the Max values of the statistic set are
 *
 * equal> </li> </ul>
 *
 * Amazon CloudWatch retains metric data as
 *
 * follows> <ul> <li>
 *
 * Data points with a period of less than 60 seconds are available for 3 hours. These data points are high-resolution
 * metrics and are available only for custom metrics that have been defined with a <code>StorageResolution</code> of
 *
 * 1> </li> <li>
 *
 * Data points with a period of 60 seconds (1-minute) are available for 15
 *
 * days> </li> <li>
 *
 * Data points with a period of 300 seconds (5-minute) are available for 63
 *
 * days> </li> <li>
 *
 * Data points with a period of 3600 seconds (1 hour) are available for 455 days (15
 *
 * months)> </li> </ul>
 *
 * Data points that are initially published with a shorter period are aggregated together for long-term storage. For
 * example, if you collect data using a period of 1 minute, the data remains available for 15 days with 1-minute
 * resolution. After 15 days, this data is still available, but is aggregated and retrievable only with a resolution of 5
 * minutes. After 63 days, the data is further aggregated and is available with a resolution of 1
 *
 * hour>
 *
 * CloudWatch started retaining 5-minute and 1-hour metric data as of July 9,
 *
 * 2016>
 *
 * For information about metrics and dimensions supported by AWS services, see the <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon CloudWatch Metrics
 * and Dimensions Reference</a> in the <i>Amazon CloudWatch User
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMetricStatisticsResponse * CloudWatchClient::getMetricStatistics(const GetMetricStatisticsRequest &request)
{
    return qobject_cast<GetMetricStatisticsResponse *>(send(request));
}

/**
 * Returns a list of the dashboards for your account. If you include <code>DashboardNamePrefix</code>, only those
 * dashboards with names starting with the prefix are listed. Otherwise, all dashboards in your account are listed.
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDashboardsResponse * CloudWatchClient::listDashboards(const ListDashboardsRequest &request)
{
    return qobject_cast<ListDashboardsResponse *>(send(request));
}

/**
 * List the specified metrics. You can use the returned metrics with <a>GetMetricStatistics</a> to obtain statistical
 *
 * data>
 *
 * Up to 500 results are returned for any one call. To retrieve additional results, use the returned token with subsequent
 *
 * calls>
 *
 * After you create a metric, allow up to fifteen minutes before the metric appears. Statistics about the metric, however,
 * are available sooner using
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMetricsResponse * CloudWatchClient::listMetrics(const ListMetricsRequest &request)
{
    return qobject_cast<ListMetricsResponse *>(send(request));
}

/**
 * Creates a dashboard if it does not already exist, or updates an existing dashboard. If you update a dashboard, the
 * entire contents are replaced with what you specify
 *
 * here>
 *
 * You can have up to 500 dashboards per account. All dashboards in your account are global, not
 *
 * region-specific>
 *
 * A simple way to create a dashboard using <code>PutDashboard</code> is to copy an existing dashboard. To copy an existing
 * dashboard using the console, you can load the dashboard and then use the View/edit source command in the Actions menu to
 * display the JSON block for that dashboard. Another way to copy a dashboard is to use <code>GetDashboard</code>, and then
 * use the data returned within <code>DashboardBody</code> as the template for the new dashboard when you call
 *
 * <code>PutDashboard</code>>
 *
 * When you create a dashboard with <code>PutDashboard</code>, a good practice is to add a text widget at the top of the
 * dashboard with a message that the dashboard was created by script and should not be changed in the console. This message
 * could also point console users to the location of the <code>DashboardBody</code> script or the CloudFormation template
 * used to create the
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutDashboardResponse * CloudWatchClient::putDashboard(const PutDashboardRequest &request)
{
    return qobject_cast<PutDashboardResponse *>(send(request));
}

/**
 * Creates or updates an alarm and associates it with the specified metric. Optionally, this operation can associate one or
 * more Amazon SNS resources with the
 *
 * alarm>
 *
 * When this operation creates an alarm, the alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
 * evaluated and its state is set appropriately. Any actions associated with the state are then
 *
 * executed>
 *
 * When you update an existing alarm, its state is left unchanged, but the update completely overwrites the previous
 * configuration of the
 *
 * alarm>
 *
 * If you are an IAM user, you must have Amazon EC2 permissions for some
 *
 * operations> <ul> <li>
 *
 * <code>iam:CreateServiceLinkedRole</code> for all alarms with EC2
 *
 * action> </li> <li>
 *
 * <code>ec2:DescribeInstanceStatus</code> and <code>ec2:DescribeInstances</code> for all alarms on EC2 instance status
 *
 * metric> </li> <li>
 *
 * <code>ec2:StopInstances</code> for alarms with stop
 *
 * action> </li> <li>
 *
 * <code>ec2:TerminateInstances</code> for alarms with terminate
 *
 * action> </li> <li>
 *
 * <code>ec2:DescribeInstanceRecoveryAttribute</code> and <code>ec2:RecoverInstances</code> for alarms with recover
 *
 * action> </li> </ul>
 *
 * If you have read/write permissions for Amazon CloudWatch but not for Amazon EC2, you can still create an alarm, but the
 * stop or terminate actions are not performed. However, if you are later granted the required permissions, the alarm
 * actions that you created earlier are
 *
 * performed>
 *
 * If you are using an IAM role (for example, an EC2 instance profile), you cannot stop or terminate the instance using
 * alarm actions. However, you can still see the alarm state and perform any other actions such as Amazon SNS notifications
 * or Auto Scaling
 *
 * policies>
 *
 * If you are using temporary security credentials granted using AWS STS, you cannot stop or terminate an EC2 instance
 * using alarm
 *
 * actions>
 *
 * You must create at least one stop, terminate, or reboot alarm using either the Amazon EC2 or CloudWatch consoles to
 * create the <b>EC2ActionsAccess</b> IAM role. After this IAM role is created, you can create stop, terminate, or reboot
 * alarms using a command-line interface or
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutMetricAlarmResponse * CloudWatchClient::putMetricAlarm(const PutMetricAlarmRequest &request)
{
    return qobject_cast<PutMetricAlarmResponse *>(send(request));
}

/**
 * Publishes metric data points to Amazon CloudWatch. CloudWatch associates the data points with the specified metric. If
 * the specified metric does not exist, CloudWatch creates the metric. When CloudWatch creates a metric, it can take up to
 * fifteen minutes for the metric to appear in calls to
 *
 * <a>ListMetrics</a>>
 *
 * Each <code>PutMetricData</code> request is limited to 40 KB in size for HTTP POST
 *
 * requests>
 *
 * Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, CloudWatch rejects values that
 * are either too small or too large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to
 * 2e360 (Base 2). In addition, special values (for example, NaN, +Infinity, -Infinity) are not
 *
 * supported>
 *
 * You can use up to 10 dimensions per metric to further clarify what data the metric collects. For more information about
 * specifying dimensions, see <a
 * href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing Metrics</a> in
 * the <i>Amazon CloudWatch User
 *
 * Guide</i>>
 *
 * Data points with time stamps from 24 hours ago or longer can take at least 48 hours to become available for
 * <a>GetMetricStatistics</a> from the time they are
 *
 * submitted>
 *
 * CloudWatch needs raw data points to calculate percentile statistics. If you publish data using a statistic set instead,
 * you can only retrieve percentile statistics for this data if one of the following conditions is
 *
 * true> <ul> <li>
 *
 * The SampleCount value of the statistic set is
 *
 * > </li> <li>
 *
 * The Min and the Max values of the statistic set are
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutMetricDataResponse * CloudWatchClient::putMetricData(const PutMetricDataRequest &request)
{
    return qobject_cast<PutMetricDataResponse *>(send(request));
}

/**
 * Temporarily sets the state of an alarm for testing purposes. When the updated state differs from the previous value, the
 * action configured for the appropriate state is invoked. For example, if your alarm is configured to send an Amazon SNS
 * message when an alarm is triggered, temporarily changing the alarm state to <code>ALARM</code> sends an SNS message. The
 * alarm returns to its actual state (often within seconds). Because the alarm state change happens quickly, it is
 * typically only visible in the alarm's <b>History</b> tab in the Amazon CloudWatch console or through
 *
 * @param  request Request to send to Amazon CloudWatch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetAlarmStateResponse * CloudWatchClient::setAlarmState(const SetAlarmStateRequest &request)
{
    return qobject_cast<SetAlarmStateResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  CloudWatchClientPrivate
 *
 * @brief  Private implementation for CloudWatchClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudWatchClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudWatchClient instance.
 */
CloudWatchClientPrivate::CloudWatchClientPrivate(CloudWatchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatch
} // namespace QtAws
