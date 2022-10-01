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

#include "cloudwatchclient.h"
#include "cloudwatchclient_p.h"

#include "core/awssignaturev4.h"
#include "deletealarmsrequest.h"
#include "deletealarmsresponse.h"
#include "deleteanomalydetectorrequest.h"
#include "deleteanomalydetectorresponse.h"
#include "deletedashboardsrequest.h"
#include "deletedashboardsresponse.h"
#include "deleteinsightrulesrequest.h"
#include "deleteinsightrulesresponse.h"
#include "deletemetricstreamrequest.h"
#include "deletemetricstreamresponse.h"
#include "describealarmhistoryrequest.h"
#include "describealarmhistoryresponse.h"
#include "describealarmsrequest.h"
#include "describealarmsresponse.h"
#include "describealarmsformetricrequest.h"
#include "describealarmsformetricresponse.h"
#include "describeanomalydetectorsrequest.h"
#include "describeanomalydetectorsresponse.h"
#include "describeinsightrulesrequest.h"
#include "describeinsightrulesresponse.h"
#include "disablealarmactionsrequest.h"
#include "disablealarmactionsresponse.h"
#include "disableinsightrulesrequest.h"
#include "disableinsightrulesresponse.h"
#include "enablealarmactionsrequest.h"
#include "enablealarmactionsresponse.h"
#include "enableinsightrulesrequest.h"
#include "enableinsightrulesresponse.h"
#include "getdashboardrequest.h"
#include "getdashboardresponse.h"
#include "getinsightrulereportrequest.h"
#include "getinsightrulereportresponse.h"
#include "getmetricdatarequest.h"
#include "getmetricdataresponse.h"
#include "getmetricstatisticsrequest.h"
#include "getmetricstatisticsresponse.h"
#include "getmetricstreamrequest.h"
#include "getmetricstreamresponse.h"
#include "getmetricwidgetimagerequest.h"
#include "getmetricwidgetimageresponse.h"
#include "listdashboardsrequest.h"
#include "listdashboardsresponse.h"
#include "listmanagedinsightrulesrequest.h"
#include "listmanagedinsightrulesresponse.h"
#include "listmetricstreamsrequest.h"
#include "listmetricstreamsresponse.h"
#include "listmetricsrequest.h"
#include "listmetricsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putanomalydetectorrequest.h"
#include "putanomalydetectorresponse.h"
#include "putcompositealarmrequest.h"
#include "putcompositealarmresponse.h"
#include "putdashboardrequest.h"
#include "putdashboardresponse.h"
#include "putinsightrulerequest.h"
#include "putinsightruleresponse.h"
#include "putmanagedinsightrulesrequest.h"
#include "putmanagedinsightrulesresponse.h"
#include "putmetricalarmrequest.h"
#include "putmetricalarmresponse.h"
#include "putmetricdatarequest.h"
#include "putmetricdataresponse.h"
#include "putmetricstreamrequest.h"
#include "putmetricstreamresponse.h"
#include "setalarmstaterequest.h"
#include "setalarmstateresponse.h"
#include "startmetricstreamsrequest.h"
#include "startmetricstreamsresponse.h"
#include "stopmetricstreamsrequest.h"
#include "stopmetricstreamsresponse.h"
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
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
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
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
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
 * Deletes the specified alarms. You can delete up to 100 alarms in one operation. However, this total can include no more
 * than one composite alarm. For example, you could delete 99 metric alarms and one composite alarms with one operation,
 * but you can't delete two composite alarms with one
 *
 * operation>
 *
 * In the event of an error, no alarms are
 *
 * deleted> <note>
 *
 * It is possible to create a loop or cycle of composite alarms, where composite alarm A depends on composite alarm B, and
 * composite alarm B also depends on composite alarm A. In this scenario, you can't delete any composite alarm that is part
 * of the cycle because there is always still a composite alarm that depends on that alarm that you want to
 *
 * delete>
 *
 * To get out of such a situation, you must break the cycle by changing the rule of one of the composite alarms in the
 * cycle to remove a dependency that creates the cycle. The simplest change to make to break a cycle is to change the
 * <code>AlarmRule</code> of one of the alarms to <code>False</code>.
 *
 * </p
 *
 * Additionally, the evaluation of composite alarms stops if CloudWatch detects a cycle in the evaluation path.
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
 * Deletes the specified anomaly detection model from your account. For more information about how to delete an anomaly
 * detection model, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Create_Anomaly_Detection_Alarm.html#Delete_Anomaly_Detection_Model">Deleting
 * an anomaly detection model</a> in the <i>CloudWatch User Guide</i>.
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
 * Deletes all dashboards that you specify. You can specify up to 100 dashboards to delete. If there is an error during
 * this call, no dashboards are
 */
