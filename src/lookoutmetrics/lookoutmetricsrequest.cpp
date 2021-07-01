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

#include "lookoutmetricsrequest.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::LookoutMetricsRequest
 * \brief The LookoutMetricsRequest class provides an interface for LookoutMetrics requests.
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * \enum LookoutMetricsRequest::Action
 *
 * This enum describes the actions that can be performed as LookoutMetrics
 * requests.
 *
 * \value ActivateAnomalyDetectorAction LookoutMetrics ActivateAnomalyDetector action.
 * \value BackTestAnomalyDetectorAction LookoutMetrics BackTestAnomalyDetector action.
 * \value CreateAlertAction LookoutMetrics CreateAlert action.
 * \value CreateAnomalyDetectorAction LookoutMetrics CreateAnomalyDetector action.
 * \value CreateMetricSetAction LookoutMetrics CreateMetricSet action.
 * \value DeleteAlertAction LookoutMetrics DeleteAlert action.
 * \value DeleteAnomalyDetectorAction LookoutMetrics DeleteAnomalyDetector action.
 * \value DescribeAlertAction LookoutMetrics DescribeAlert action.
 * \value DescribeAnomalyDetectionExecutionsAction LookoutMetrics DescribeAnomalyDetectionExecutions action.
 * \value DescribeAnomalyDetectorAction LookoutMetrics DescribeAnomalyDetector action.
 * \value DescribeMetricSetAction LookoutMetrics DescribeMetricSet action.
 * \value GetAnomalyGroupAction LookoutMetrics GetAnomalyGroup action.
 * \value GetFeedbackAction LookoutMetrics GetFeedback action.
 * \value GetSampleDataAction LookoutMetrics GetSampleData action.
 * \value ListAlertsAction LookoutMetrics ListAlerts action.
 * \value ListAnomalyDetectorsAction LookoutMetrics ListAnomalyDetectors action.
 * \value ListAnomalyGroupSummariesAction LookoutMetrics ListAnomalyGroupSummaries action.
 * \value ListAnomalyGroupTimeSeriesAction LookoutMetrics ListAnomalyGroupTimeSeries action.
 * \value ListMetricSetsAction LookoutMetrics ListMetricSets action.
 * \value ListTagsForResourceAction LookoutMetrics ListTagsForResource action.
 * \value PutFeedbackAction LookoutMetrics PutFeedback action.
 * \value TagResourceAction LookoutMetrics TagResource action.
 * \value UntagResourceAction LookoutMetrics UntagResource action.
 * \value UpdateAnomalyDetectorAction LookoutMetrics UpdateAnomalyDetector action.
 * \value UpdateMetricSetAction LookoutMetrics UpdateMetricSet action.
 */

/*!
 * Constructs a LookoutMetricsRequest object for LookoutMetrics \a action.
 */
LookoutMetricsRequest::LookoutMetricsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LookoutMetricsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LookoutMetricsRequest::LookoutMetricsRequest(const LookoutMetricsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LookoutMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LookoutMetricsRequest object to be equal to \a other.
 */
LookoutMetricsRequest& LookoutMetricsRequest::operator=(const LookoutMetricsRequest &other)
{
    Q_D(LookoutMetricsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LookoutMetricsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutMetricsRequestPrivate.
 */
LookoutMetricsRequest::LookoutMetricsRequest(LookoutMetricsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LookoutMetrics action to be performed by this request.
 */
LookoutMetricsRequest::Action LookoutMetricsRequest::action() const
{
    Q_D(const LookoutMetricsRequest);
    return d->action;
}

/*!
 * Returns the name of the LookoutMetrics action to be performed by this request.
 */
QString LookoutMetricsRequest::actionString() const
{
    return LookoutMetricsRequestPrivate::toString(action());
}

/*!
 * Returns the LookoutMetrics API version implemented by this request.
 */
QString LookoutMetricsRequest::apiVersion() const
{
    Q_D(const LookoutMetricsRequest);
    return d->apiVersion;
}

/*!
 * Sets the LookoutMetrics action to be performed by this request to \a action.
 */
void LookoutMetricsRequest::setAction(const Action action)
{
    Q_D(LookoutMetricsRequest);
    d->action = action;
}

/*!
 * Sets the LookoutMetrics API version to include in this request to \a version.
 */
void LookoutMetricsRequest::setApiVersion(const QString &version)
{
    Q_D(LookoutMetricsRequest);
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
bool LookoutMetricsRequest::operator==(const LookoutMetricsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LookoutMetrics queue name.
 *
 * @par From LookoutMetrics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LookoutMetrics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LookoutMetricsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LookoutMetricsRequest::clearParameter(const QString &name)
{
    Q_D(LookoutMetricsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LookoutMetricsRequest::clearParameters()
{
    Q_D(LookoutMetricsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LookoutMetricsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LookoutMetricsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LookoutMetricsRequest::parameters() const
{
    Q_D(const LookoutMetricsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LookoutMetricsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LookoutMetricsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LookoutMetricsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LookoutMetricsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LookoutMetrics request using the given
 * \a endpoint.
 *
 * This LookoutMetrics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LookoutMetricsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LookoutMetricsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LookoutMetrics::LookoutMetricsRequestPrivate
 * \brief The LookoutMetricsRequestPrivate class provides private implementation for LookoutMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a LookoutMetricsRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
LookoutMetricsRequestPrivate::LookoutMetricsRequestPrivate(const LookoutMetricsRequest::Action action, LookoutMetricsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LookoutMetricsRequest class's copy constructor.
 */
LookoutMetricsRequestPrivate::LookoutMetricsRequestPrivate(const LookoutMetricsRequestPrivate &other,
                                     LookoutMetricsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LookoutMetricsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LookoutMetrics service's Action
 * query parameters.
 */
QString LookoutMetricsRequestPrivate::toString(const LookoutMetricsRequest::Action &action)
{
    #define ActionToString(action) \
        case LookoutMetricsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ActivateAnomalyDetector);
        ActionToString(BackTestAnomalyDetector);
        ActionToString(CreateAlert);
        ActionToString(CreateAnomalyDetector);
        ActionToString(CreateMetricSet);
        ActionToString(DeleteAlert);
        ActionToString(DeleteAnomalyDetector);
        ActionToString(DescribeAlert);
        ActionToString(DescribeAnomalyDetectionExecutions);
        ActionToString(DescribeAnomalyDetector);
        ActionToString(DescribeMetricSet);
        ActionToString(GetAnomalyGroup);
        ActionToString(GetFeedback);
        ActionToString(GetSampleData);
        ActionToString(ListAlerts);
        ActionToString(ListAnomalyDetectors);
        ActionToString(ListAnomalyGroupSummaries);
        ActionToString(ListAnomalyGroupTimeSeries);
        ActionToString(ListMetricSets);
        ActionToString(ListTagsForResource);
        ActionToString(PutFeedback);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAnomalyDetector);
        ActionToString(UpdateMetricSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LookoutMetrics
} // namespace QtAws
