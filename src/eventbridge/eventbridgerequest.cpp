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

#include "eventbridgerequest.h"
#include "eventbridgerequest_p.h"

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::EventBridgeRequest
 * \brief The EventBridgeRequest class provides an interface for EventBridge requests.
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * \enum EventBridgeRequest::Action
 *
 * This enum describes the actions that can be performed as EventBridge
 * requests.
 *
 * \value ActivateEventSourceAction EventBridge ActivateEventSource action.
 * \value CancelReplayAction EventBridge CancelReplay action.
 * \value CreateApiDestinationAction EventBridge CreateApiDestination action.
 * \value CreateArchiveAction EventBridge CreateArchive action.
 * \value CreateConnectionAction EventBridge CreateConnection action.
 * \value CreateEventBusAction EventBridge CreateEventBus action.
 * \value CreatePartnerEventSourceAction EventBridge CreatePartnerEventSource action.
 * \value DeactivateEventSourceAction EventBridge DeactivateEventSource action.
 * \value DeauthorizeConnectionAction EventBridge DeauthorizeConnection action.
 * \value DeleteApiDestinationAction EventBridge DeleteApiDestination action.
 * \value DeleteArchiveAction EventBridge DeleteArchive action.
 * \value DeleteConnectionAction EventBridge DeleteConnection action.
 * \value DeleteEventBusAction EventBridge DeleteEventBus action.
 * \value DeletePartnerEventSourceAction EventBridge DeletePartnerEventSource action.
 * \value DeleteRuleAction EventBridge DeleteRule action.
 * \value DescribeApiDestinationAction EventBridge DescribeApiDestination action.
 * \value DescribeArchiveAction EventBridge DescribeArchive action.
 * \value DescribeConnectionAction EventBridge DescribeConnection action.
 * \value DescribeEventBusAction EventBridge DescribeEventBus action.
 * \value DescribeEventSourceAction EventBridge DescribeEventSource action.
 * \value DescribePartnerEventSourceAction EventBridge DescribePartnerEventSource action.
 * \value DescribeReplayAction EventBridge DescribeReplay action.
 * \value DescribeRuleAction EventBridge DescribeRule action.
 * \value DisableRuleAction EventBridge DisableRule action.
 * \value EnableRuleAction EventBridge EnableRule action.
 * \value ListApiDestinationsAction EventBridge ListApiDestinations action.
 * \value ListArchivesAction EventBridge ListArchives action.
 * \value ListConnectionsAction EventBridge ListConnections action.
 * \value ListEventBusesAction EventBridge ListEventBuses action.
 * \value ListEventSourcesAction EventBridge ListEventSources action.
 * \value ListPartnerEventSourceAccountsAction EventBridge ListPartnerEventSourceAccounts action.
 * \value ListPartnerEventSourcesAction EventBridge ListPartnerEventSources action.
 * \value ListReplaysAction EventBridge ListReplays action.
 * \value ListRuleNamesByTargetAction EventBridge ListRuleNamesByTarget action.
 * \value ListRulesAction EventBridge ListRules action.
 * \value ListTagsForResourceAction EventBridge ListTagsForResource action.
 * \value ListTargetsByRuleAction EventBridge ListTargetsByRule action.
 * \value PutEventsAction EventBridge PutEvents action.
 * \value PutPartnerEventsAction EventBridge PutPartnerEvents action.
 * \value PutPermissionAction EventBridge PutPermission action.
 * \value PutRuleAction EventBridge PutRule action.
 * \value PutTargetsAction EventBridge PutTargets action.
 * \value RemovePermissionAction EventBridge RemovePermission action.
 * \value RemoveTargetsAction EventBridge RemoveTargets action.
 * \value StartReplayAction EventBridge StartReplay action.
 * \value TagResourceAction EventBridge TagResource action.
 * \value TestEventPatternAction EventBridge TestEventPattern action.
 * \value UntagResourceAction EventBridge UntagResource action.
 * \value UpdateApiDestinationAction EventBridge UpdateApiDestination action.
 * \value UpdateArchiveAction EventBridge UpdateArchive action.
 * \value UpdateConnectionAction EventBridge UpdateConnection action.
 */

/*!
 * Constructs a EventBridgeRequest object for EventBridge \a action.
 */
EventBridgeRequest::EventBridgeRequest(const Action action)
    : d_ptr(new EventBridgeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EventBridgeRequest::EventBridgeRequest(const EventBridgeRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new EventBridgeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EventBridgeRequest object to be equal to \a other.
 */
EventBridgeRequest& EventBridgeRequest::operator=(const EventBridgeRequest &other)
{
    Q_D(EventBridgeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EventBridgeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EventBridgeRequestPrivate.
 */
EventBridgeRequest::EventBridgeRequest(EventBridgeRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the EventBridge action to be performed by this request.
 */
EventBridgeRequest::Action EventBridgeRequest::action() const
{
    Q_D(const EventBridgeRequest);
    return d->action;
}

/*!
 * Returns the name of the EventBridge action to be performed by this request.
 */
QString EventBridgeRequest::actionString() const
{
    return EventBridgeRequestPrivate::toString(action());
}

/*!
 * Returns the EventBridge API version implemented by this request.
 */
QString EventBridgeRequest::apiVersion() const
{
    Q_D(const EventBridgeRequest);
    return d->apiVersion;
}

/*!
 * Sets the EventBridge action to be performed by this request to \a action.
 */
void EventBridgeRequest::setAction(const Action action)
{
    Q_D(EventBridgeRequest);
    d->action = action;
}

/*!
 * Sets the EventBridge API version to include in this request to \a version.
 */
void EventBridgeRequest::setApiVersion(const QString &version)
{
    Q_D(EventBridgeRequest);
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
bool EventBridgeRequest::operator==(const EventBridgeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EventBridge queue name.
 *
 * @par From EventBridge FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EventBridge queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EventBridgeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EventBridgeRequest::clearParameter(const QString &name)
{
    Q_D(EventBridgeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EventBridgeRequest::clearParameters()
{
    Q_D(EventBridgeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EventBridgeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EventBridgeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EventBridgeRequest::parameters() const
{
    Q_D(const EventBridgeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EventBridgeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EventBridgeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EventBridgeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EventBridgeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EventBridge request using the given
 * \a endpoint.
 *
 * This EventBridge implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EventBridgeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EventBridgeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EventBridge::EventBridgeRequestPrivate
 * \brief The EventBridgeRequestPrivate class provides private implementation for EventBridgeRequest.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a EventBridgeRequestPrivate object for EventBridge \a action,
 * with public implementation \a q.
 */
EventBridgeRequestPrivate::EventBridgeRequestPrivate(const EventBridgeRequest::Action action, EventBridgeRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EventBridgeRequest class's copy constructor.
 */
EventBridgeRequestPrivate::EventBridgeRequestPrivate(const EventBridgeRequestPrivate &other,
                                     EventBridgeRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EventBridgeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EventBridge service's Action
 * query parameters.
 */
QString EventBridgeRequestPrivate::toString(const EventBridgeRequest::Action &action)
{
    #define ActionToString(action) \
        case EventBridgeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EventBridge
} // namespace QtAws
