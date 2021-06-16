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

#include "applicationautoscalingrequest.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingRequest
 * \brief The ApplicationAutoScalingRequest class provides an interface for ApplicationAutoScaling requests.
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * \enum ApplicationAutoScalingRequest::Action
 *
 * This enum describes the actions that can be performed as ApplicationAutoScaling
 * requests.
 *
 * \value DeleteScalingPolicyAction ApplicationAutoScaling DeleteScalingPolicy action.
 * \value DeleteScheduledActionAction ApplicationAutoScaling DeleteScheduledAction action.
 * \value DeregisterScalableTargetAction ApplicationAutoScaling DeregisterScalableTarget action.
 * \value DescribeScalableTargetsAction ApplicationAutoScaling DescribeScalableTargets action.
 * \value DescribeScalingActivitiesAction ApplicationAutoScaling DescribeScalingActivities action.
 * \value DescribeScalingPoliciesAction ApplicationAutoScaling DescribeScalingPolicies action.
 * \value DescribeScheduledActionsAction ApplicationAutoScaling DescribeScheduledActions action.
 * \value PutScalingPolicyAction ApplicationAutoScaling PutScalingPolicy action.
 * \value PutScheduledActionAction ApplicationAutoScaling PutScheduledAction action.
 * \value RegisterScalableTargetAction ApplicationAutoScaling RegisterScalableTarget action.
 */

/*!
 * Constructs a ApplicationAutoScalingRequest object for ApplicationAutoScaling \a action.
 */
ApplicationAutoScalingRequest::ApplicationAutoScalingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ApplicationAutoScalingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApplicationAutoScalingRequest::ApplicationAutoScalingRequest(const ApplicationAutoScalingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ApplicationAutoScalingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApplicationAutoScalingRequest object to be equal to \a other.
 */
ApplicationAutoScalingRequest& ApplicationAutoScalingRequest::operator=(const ApplicationAutoScalingRequest &other)
{
    Q_D(ApplicationAutoScalingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApplicationAutoScalingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationAutoScalingRequestPrivate.
 */
ApplicationAutoScalingRequest::ApplicationAutoScalingRequest(ApplicationAutoScalingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ApplicationAutoScaling action to be performed by this request.
 */
ApplicationAutoScalingRequest::Action ApplicationAutoScalingRequest::action() const
{
    Q_D(const ApplicationAutoScalingRequest);
    return d->action;
}

/*!
 * Returns the name of the ApplicationAutoScaling action to be performed by this request.
 */
QString ApplicationAutoScalingRequest::actionString() const
{
    return ApplicationAutoScalingRequestPrivate::toString(action());
}

/*!
 * Returns the ApplicationAutoScaling API version implemented by this request.
 */
QString ApplicationAutoScalingRequest::apiVersion() const
{
    Q_D(const ApplicationAutoScalingRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApplicationAutoScaling action to be performed by this request to \a action.
 */
void ApplicationAutoScalingRequest::setAction(const Action action)
{
    Q_D(ApplicationAutoScalingRequest);
    d->action = action;
}

/*!
 * Sets the ApplicationAutoScaling API version to include in this request to \a version.
 */
void ApplicationAutoScalingRequest::setApiVersion(const QString &version)
{
    Q_D(ApplicationAutoScalingRequest);
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
bool ApplicationAutoScalingRequest::operator==(const ApplicationAutoScalingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApplicationAutoScaling queue name.
 *
 * @par From ApplicationAutoScaling FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApplicationAutoScaling queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApplicationAutoScalingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApplicationAutoScalingRequest::clearParameter(const QString &name)
{
    Q_D(ApplicationAutoScalingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApplicationAutoScalingRequest::clearParameters()
{
    Q_D(ApplicationAutoScalingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApplicationAutoScalingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApplicationAutoScalingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApplicationAutoScalingRequest::parameters() const
{
    Q_D(const ApplicationAutoScalingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApplicationAutoScalingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApplicationAutoScalingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApplicationAutoScalingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApplicationAutoScalingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApplicationAutoScaling request using the given
 * \a endpoint.
 *
 * This ApplicationAutoScaling implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApplicationAutoScalingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApplicationAutoScalingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingRequestPrivate
 * \brief The ApplicationAutoScalingRequestPrivate class provides private implementation for ApplicationAutoScalingRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingRequestPrivate object for ApplicationAutoScaling \a action,
 * with public implementation \a q.
 */
ApplicationAutoScalingRequestPrivate::ApplicationAutoScalingRequestPrivate(const ApplicationAutoScalingRequest::Action action, ApplicationAutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApplicationAutoScalingRequest class's copy constructor.
 */
ApplicationAutoScalingRequestPrivate::ApplicationAutoScalingRequestPrivate(const ApplicationAutoScalingRequestPrivate &other,
                                     ApplicationAutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApplicationAutoScalingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApplicationAutoScaling service's Action
 * query parameters.
 */
QString ApplicationAutoScalingRequestPrivate::toString(const ApplicationAutoScalingRequest::Action &action)
{
    #define ActionToString(action) \
        case ApplicationAutoScalingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
