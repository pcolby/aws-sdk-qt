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

#include "cloudwatchrequest.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::CloudWatchRequest
 * \brief The CloudWatchRequest class provides an interface for CloudWatch requests.
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * \enum CloudWatchRequest::Action
 *
 * This enum describes the actions that can be performed as CloudWatch
 * requests.
 *
 * \value DeleteAlarmsAction CloudWatch DeleteAlarms action.
 * \value DeleteAnomalyDetectorAction CloudWatch DeleteAnomalyDetector action.
 * \value DeleteDashboardsAction CloudWatch DeleteDashboards action.
 * \value DeleteInsightRulesAction CloudWatch DeleteInsightRules action.
 * \value DeleteMetricStreamAction CloudWatch DeleteMetricStream action.
 * \value DescribeAlarmHistoryAction CloudWatch DescribeAlarmHistory action.
 * \value DescribeAlarmsAction CloudWatch DescribeAlarms action.
 * \value DescribeAlarmsForMetricAction CloudWatch DescribeAlarmsForMetric action.
 * \value DescribeAnomalyDetectorsAction CloudWatch DescribeAnomalyDetectors action.
 * \value DescribeInsightRulesAction CloudWatch DescribeInsightRules action.
 * \value DisableAlarmActionsAction CloudWatch DisableAlarmActions action.
 * \value DisableInsightRulesAction CloudWatch DisableInsightRules action.
 * \value EnableAlarmActionsAction CloudWatch EnableAlarmActions action.
 * \value EnableInsightRulesAction CloudWatch EnableInsightRules action.
 * \value GetDashboardAction CloudWatch GetDashboard action.
 * \value GetInsightRuleReportAction CloudWatch GetInsightRuleReport action.
 * \value GetMetricDataAction CloudWatch GetMetricData action.
 * \value GetMetricStatisticsAction CloudWatch GetMetricStatistics action.
 * \value GetMetricStreamAction CloudWatch GetMetricStream action.
 * \value GetMetricWidgetImageAction CloudWatch GetMetricWidgetImage action.
 * \value ListDashboardsAction CloudWatch ListDashboards action.
 * \value ListMetricStreamsAction CloudWatch ListMetricStreams action.
 * \value ListMetricsAction CloudWatch ListMetrics action.
 * \value ListTagsForResourceAction CloudWatch ListTagsForResource action.
 * \value PutAnomalyDetectorAction CloudWatch PutAnomalyDetector action.
 * \value PutCompositeAlarmAction CloudWatch PutCompositeAlarm action.
 * \value PutDashboardAction CloudWatch PutDashboard action.
 * \value PutInsightRuleAction CloudWatch PutInsightRule action.
 * \value PutMetricAlarmAction CloudWatch PutMetricAlarm action.
 * \value PutMetricDataAction CloudWatch PutMetricData action.
 * \value PutMetricStreamAction CloudWatch PutMetricStream action.
 * \value SetAlarmStateAction CloudWatch SetAlarmState action.
 * \value StartMetricStreamsAction CloudWatch StartMetricStreams action.
 * \value StopMetricStreamsAction CloudWatch StopMetricStreams action.
 * \value TagResourceAction CloudWatch TagResource action.
 * \value UntagResourceAction CloudWatch UntagResource action.
 */

/*!
 * Constructs a CloudWatchRequest object for CloudWatch \a action.
 */
CloudWatchRequest::CloudWatchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudWatchRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudWatchRequest::CloudWatchRequest(const CloudWatchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudWatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudWatchRequest object to be equal to \a other.
 */
CloudWatchRequest& CloudWatchRequest::operator=(const CloudWatchRequest &other)
{
    Q_D(CloudWatchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudWatchRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchRequestPrivate.
 */
CloudWatchRequest::CloudWatchRequest(CloudWatchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudWatch action to be performed by this request.
 */
CloudWatchRequest::Action CloudWatchRequest::action() const
{
    Q_D(const CloudWatchRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudWatch action to be performed by this request.
 */
QString CloudWatchRequest::actionString() const
{
    return CloudWatchRequestPrivate::toString(action());
}

/*!
 * Returns the CloudWatch API version implemented by this request.
 */
QString CloudWatchRequest::apiVersion() const
{
    Q_D(const CloudWatchRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudWatch action to be performed by this request to \a action.
 */
void CloudWatchRequest::setAction(const Action action)
{
    Q_D(CloudWatchRequest);
    d->action = action;
}

/*!
 * Sets the CloudWatch API version to include in this request to \a version.
 */
void CloudWatchRequest::setApiVersion(const QString &version)
{
    Q_D(CloudWatchRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool CloudWatchRequest::operator==(const CloudWatchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudWatch queue name.
 *
 * @par From CloudWatch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudWatch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudWatchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudWatchRequest::clearParameter(const QString &name)
{
    Q_D(CloudWatchRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudWatchRequest::clearParameters()
{
    Q_D(CloudWatchRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudWatchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudWatchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudWatchRequest::parameters() const
{
    Q_D(const CloudWatchRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudWatchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudWatchRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudWatchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudWatchRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudWatch request using the given
 * \a endpoint.
 *
 * This CloudWatch implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudWatchRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudWatchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudWatch::CloudWatchRequestPrivate
 * \brief The CloudWatchRequestPrivate class provides private implementation for CloudWatchRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a CloudWatchRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
CloudWatchRequestPrivate::CloudWatchRequestPrivate(const CloudWatchRequest::Action action, CloudWatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudWatchRequest class's copy constructor.
 */
CloudWatchRequestPrivate::CloudWatchRequestPrivate(const CloudWatchRequestPrivate &other,
                                     CloudWatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudWatchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudWatch service's Action
 * query parameters.
 */
QString CloudWatchRequestPrivate::toString(const CloudWatchRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudWatchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteAlarms);
        ActionToString(DeleteAnomalyDetector);
        ActionToString(DeleteDashboards);
        ActionToString(DeleteInsightRules);
        ActionToString(DeleteMetricStream);
        ActionToString(DescribeAlarmHistory);
        ActionToString(DescribeAlarms);
        ActionToString(DescribeAlarmsForMetric);
        ActionToString(DescribeAnomalyDetectors);
        ActionToString(DescribeInsightRules);
        ActionToString(DisableAlarmActions);
        ActionToString(DisableInsightRules);
        ActionToString(EnableAlarmActions);
        ActionToString(EnableInsightRules);
        ActionToString(GetDashboard);
        ActionToString(GetInsightRuleReport);
        ActionToString(GetMetricData);
        ActionToString(GetMetricStatistics);
        ActionToString(GetMetricStream);
        ActionToString(GetMetricWidgetImage);
        ActionToString(ListDashboards);
        ActionToString(ListMetricStreams);
        ActionToString(ListMetrics);
        ActionToString(ListTagsForResource);
        ActionToString(PutAnomalyDetector);
        ActionToString(PutCompositeAlarm);
        ActionToString(PutDashboard);
        ActionToString(PutInsightRule);
        ActionToString(PutMetricAlarm);
        ActionToString(PutMetricData);
        ActionToString(PutMetricStream);
        ActionToString(SetAlarmState);
        ActionToString(StartMetricStreams);
        ActionToString(StopMetricStreams);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudWatch
} // namespace QtAws
