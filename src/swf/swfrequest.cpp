// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "swfrequest.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::SwfRequest
 * \brief The SwfRequest class provides an interface for Swf requests.
 *
 * \inmodule QtAwsSwf
 */

/*!
 * \enum SwfRequest::Action
 *
 * This enum describes the actions that can be performed as Swf
 * requests.
 *
 * \value CountClosedWorkflowExecutionsAction Swf CountClosedWorkflowExecutions action.
 * \value CountOpenWorkflowExecutionsAction Swf CountOpenWorkflowExecutions action.
 * \value CountPendingActivityTasksAction Swf CountPendingActivityTasks action.
 * \value CountPendingDecisionTasksAction Swf CountPendingDecisionTasks action.
 * \value DeprecateActivityTypeAction Swf DeprecateActivityType action.
 * \value DeprecateDomainAction Swf DeprecateDomain action.
 * \value DeprecateWorkflowTypeAction Swf DeprecateWorkflowType action.
 * \value DescribeActivityTypeAction Swf DescribeActivityType action.
 * \value DescribeDomainAction Swf DescribeDomain action.
 * \value DescribeWorkflowExecutionAction Swf DescribeWorkflowExecution action.
 * \value DescribeWorkflowTypeAction Swf DescribeWorkflowType action.
 * \value GetWorkflowExecutionHistoryAction Swf GetWorkflowExecutionHistory action.
 * \value ListActivityTypesAction Swf ListActivityTypes action.
 * \value ListClosedWorkflowExecutionsAction Swf ListClosedWorkflowExecutions action.
 * \value ListDomainsAction Swf ListDomains action.
 * \value ListOpenWorkflowExecutionsAction Swf ListOpenWorkflowExecutions action.
 * \value ListTagsForResourceAction Swf ListTagsForResource action.
 * \value ListWorkflowTypesAction Swf ListWorkflowTypes action.
 * \value PollForActivityTaskAction Swf PollForActivityTask action.
 * \value PollForDecisionTaskAction Swf PollForDecisionTask action.
 * \value RecordActivityTaskHeartbeatAction Swf RecordActivityTaskHeartbeat action.
 * \value RegisterActivityTypeAction Swf RegisterActivityType action.
 * \value RegisterDomainAction Swf RegisterDomain action.
 * \value RegisterWorkflowTypeAction Swf RegisterWorkflowType action.
 * \value RequestCancelWorkflowExecutionAction Swf RequestCancelWorkflowExecution action.
 * \value RespondActivityTaskCanceledAction Swf RespondActivityTaskCanceled action.
 * \value RespondActivityTaskCompletedAction Swf RespondActivityTaskCompleted action.
 * \value RespondActivityTaskFailedAction Swf RespondActivityTaskFailed action.
 * \value RespondDecisionTaskCompletedAction Swf RespondDecisionTaskCompleted action.
 * \value SignalWorkflowExecutionAction Swf SignalWorkflowExecution action.
 * \value StartWorkflowExecutionAction Swf StartWorkflowExecution action.
 * \value TagResourceAction Swf TagResource action.
 * \value TerminateWorkflowExecutionAction Swf TerminateWorkflowExecution action.
 * \value UndeprecateActivityTypeAction Swf UndeprecateActivityType action.
 * \value UndeprecateDomainAction Swf UndeprecateDomain action.
 * \value UndeprecateWorkflowTypeAction Swf UndeprecateWorkflowType action.
 * \value UntagResourceAction Swf UntagResource action.
 */

/*!
 * Constructs a SwfRequest object for Swf \a action.
 */
SwfRequest::SwfRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SwfRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SwfRequest::SwfRequest(const SwfRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SwfRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SwfRequest object to be equal to \a other.
 */
SwfRequest& SwfRequest::operator=(const SwfRequest &other)
{
    Q_D(SwfRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SwfRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SwfRequestPrivate.
 */
SwfRequest::SwfRequest(SwfRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Swf action to be performed by this request.
 */
SwfRequest::Action SwfRequest::action() const
{
    Q_D(const SwfRequest);
    return d->action;
}

/*!
 * Returns the name of the Swf action to be performed by this request.
 */
QString SwfRequest::actionString() const
{
    return SwfRequestPrivate::toString(action());
}

/*!
 * Returns the Swf API version implemented by this request.
 */
QString SwfRequest::apiVersion() const
{
    Q_D(const SwfRequest);
    return d->apiVersion;
}

/*!
 * Sets the Swf action to be performed by this request to \a action.
 */
void SwfRequest::setAction(const Action action)
{
    Q_D(SwfRequest);
    d->action = action;
}

/*!
 * Sets the Swf API version to include in this request to \a version.
 */
void SwfRequest::setApiVersion(const QString &version)
{
    Q_D(SwfRequest);
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
bool SwfRequest::operator==(const SwfRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Swf queue name.
 *
 * @par From Swf FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Swf queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SwfRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SwfRequest::clearParameter(const QString &name)
{
    Q_D(SwfRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SwfRequest::clearParameters()
{
    Q_D(SwfRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SwfRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SwfRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SwfRequest::parameters() const
{
    Q_D(const SwfRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SwfRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SwfRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SwfRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SwfRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Swf request using the given
 * \a endpoint.
 *
 * This Swf implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SwfRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SwfRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Swf::SwfRequestPrivate
 * \brief The SwfRequestPrivate class provides private implementation for SwfRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a SwfRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
SwfRequestPrivate::SwfRequestPrivate(const SwfRequest::Action action, SwfRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-01-25"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SwfRequest class's copy constructor.
 */
SwfRequestPrivate::SwfRequestPrivate(const SwfRequestPrivate &other,
                                     SwfRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SwfRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Swf service's Action
 * query parameters.
 */
QString SwfRequestPrivate::toString(const SwfRequest::Action &action)
{
    #define ActionToString(action) \
        case SwfRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CountClosedWorkflowExecutions);
        ActionToString(CountOpenWorkflowExecutions);
        ActionToString(CountPendingActivityTasks);
        ActionToString(CountPendingDecisionTasks);
        ActionToString(DeprecateActivityType);
        ActionToString(DeprecateDomain);
        ActionToString(DeprecateWorkflowType);
        ActionToString(DescribeActivityType);
        ActionToString(DescribeDomain);
        ActionToString(DescribeWorkflowExecution);
        ActionToString(DescribeWorkflowType);
        ActionToString(GetWorkflowExecutionHistory);
        ActionToString(ListActivityTypes);
        ActionToString(ListClosedWorkflowExecutions);
        ActionToString(ListDomains);
        ActionToString(ListOpenWorkflowExecutions);
        ActionToString(ListTagsForResource);
        ActionToString(ListWorkflowTypes);
        ActionToString(PollForActivityTask);
        ActionToString(PollForDecisionTask);
        ActionToString(RecordActivityTaskHeartbeat);
        ActionToString(RegisterActivityType);
        ActionToString(RegisterDomain);
        ActionToString(RegisterWorkflowType);
        ActionToString(RequestCancelWorkflowExecution);
        ActionToString(RespondActivityTaskCanceled);
        ActionToString(RespondActivityTaskCompleted);
        ActionToString(RespondActivityTaskFailed);
        ActionToString(RespondDecisionTaskCompleted);
        ActionToString(SignalWorkflowExecution);
        ActionToString(StartWorkflowExecution);
        ActionToString(TagResource);
        ActionToString(TerminateWorkflowExecution);
        ActionToString(UndeprecateActivityType);
        ActionToString(UndeprecateDomain);
        ActionToString(UndeprecateWorkflowType);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Swf
} // namespace QtAws
