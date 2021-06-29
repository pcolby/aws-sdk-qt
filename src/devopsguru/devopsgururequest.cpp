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

#include "devopsgururequest.h"
#include "devopsgururequest_p.h"

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::DevOpsGuruRequest
 * \brief The DevOpsGuruRequest class provides an interface for DevOpsGuru requests.
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * \enum DevOpsGuruRequest::Action
 *
 * This enum describes the actions that can be performed as DevOpsGuru
 * requests.
 *
 * \value AddNotificationChannelAction DevOpsGuru AddNotificationChannel action.
 * \value DescribeAccountHealthAction DevOpsGuru DescribeAccountHealth action.
 * \value DescribeAccountOverviewAction DevOpsGuru DescribeAccountOverview action.
 * \value DescribeAnomalyAction DevOpsGuru DescribeAnomaly action.
 * \value DescribeFeedbackAction DevOpsGuru DescribeFeedback action.
 * \value DescribeInsightAction DevOpsGuru DescribeInsight action.
 * \value DescribeResourceCollectionHealthAction DevOpsGuru DescribeResourceCollectionHealth action.
 * \value DescribeServiceIntegrationAction DevOpsGuru DescribeServiceIntegration action.
 * \value GetCostEstimationAction DevOpsGuru GetCostEstimation action.
 * \value GetResourceCollectionAction DevOpsGuru GetResourceCollection action.
 * \value ListAnomaliesForInsightAction DevOpsGuru ListAnomaliesForInsight action.
 * \value ListEventsAction DevOpsGuru ListEvents action.
 * \value ListInsightsAction DevOpsGuru ListInsights action.
 * \value ListNotificationChannelsAction DevOpsGuru ListNotificationChannels action.
 * \value ListRecommendationsAction DevOpsGuru ListRecommendations action.
 * \value PutFeedbackAction DevOpsGuru PutFeedback action.
 * \value RemoveNotificationChannelAction DevOpsGuru RemoveNotificationChannel action.
 * \value SearchInsightsAction DevOpsGuru SearchInsights action.
 * \value StartCostEstimationAction DevOpsGuru StartCostEstimation action.
 * \value UpdateResourceCollectionAction DevOpsGuru UpdateResourceCollection action.
 * \value UpdateServiceIntegrationAction DevOpsGuru UpdateServiceIntegration action.
 */

/*!
 * Constructs a DevOpsGuruRequest object for DevOpsGuru \a action.
 */
DevOpsGuruRequest::DevOpsGuruRequest(const Action action)
    : d_ptr(new DevOpsGuruRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DevOpsGuruRequest::DevOpsGuruRequest(const DevOpsGuruRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DevOpsGuruRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DevOpsGuruRequest object to be equal to \a other.
 */
DevOpsGuruRequest& DevOpsGuruRequest::operator=(const DevOpsGuruRequest &other)
{
    Q_D(DevOpsGuruRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DevOpsGuruRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DevOpsGuruRequestPrivate.
 */
DevOpsGuruRequest::DevOpsGuruRequest(DevOpsGuruRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the DevOpsGuru action to be performed by this request.
 */
DevOpsGuruRequest::Action DevOpsGuruRequest::action() const
{
    Q_D(const DevOpsGuruRequest);
    return d->action;
}

/*!
 * Returns the name of the DevOpsGuru action to be performed by this request.
 */
QString DevOpsGuruRequest::actionString() const
{
    return DevOpsGuruRequestPrivate::toString(action());
}

/*!
 * Returns the DevOpsGuru API version implemented by this request.
 */
QString DevOpsGuruRequest::apiVersion() const
{
    Q_D(const DevOpsGuruRequest);
    return d->apiVersion;
}

/*!
 * Sets the DevOpsGuru action to be performed by this request to \a action.
 */
void DevOpsGuruRequest::setAction(const Action action)
{
    Q_D(DevOpsGuruRequest);
    d->action = action;
}

/*!
 * Sets the DevOpsGuru API version to include in this request to \a version.
 */
void DevOpsGuruRequest::setApiVersion(const QString &version)
{
    Q_D(DevOpsGuruRequest);
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
bool DevOpsGuruRequest::operator==(const DevOpsGuruRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DevOpsGuru queue name.
 *
 * @par From DevOpsGuru FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DevOpsGuru queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DevOpsGuruRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DevOpsGuruRequest::clearParameter(const QString &name)
{
    Q_D(DevOpsGuruRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DevOpsGuruRequest::clearParameters()
{
    Q_D(DevOpsGuruRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DevOpsGuruRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DevOpsGuruRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DevOpsGuruRequest::parameters() const
{
    Q_D(const DevOpsGuruRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DevOpsGuruRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DevOpsGuruRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DevOpsGuruRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DevOpsGuruRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DevOpsGuru request using the given
 * \a endpoint.
 *
 * This DevOpsGuru implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DevOpsGuruRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DevOpsGuruRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DevOpsGuru::DevOpsGuruRequestPrivate
 * \brief The DevOpsGuruRequestPrivate class provides private implementation for DevOpsGuruRequest.
 * \internal
 *
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DevOpsGuruRequestPrivate object for DevOpsGuru \a action,
 * with public implementation \a q.
 */
DevOpsGuruRequestPrivate::DevOpsGuruRequestPrivate(const DevOpsGuruRequest::Action action, DevOpsGuruRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DevOpsGuruRequest class's copy constructor.
 */
DevOpsGuruRequestPrivate::DevOpsGuruRequestPrivate(const DevOpsGuruRequestPrivate &other,
                                     DevOpsGuruRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DevOpsGuruRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DevOpsGuru service's Action
 * query parameters.
 */
QString DevOpsGuruRequestPrivate::toString(const DevOpsGuruRequest::Action &action)
{
    #define ActionToString(action) \
        case DevOpsGuruRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddNotificationChannel);
        ActionToString(DescribeAccountHealth);
        ActionToString(DescribeAccountOverview);
        ActionToString(DescribeAnomaly);
        ActionToString(DescribeFeedback);
        ActionToString(DescribeInsight);
        ActionToString(DescribeResourceCollectionHealth);
        ActionToString(DescribeServiceIntegration);
        ActionToString(GetCostEstimation);
        ActionToString(GetResourceCollection);
        ActionToString(ListAnomaliesForInsight);
        ActionToString(ListEvents);
        ActionToString(ListInsights);
        ActionToString(ListNotificationChannels);
        ActionToString(ListRecommendations);
        ActionToString(PutFeedback);
        ActionToString(RemoveNotificationChannel);
        ActionToString(SearchInsights);
        ActionToString(StartCostEstimation);
        ActionToString(UpdateResourceCollection);
        ActionToString(UpdateServiceIntegration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DevOpsGuru
} // namespace QtAws