DeleteDashboardsResponse * CloudWatchClient::deleteDashboards(const DeleteDashboardsRequest &request)
{
    return qobject_cast<DeleteDashboardsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DeleteInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified Contributor Insights
 *
 * rules>
 *
 * If you create a rule, delete it, and then re-create it with the same name, historical data from the first time the rule
 * was created might not be
 */
DeleteInsightRulesResponse * CloudWatchClient::deleteInsightRules(const DeleteInsightRulesRequest &request)
{
    return qobject_cast<DeleteInsightRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DeleteMetricStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the metric stream that you
 */
DeleteMetricStreamResponse * CloudWatchClient::deleteMetricStream(const DeleteMetricStreamRequest &request)
{
    return qobject_cast<DeleteMetricStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeAlarmHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the history for the specified alarm. You can filter the results by date range or item type. If an alarm name
 * is not specified, the histories for either all metric alarms or all composite alarms are
 *
 * returned>
 *
 * CloudWatch retains the history of an alarm even if you delete the
 *
 * alarm>
 *
 * To use this operation and return information about a composite alarm, you must be signed on with the
 * <code>cloudwatch:DescribeAlarmHistory</code> permission that is scoped to <code>*</code>. You can't return information
 * about composite alarms if your <code>cloudwatch:DescribeAlarmHistory</code> permission has a narrower
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
 * Retrieves the specified alarms. You can filter the results by specifying a prefix for the alarm name, the alarm state,
 * or a prefix for any
 *
 * action>
 *
 * To use this operation and return information about composite alarms, you must be signed on with the
 * <code>cloudwatch:DescribeAlarms</code> permission that is scoped to <code>*</code>. You can't return information about
 * composite alarms if your <code>cloudwatch:DescribeAlarms</code> permission has a narrower
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
 *
 * unit>
 *
 * This operation retrieves only standard alarms that are based on the specified metric. It does not return alarms based on
 * math expressions that use the specified metric, or composite alarms that use the specified
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
 * Lists the anomaly detection models that you have created in your account. For single metric anomaly detectors, you can
 * list all of the models in your account or filter the results to only the models that are related to a certain namespace,
 * metric name, or metric dimension. For metric math anomaly detectors, you can list them by adding
 * <code>METRIC_MATH</code> to the <code>AnomalyDetectorTypes</code> array. This will return all metric math anomaly
 * detectors in your
 */
DescribeAnomalyDetectorsResponse * CloudWatchClient::describeAnomalyDetectors(const DescribeAnomalyDetectorsRequest &request)
{
    return qobject_cast<DescribeAnomalyDetectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * DescribeInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the Contributor Insights rules in your
 *
 * account>
 *
 * For more information about Contributor Insights, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using Contributor
 * Insights to Analyze High-Cardinality
 */
DescribeInsightRulesResponse * CloudWatchClient::describeInsightRules(const DescribeInsightRulesRequest &request)
{
    return qobject_cast<DescribeInsightRulesResponse *>(send(request));
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
 * DisableInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified Contributor Insights rules. When rules are disabled, they do not analyze log groups and do not
 * incur
 */
DisableInsightRulesResponse * CloudWatchClient::disableInsightRules(const DisableInsightRulesRequest &request)
{
    return qobject_cast<DisableInsightRulesResponse *>(send(request));
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
 * EnableInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the specified Contributor Insights rules. When rules are enabled, they immediately begin analyzing log
 */
EnableInsightRulesResponse * CloudWatchClient::enableInsightRules(const EnableInsightRulesRequest &request)
{
    return qobject_cast<EnableInsightRulesResponse *>(send(request));
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
 * GetInsightRuleReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the time series data collected by a Contributor Insights rule. The data includes the identity and
 * number of contributors to the log
 *
 * group>
 *
 * You can also optionally return one or more statistics about each data point in the time series. These statistics can
 * include the
 *
 * following> <ul> <li>
 *
 * <code>UniqueContributors</code> -- the number of unique contributors for each data
 *
 * point> </li> <li>
 *
 * <code>MaxContributorValue</code> -- the value of the top contributor for each data point. The identity of the
 * contributor might change for each data point in the
 *
 * graph>
 *
 * If this rule aggregates by COUNT, the top contributor for each data point is the contributor with the most occurrences
 * in that period. If the rule aggregates by SUM, the top contributor is the contributor with the highest sum in the log
 * field specified by the rule's <code>Value</code>, during that
 *
 * period> </li> <li>
 *
 * <code>SampleCount</code> -- the number of data points matched by the
 *
 * rule> </li> <li>
 *
 * <code>Sum</code> -- the sum of the values from all contributors during the time period represented by that data
 *
 * point> </li> <li>
 *
 * <code>Minimum</code> -- the minimum value from a single observation during the time period represented by that data
 *
 * point> </li> <li>
 *
 * <code>Maximum</code> -- the maximum value from a single observation during the time period represented by that data
 *
 * point> </li> <li>
 *
 * <code>Average</code> -- the average value from all contributors during the time period represented by that data
 */
GetInsightRuleReportResponse * CloudWatchClient::getInsightRuleReport(const GetInsightRuleReportRequest &request)
{
    return qobject_cast<GetInsightRuleReportResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use the <code>GetMetricData</code> API to retrieve CloudWatch metric values. The operation can also include a
 * CloudWatch Metrics Insights query, and one or more metric math
 *
 * functions>
 *
 * A <code>GetMetricData</code> operation that does not include a query can retrieve as many as 500 different metrics in a
 * single request, with a total of as many as 100,800 data points. You can also optionally perform metric math expressions
 * on the values of the returned statistics, to create new time series that represent new insights into your data. For
 * example, using Lambda metrics, you could divide the Errors metric by the Invocations metric to get an error rate time
 * series. For more information about metric math expressions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/using-metric-math.html#metric-math-syntax">Metric
 * Math Syntax and Functions</a> in the <i>Amazon CloudWatch User
 *
 * Guide</i>>
 *
 * If you include a Metrics Insights query, each <code>GetMetricData</code> operation can include only one query. But the
 * same <code>GetMetricData</code> operation can also retrieve other metrics. Metrics Insights queries can query only the
 * most recent three hours of metric data. For more information about Metrics Insights, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/query_with_cloudwatch-metrics-insights.html">Query
 * your metrics with CloudWatch Metrics
 *
 * Insights</a>>
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
 *
 * hour>
 *
 * If you omit <code>Unit</code> in your request, all data that was collected with any unit is returned, along with the
 * corresponding units that were specified when the data was reported to CloudWatch. If you specify a unit, the operation
 * returns only data that was collected with that unit specified. If you specify a unit that does not match the data
 * collected, the results of the operation are null. CloudWatch does not perform unit
 *
 * conversions>
 *
 * <b>Using Metrics Insights queries with metric math</b>
 *
 * </p
 *
 * You can't mix a Metric Insights query and metric math syntax in the same expression, but you can reference results from
 * a Metrics Insights query within other Metric math expressions. A Metrics Insights query without a <b>GROUP BY</b> clause
 * returns a single time-series (TS), and can be used as input for a metric math expression that expects a single time
 * series. A Metrics Insights query with a <b>GROUP BY</b> clause returns an array of time-series (TS[]), and can be used
 * as input for a metric math expression that expects an array of time series.
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
 * For information about metrics and dimensions supported by Amazon Web Services services, see the <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CW_Support_For_AWS.html">Amazon CloudWatch Metrics
 * and Dimensions Reference</a> in the <i>Amazon CloudWatch User
 */
GetMetricStatisticsResponse * CloudWatchClient::getMetricStatistics(const GetMetricStatisticsRequest &request)
{
    return qobject_cast<GetMetricStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * GetMetricStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the metric stream that you
 */
GetMetricStreamResponse * CloudWatchClient::getMetricStream(const GetMetricStreamRequest &request)
{
    return qobject_cast<GetMetricStreamResponse *>(send(request));
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
 * ListManagedInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list that contains the number of managed Contributor Insights rules in your account.
 */
ListManagedInsightRulesResponse * CloudWatchClient::listManagedInsightRules(const ListManagedInsightRulesRequest &request)
{
    return qobject_cast<ListManagedInsightRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * ListMetricStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of metric streams in this
 */
ListMetricStreamsResponse * CloudWatchClient::listMetricStreams(const ListMetricStreamsRequest &request)
{
    return qobject_cast<ListMetricStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * ListMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the specified metrics. You can use the returned metrics with <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a> or <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
 * to obtain statistical
 *
 * data>
 *
 * Up to 500 results are returned for any one call. To retrieve additional results, use the returned token with subsequent
 *
 * calls>
 *
 * After you create a metric, allow up to 15 minutes before the metric appears. You can see statistics about the metric
 * sooner by using <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a> or <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>>
 *
 * <code>ListMetrics</code> doesn't return information about metrics if those metrics haven't reported data in the past two
 * weeks. To retrieve those metrics, use <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a> or <a
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
 * Displays the tags associated with a CloudWatch resource. Currently, alarms and Contributor Insights rules support
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
 * PutCompositeAlarmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a <i>composite alarm</i>. When you create a composite alarm, you specify a rule expression for the
 * alarm that takes into account the alarm states of other alarms that you have created. The composite alarm goes into
 * ALARM state only if all conditions of the rule are
 *
 * met>
 *
 * The alarms specified in a composite alarm's rule expression can include metric alarms and other composite alarms. The
 * rule expression of a composite alarm can include as many as 100 underlying alarms. Any single alarm can be included in
 * the rule expressions of as many as 150 composite
 *
 * alarms>
 *
 * Using composite alarms can reduce alarm noise. You can create multiple metric alarms, and also create a composite alarm
 * and set up alerts only for the composite alarm. For example, you could create a composite alarm that goes into ALARM
 * state only when more than one of the underlying metric alarms are in ALARM
 *
 * state>
 *
 * Currently, the only alarm actions that can be taken by composite alarms are notifying SNS
 *
 * topics> <note>
 *
 * It is possible to create a loop or cycle of composite alarms, where composite alarm A depends on composite alarm B, and
 * composite alarm B also depends on composite alarm A. In this scenario, you can't delete any composite alarm that is part
 * of the cycle because there is always still a composite alarm that depends on that alarm that you want to
 *
 * delete>
 *
 * To get out of such a situation, you must break the cycle by changing the rule of one of the composite alarms in the
 * cycle to remove a dependency that creates the cycle. The simplest change to make to break a cycle is to change the
 * <code>AlarmRule</code> of one of the alarms to <code>False</code>.
 *
 * </p
 *
 * Additionally, the evaluation of composite alarms stops if CloudWatch detects a cycle in the evaluation path.
 *
 * </p </note>
 *
 * When this operation creates an alarm, the alarm state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is
 * then evaluated and its state is set appropriately. Any actions associated with the new state are then executed. For a
 * composite alarm, this initial time after creation is the only time that the alarm can be in
 * <code>INSUFFICIENT_DATA</code>
 *
 * state>
 *
 * When you update an existing alarm, its state is left unchanged, but the update completely overwrites the previous
 * configuration of the
 *
 * alarm>
 *
 * To use this operation, you must be signed on with the <code>cloudwatch:PutCompositeAlarm</code> permission that is
 * scoped to <code>*</code>. You can't create a composite alarms if your <code>cloudwatch:PutCompositeAlarm</code>
 * permission has a narrower
 *
 * scope>
 *
 * If you are an IAM user, you must have <code>iam:CreateServiceLinkedRole</code> to create a composite alarm that has
 * Systems Manager OpsItem
 */
PutCompositeAlarmResponse * CloudWatchClient::putCompositeAlarm(const PutCompositeAlarmRequest &request)
{
    return qobject_cast<PutCompositeAlarmResponse *>(send(request));
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
 * PutInsightRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Contributor Insights rule. Rules evaluate log events in a CloudWatch Logs log group, enabling you to find
 * contributor data for the log events in that log group. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">Using Contributor
 * Insights to Analyze High-Cardinality
 *
 * Data</a>>
 *
 * If you create a rule, delete it, and then re-create it with the same name, historical data from the first time the rule
 * was created might not be
 */
PutInsightRuleResponse * CloudWatchClient::putInsightRule(const PutInsightRuleRequest &request)
{
    return qobject_cast<PutInsightRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * PutManagedInsightRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a managed Contributor Insights rule for a specified Amazon Web Services resource. When you enable a managed
 * rule, you create a Contributor Insights rule that collects data from Amazon Web Services services. You cannot edit these
 * rules with <code>PutInsightRule</code>. The rules can be enabled, disabled, and deleted using
 * <code>EnableInsightRules</code>, <code>DisableInsightRules</code>, and <code>DeleteInsightRules</code>. If a previously
 * created managed rule is currently disabled, a subsequent call to this API will re-enable it. Use
 * <code>ListManagedInsightRules</code> to describe all available rules.
 */
PutManagedInsightRulesResponse * CloudWatchClient::putManagedInsightRules(const PutManagedInsightRulesRequest &request)
{
    return qobject_cast<PutManagedInsightRulesResponse *>(send(request));
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
 * The <code>iam:CreateServiceLinkedRole</code> for all alarms with EC2
 *
 * action> </li> <li>
 *
 * The <code>iam:CreateServiceLinkedRole</code> to create an alarm with Systems Manager OpsItem
 *
 * actions> </li> </ul>
 *
 * The first time you create an alarm in the Amazon Web Services Management Console, the CLI, or by using the
 * PutMetricAlarm API, CloudWatch creates the necessary service-linked role for you. The service-linked roles are called
 * <code>AWSServiceRoleForCloudWatchEvents</code> and <code>AWSServiceRoleForCloudWatchAlarms_ActionSSM</code>. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html#iam-term-service-linked-role">Amazon
 * Web Services service-linked
 *
 * role</a>>
 *
 * <b>Cross-account alarms</b>
 *
 * </p
 *
 * You can set an alarm on metrics in the current account, or in another account. To create a cross-account alarm that
 * watches a metric in a different account, you must have completed the following
 *
 * pre-requisites> <ul> <li>
 *
 * The account where the metrics are located (the <i>sharing account</i>) must already have a sharing role named
 * <b>CloudWatch-CrossAccountSharingRole</b>. If it does not already have this role, you must create it using the
 * instructions in <b>Set up a sharing account</b> in <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Cross-Account-Cross-Region.html#enable-cross-account-cross-Region">
 * Cross-account cross-Region CloudWatch console</a>. The policy for that role must grant access to the ID of the account
 * where you are creating the alarm.
 *
 * </p </li> <li>
 *
 * The account where you are creating the alarm (the <i>monitoring account</i>) must already have a service-linked role
 * named <b>AWSServiceRoleForCloudWatchCrossAccount</b> to allow CloudWatch to assume the sharing role in the sharing
 * account. If it does not, you must create it following the directions in <b>Set up a monitoring account</b> in <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Cross-Account-Cross-Region.html#enable-cross-account-cross-Region">
 * Cross-account cross-Region CloudWatch
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
 * fifteen minutes for the metric to appear in calls to <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>>
 *
 * You can publish either individual data points in the <code>Value</code> field, or arrays of values and the number of
 * times each value occurred during the period by using the <code>Values</code> and <code>Counts</code> fields in the
 * <code>MetricDatum</code> structure. Using the <code>Values</code> and <code>Counts</code> method enables you to publish
 * up to 150 values per metric with one <code>PutMetricData</code> request, and supports retrieving percentile statistics
 * on this
 *
 * data>
 *
 * Each <code>PutMetricData</code> request is limited to 1 MB in size for HTTP POST requests. You can send a payload
 * compressed by gzip. Each request is also limited to no more than 1000 different
 *
 * metrics>
 *
 * Although the <code>Value</code> parameter accepts numbers of type <code>Double</code>, CloudWatch rejects values that
 * are either too small or too large. Values must be in the range of -2^360 to 2^360. In addition, special values (for
 * example, NaN, +Infinity, -Infinity) are not
 *
 * supported>
 *
 * You can use up to 30 dimensions per metric to further clarify what data the metric collects. Each dimension consists of
 * a Name and Value pair. For more information about specifying dimensions, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html">Publishing Metrics</a> in
 * the <i>Amazon CloudWatch User
 *
 * Guide</i>>
 *
 * You specify the time stamp to be associated with each data point. You can specify time stamps that are as much as two
 * weeks before the current date, and as much as 2 hours after the current day and
 *
 * time>
 *
 * Data points with time stamps from 24 hours ago or longer can take at least 48 hours to become available for <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a> or <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>
 * from the time they are submitted. Data points with time stamps between 3 and 24 hours ago can take as much as 2 hours to
 * become available for for <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricData.html">GetMetricData</a> or <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetMetricStatistics.html">GetMetricStatistics</a>>
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
 * PutMetricStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a metric stream. Metric streams can automatically stream CloudWatch metrics to Amazon Web Services
 * destinations including Amazon S3 and to many third-party
 *
 * solutions>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Metric-Streams.html"> Using Metric
 *
 * Streams</a>>
 *
 * To create a metric stream, you must be logged on to an account that has the <code>iam:PassRole</code> permission and
 * either the <code>CloudWatchFullAccess</code> policy or the <code>cloudwatch:PutMetricStream</code>
 *
 * permission>
 *
 * When you create or update a metric stream, you choose one of the
 *
 * following> <ul> <li>
 *
 * Stream metrics from all metric namespaces in the
 *
 * account> </li> <li>
 *
 * Stream metrics from all metric namespaces in the account, except for the namespaces that you list in
 *
 * <code>ExcludeFilters</code>> </li> <li>
 *
 * Stream metrics from only the metric namespaces that you list in
 *
 * <code>IncludeFilters</code>> </li> </ul>
 *
 * By default, a metric stream always sends the <code>MAX</code>, <code>MIN</code>, <code>SUM</code>, and
 * <code>SAMPLECOUNT</code> statistics for each metric that is streamed. You can use the
 * <code>StatisticsConfigurations</code> parameter to have the metric stream also send additional statistics in the stream.
 * Streaming additional statistics incurs additional costs. For more information, see <a
 * href="https://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch Pricing</a>.
 *
 * </p
 *
 * When you use <code>PutMetricStream</code> to create a new metric stream, the stream is created in the
 * <code>running</code> state. If you use it to update an existing stream, the state of the stream is not
 */
PutMetricStreamResponse * CloudWatchClient::putMetricStream(const PutMetricStreamRequest &request)
{
    return qobject_cast<PutMetricStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * SetAlarmStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Temporarily sets the state of an alarm for testing purposes. When the updated state differs from the previous value, the
 * action configured for the appropriate state is invoked. For example, if your alarm is configured to send an Amazon SNS
 * message when an alarm is triggered, temporarily changing the alarm state to <code>ALARM</code> sends an SNS
 *
 * message>
 *
 * Metric alarms returns to their actual state quickly, often within seconds. Because the metric alarm state change happens
 * quickly, it is typically only visible in the alarm's <b>History</b> tab in the Amazon CloudWatch console or through <a
 *
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeAlarmHistory.html">DescribeAlarmHistory</a>>
 *
 * If you use <code>SetAlarmState</code> on a composite alarm, the composite alarm is not guaranteed to return to its
 * actual state. It returns to its actual state only once any of its children alarms change state. It is also reevaluated
 * if you update its
 *
 * configuration>
 *
 * If an alarm triggers EC2 Auto Scaling policies or application Auto Scaling policies, you must include information in the
 * <code>StateReasonData</code> parameter to enable the policy to take the correct
 */
SetAlarmStateResponse * CloudWatchClient::setAlarmState(const SetAlarmStateRequest &request)
{
    return qobject_cast<SetAlarmStateResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * StartMetricStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the streaming of metrics for one or more of your metric
 */
StartMetricStreamsResponse * CloudWatchClient::startMetricStreams(const StartMetricStreamsRequest &request)
{
    return qobject_cast<StartMetricStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * StopMetricStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the streaming of metrics for one or more of your metric
 */
StopMetricStreamsResponse * CloudWatchClient::stopMetricStreams(const StopMetricStreamsRequest &request)
{
    return qobject_cast<StopMetricStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudWatchClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified CloudWatch resource. Currently, the only CloudWatch
 * resources that can be tagged are alarms and Contributor Insights
 *
 * rules>
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * Tags don't have any semantic meaning to Amazon Web Services and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with an alarm that already has tags. If you specify a new tag key for
 * the alarm, this tag is appended to the list of tags associated with the alarm. If you specify a tag key that is already
 * associated with the alarm, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a CloudWatch
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
