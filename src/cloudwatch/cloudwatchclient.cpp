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

#include "cloudwatchclient.h"
#include "cloudwatchclient_p.h"

#include "core/awssignaturev4.h"
#include "deletealarmsrequest.h"
#include "deletealarmsresponse.h"
#include "deleteanomalydetectorrequest.h"
#include "deleteanomalydetectorresponse.h"
#include "deletedashboardsrequest.h"
#include "deletedashboardsresponse.h"
#include "describealarmhistoryrequest.h"
#include "describealarmhistoryresponse.h"
#include "describealarmsrequest.h"
#include "describealarmsresponse.h"
#include "describealarmsformetricrequest.h"
#include "describealarmsformetricresponse.h"
#include "describeanomalydetectorsrequest.h"
#include "describeanomalydetectorsresponse.h"
#include "disablealarmactionsrequest.h"
#include "disablealarmactionsresponse.h"
#include "enablealarmactionsrequest.h"
#include "enablealarmactionsresponse.h"
#include "getdashboardrequest.h"
#include "getdashboardresponse.h"
#include "getmetricdatarequest.h"
#include "getmetricdataresponse.h"
#include "getmetricstatisticsrequest.h"
#include "getmetricstatisticsresponse.h"
#include "getmetricwidgetimagerequest.h"
#include "getmetricwidgetimageresponse.h"
#include "listdashboardsrequest.h"
#include "listdashboardsresponse.h"
#include "listmetricsrequest.h"
#include "listmetricsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putanomalydetectorrequest.h"
#include "putanomalydetectorresponse.h"
#include "putdashboardrequest.h"
#include "putdashboardresponse.h"
#include "putmetricalarmrequest.h"
#include "putmetricalarmresponse.h"
#include "putmetricdatarequest.h"
#include "putmetricdataresponse.h"
#include "setalarmstaterequest.h"
#include "setalarmstateresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudWatch
 * \brief Contains classess for accessing Amazon CloudWatch.
 *
 * \inmodule QtAwsCloudWatch
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::CloudWatchClient
 * \brief The CloudWatchClient class provides access to the Amazon CloudWatch service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 */

/*!
 * \brief Constructs a CloudWatchClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudWatchClient::CloudWatchClient(
    const QtAws::Core::AwsRegion::Region region,
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

/*!
 * \overload CloudWatchClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DeleteAlarmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified alarms. In the event of an error, no alarms are
 */
