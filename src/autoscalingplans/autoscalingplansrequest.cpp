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

#include "autoscalingplansrequest.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansRequest
 * \brief The AutoScalingPlansRequest class provides an interface for AutoScalingPlans requests.
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * \enum AutoScalingPlansRequest::Action
 *
 * This enum describes the actions that can be performed as AutoScalingPlans
 * requests.
 *
 * \value CreateScalingPlanAction AutoScalingPlans CreateScalingPlan action.
 * \value DeleteScalingPlanAction AutoScalingPlans DeleteScalingPlan action.
 * \value DescribeScalingPlanResourcesAction AutoScalingPlans DescribeScalingPlanResources action.
 * \value DescribeScalingPlansAction AutoScalingPlans DescribeScalingPlans action.
 * \value GetScalingPlanResourceForecastDataAction AutoScalingPlans GetScalingPlanResourceForecastData action.
 * \value UpdateScalingPlanAction AutoScalingPlans UpdateScalingPlan action.
 */

/*!
 * Constructs a AutoScalingPlansRequest object for AutoScalingPlans \a action.
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingPlansRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(const AutoScalingPlansRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AutoScalingPlansRequest object to be equal to \a other.
 */
AutoScalingPlansRequest& AutoScalingPlansRequest::operator=(const AutoScalingPlansRequest &other)
{
    Q_D(AutoScalingPlansRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AutoScalingPlansRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingPlansRequestPrivate.
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(AutoScalingPlansRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AutoScalingPlans action to be performed by this request.
 */
AutoScalingPlansRequest::Action AutoScalingPlansRequest::action() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->action;
}

/*!
 * Returns the name of the AutoScalingPlans action to be performed by this request.
 */
QString AutoScalingPlansRequest::actionString() const
{
    return AutoScalingPlansRequestPrivate::toString(action());
}

/*!
 * Returns the AutoScalingPlans API version implemented by this request.
 */
QString AutoScalingPlansRequest::apiVersion() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->apiVersion;
}

/*!
 * Sets the AutoScalingPlans action to be performed by this request to \a action.
 */
void AutoScalingPlansRequest::setAction(const Action action)
{
    Q_D(AutoScalingPlansRequest);
    d->action = action;
}

/*!
 * Sets the AutoScalingPlans API version to include in this request to \a version.
 */
void AutoScalingPlansRequest::setApiVersion(const QString &version)
{
    Q_D(AutoScalingPlansRequest);
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
bool AutoScalingPlansRequest::operator==(const AutoScalingPlansRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AutoScalingPlans queue name.
 *
 * @par From AutoScalingPlans FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AutoScalingPlans queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AutoScalingPlansRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AutoScalingPlansRequest::clearParameter(const QString &name)
{
    Q_D(AutoScalingPlansRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AutoScalingPlansRequest::clearParameters()
{
    Q_D(AutoScalingPlansRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AutoScalingPlansRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AutoScalingPlansRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AutoScalingPlansRequest::parameters() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AutoScalingPlansRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AutoScalingPlansRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AutoScalingPlansRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AutoScalingPlansRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AutoScalingPlans request using the given
 * \a endpoint.
 *
 * This AutoScalingPlans implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AutoScalingPlansRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AutoScalingPlansRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AutoScalingPlans::AutoScalingPlansRequestPrivate
 * \brief The AutoScalingPlansRequestPrivate class provides private implementation for AutoScalingPlansRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a AutoScalingPlansRequestPrivate object for AutoScalingPlans \a action,
 * with public implementation \a q.
 */
AutoScalingPlansRequestPrivate::AutoScalingPlansRequestPrivate(const AutoScalingPlansRequest::Action action, AutoScalingPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AutoScalingPlansRequest class's copy constructor.
 */
AutoScalingPlansRequestPrivate::AutoScalingPlansRequestPrivate(const AutoScalingPlansRequestPrivate &other,
                                     AutoScalingPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AutoScalingPlansRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AutoScalingPlans service's Action
 * query parameters.
 */
QString AutoScalingPlansRequestPrivate::toString(const AutoScalingPlansRequest::Action &action)
{
    #define ActionToString(action) \
        case AutoScalingPlansRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateScalingPlan);
        ActionToString(DeleteScalingPlan);
        ActionToString(DescribeScalingPlanResources);
        ActionToString(DescribeScalingPlans);
        ActionToString(GetScalingPlanResourceForecastData);
        ActionToString(UpdateScalingPlan);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AutoScalingPlans
} // namespace QtAws