DeleteAlarmsResponse * CloudWatchClient::deleteAlarms(const DeleteAlarmsRequest &request)
{
    return qobject_cast<DeleteAlarmsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DeleteAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified anomaly detection model from your
 */
DeleteAnomalyDetectorResponse * CloudWatchClient::deleteAnomalyDetector(const DeleteAnomalyDetectorRequest &request)
{
    return qobject_cast<DeleteAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DeleteDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all dashboards that you specify. You may specify up to 100 dashboards to delete. If there is an error during
 * this call, no dashboards are
 */
DeleteDashboardsResponse * CloudWatchClient::deleteDashboards(const DeleteDashboardsRequest &request)
{
    return qobject_cast<DeleteDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeAlarmHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the history for the specified alarm. You can filter the results by date range or item type. If an alarm name
 * is not specified, the histories for all alarms are
 *
 * returned>
 *
 * CloudWatch retains the history of an alarm even if you delete the
 */
DescribeAlarmHistoryResponse * CloudWatchClient::describeAlarmHistory(const DescribeAlarmHistoryRequest &request)
{
    return qobject_cast<DescribeAlarmHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeAlarmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified alarms. If no alarms are specified, all alarms are returned. Alarms can be retrieved by using
 * only a prefix for the alarm name, the alarm state, or a prefix for any
 */
DescribeAlarmsResponse * CloudWatchClient::describeAlarms(const DescribeAlarmsRequest &request)
{
    return qobject_cast<DescribeAlarmsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeAlarmsForMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the alarms for the specified metric. To filter the results, specify a statistic, period, or
 */
DescribeAlarmsForMetricResponse * CloudWatchClient::describeAlarmsForMetric(const DescribeAlarmsForMetricRequest &request)
{
    return qobject_cast<DescribeAlarmsForMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeAnomalyDetectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the anomaly detection models that you have created in your account. You can list all models in your account or
 * filter the results to only the models that are related to a certain namespace, metric name, or metric
 */
DescribeAnomalyDetectorsResponse * CloudWatchClient::describeAnomalyDetectors(const DescribeAnomalyDetectorsRequest &request)
{
    return qobject_cast<DescribeAnomalyDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DisableAlarmActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the actions for the specified alarms. When an alarm's actions are disabled, the alarm actions do not execute
 * when the alarm state
 */
DisableAlarmActionsResponse * CloudWatchClient::disableAlarmActions(const DisableAlarmActionsRequest &request)
{
    return qobject_cast<DisableAlarmActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * EnableAlarmActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the actions for the specified
 */
EnableAlarmActionsResponse * CloudWatchClient::enableAlarmActions(const EnableAlarmActionsRequest &request)
{
    return qobject_cast<EnableAlarmActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the details of the dashboard that you
 *
 * specify>
 *
 * To copy an existing dashboard, use <code>GetDashboard</code>, and then use the data returned within
 * <code>DashboardBody</code> as the template for the new dashboard when you call <code>PutDashboard</code> to create the
 */
GetDashboardResponse * CloudWatchClient::getDashboard(const GetDashboardRequest &request)
{
    return qobject_cast<GetDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use the <code>GetMetricData</code> API to retrieve as many as 100 different metrics in a single request, with a
 * total of as many as 100,800 datapoints. You can also optionally perform math expressions on the values of the returned
 * statistics, to create new time series that represent new insights into your data. For example, using Lambda metrics, you
 * could divide the Errors metric by the Invocations metric to get an error rate time series. For more information about
 * metric math expressions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
 * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User
 *
 * Guide</i>>
 *
 * Calls to the <code>GetMetricData</code> API have a different pricing structure than calls to
 * <code>GetMetricStatistics</code>. For more information about pricing, see <a
 * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
 *
 * Pricing</a>>
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
 */
GetMetricDataResponse * CloudWatchClient::getMetricData(const GetMetricDataRequest &request)
{
    return qobject_cast<GetMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetMetricStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Percentile statistics are not available for metrics when any of the metric values are negative
 *
 * numbers>
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
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon CloudWatch Metrics
 * and Dimensions Reference</a> in the <i>Amazon CloudWatch User
 */
GetMetricStatisticsResponse * CloudWatchClient::getMetricStatistics(const GetMetricStatisticsRequest &request)
{
    return qobject_cast<GetMetricStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetMetricWidgetImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use the <code>GetMetricWidgetImage</code> API to retrieve a snapshot graph of one or more Amazon CloudWatch
 * metrics as a bitmap image. You can then embed this image into your services and products, such as wiki pages, reports,
 * and documents. You could also retrieve images regularly, such as every minute, and create your own custom live
 *
 * dashboard>
 *
 * The graph you retrieve can include all CloudWatch metric graph features, including metric math and horizontal and
 * vertical
 *
 * annotations>
 *
 * There is a limit of 20 transactions per second for this API. Each <code>GetMetricWidgetImage</code> action has the
 * following
 *
 * limits> <ul> <li>
 *
 * As many as 100 metrics in the
 *
 * graph> </li> <li>
 *
 * Up to 100 KB uncompressed
 */
GetMetricWidgetImageResponse * CloudWatchClient::getMetricWidgetImage(const GetMetricWidgetImageRequest &request)
{
    return qobject_cast<GetMetricWidgetImageResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * ListDashboardsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the dashboards for your account. If you include <code>DashboardNamePrefix</code>, only those
 * dashboards with names starting with the prefix are listed. Otherwise, all dashboards in your account are listed.
 *
 * </p
 *
 * <code>ListDashboards</code> returns up to 1000 results on one page. If there are more than 1000 dashboards, you can call
 * <code>ListDashboards</code> again and include the value you received for <code>NextToken</code> in the first call, to
 * receive the next 1000
 */
ListDashboardsResponse * CloudWatchClient::listDashboards(const ListDashboardsRequest &request)
{
    return qobject_cast<ListDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * ListMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the specified metrics. You can use the returned metrics with <a>GetMetricData</a> or <a>GetMetricStatistics</a> to
 * obtain statistical
 *
 * data>
 *
 * Up to 500 results are returned for any one call. To retrieve additional results, use the returned token with subsequent
 *
 * calls>
 *
 * After you create a metric, allow up to fifteen minutes before the metric appears. Statistics about the metric, however,
 * are available sooner using <a>GetMetricData</a> or
 */
ListMetricsResponse * CloudWatchClient::listMetrics(const ListMetricsRequest &request)
{
    return qobject_cast<ListMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with a CloudWatch resource. Alarms support
 */
ListTagsForResourceResponse * CloudWatchClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * PutAnomalyDetectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an anomaly detection model for a CloudWatch metric. You can use the model to display a band of expected normal
 * values when the metric is
 *
 * graphed>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Anomaly_Detection.html">CloudWatch
 * Anomaly
 */
PutAnomalyDetectorResponse * CloudWatchClient::putAnomalyDetector(const PutAnomalyDetectorRequest &request)
{
    return qobject_cast<PutAnomalyDetectorResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * PutDashboardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dashboard if it does not already exist, or updates an existing dashboard. If you update a dashboard, the
 * entire contents are replaced with what you specify
 *
 * here>
 *
 * All dashboards in your account are global, not
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
 */
PutDashboardResponse * CloudWatchClient::putDashboard(const PutDashboardRequest &request)
{
    return qobject_cast<PutDashboardResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * PutMetricAlarmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an alarm and associates it with the specified metric, metric math expression, or anomaly detection
 *
 * model>
 *
 * Alarms based on anomaly detection models cannot have Auto Scaling
 *
 * actions>
 *
 * When this operation creates an alarm, the alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
 * then evaluated and its state is set appropriately. Any actions associated with the new state are then
 *
 * executed>
 *
 * When you update an existing alarm, its state is left unchanged, but the update completely overwrites the previous
 * configuration of the
 *
 * alarm>
 *
 * If you are an IAM user, you must have Amazon EC2 permissions for some alarm
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
 * No specific permissions are needed for alarms with recover
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
 * The first time you create an alarm in the AWS Management Console, the CLI, or by using the PutMetricAlarm API,
 * CloudWatch creates the necessary service-linked role for you. The service-linked role is called
 * <code>AWSServiceRoleForCloudWatchEvents</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">AWS
 * service-linked
 */
PutMetricAlarmResponse * CloudWatchClient::putMetricAlarm(const PutMetricAlarmRequest &request)
{
    return qobject_cast<PutMetricAlarmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * PutMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes metric data points to Amazon CloudWatch. CloudWatch associates the data points with the specified metric. If
 * the specified metric does not exist, CloudWatch creates the metric. When CloudWatch creates a metric, it can take up to
 * fifteen minutes for the metric to appear in calls to
 *
 * <a>ListMetrics</a>>
 *
 * You can publish either individual data points in the <code>Value</code> field, or arrays of values and the number of
 * times each value occurred during the period by using the <code>Values</code> and <code>Counts</code> fields in the
 * <code>MetricDatum</code> structure. Using the <code>Values</code> and <code>Counts</code> method enables you to publish
 * up to 150 values per metric with one <code>PutMetricData</code> request, and supports retrieving percentile statistics
 * on this
 *
 * data>
 *
 * Each <code>PutMetricData</code> request is limited to 40 KB in size for HTTP POST requests. You can send a payload
 * compressed by gzip. Each request is also limited to no more than 20 different
 *
 * metrics>
 *
 * Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, CloudWatch rejects values that
 * are either too small or too large. Values must be in the range of 8.515920e-109 to 1.174271e+108 (Base 10) or 2e-360 to
 * 2e360 (Base 2). In addition, special values (for example, NaN, +Infinity, -Infinity) are not
 *
 * supported>
 *
 * You can use up to 10 dimensions per metric to further clarify what data the metric collects. Each dimension consists of
 * a Name and Value pair. For more information about specifying dimensions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing Metrics</a> in
 * the <i>Amazon CloudWatch User
 *
 * Guide</i>>
 *
 * Data points with time stamps from 24 hours ago or longer can take at least 48 hours to become available for
 * <a>GetMetricData</a> or <a>GetMetricStatistics</a> from the time they are
 *
 * submitted>
 *
 * CloudWatch needs raw data points to calculate percentile statistics. If you publish data using a statistic set instead,
 * you can only retrieve percentile statistics for this data if one of the following conditions is
 *
 * true> <ul> <li>
 *
 * The <code>SampleCount</code> value of the statistic set is 1 and <code>Min</code>, <code>Max</code>, and
 * <code>Sum</code> are all
 *
 * equal> </li> <li>
 *
 * The <code>Min</code> and <code>Max</code> are equal, and <code>Sum</code> is equal to <code>Min</code> multiplied by
 */
PutMetricDataResponse * CloudWatchClient::putMetricData(const PutMetricDataRequest &request)
{
    return qobject_cast<PutMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * SetAlarmStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Temporarily sets the state of an alarm for testing purposes. When the updated state differs from the previous value, the
 * action configured for the appropriate state is invoked. For example, if your alarm is configured to send an Amazon SNS
 * message when an alarm is triggered, temporarily changing the alarm state to <code>ALARM</code> sends an SNS message. The
 * alarm returns to its actual state (often within seconds). Because the alarm state change happens quickly, it is
 * typically only visible in the alarm's <b>History</b> tab in the Amazon CloudWatch console or through
 */
SetAlarmStateResponse * CloudWatchClient::setAlarmState(const SetAlarmStateRequest &request)
{
    return qobject_cast<SetAlarmStateResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified CloudWatch resource. Tags can help you organize and
 * categorize your resources. You can also use them to scope user permissions, by granting a user permission to access or
 * change only resources with certain tag values. In CloudWatch, alarms can be
 *
 * tagged>
 *
 * Tags don't have any semantic meaning to AWS and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a resource that already has tags. If you specify a new tag key for
 * the resource, this tag is appended to the list of tags associated with the resource. If you specify a tag key that is
 * already associated with the resource, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
 */
TagResourceResponse * CloudWatchClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * CloudWatchClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudWatch::CloudWatchClientPrivate
 * \brief The CloudWatchClientPrivate class provides private implementation for CloudWatchClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchClientPrivate object with public implementation \a q.
 */
CloudWatchClientPrivate::CloudWatchClientPrivate(CloudWatchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudWatch
} // namespace QtAws
