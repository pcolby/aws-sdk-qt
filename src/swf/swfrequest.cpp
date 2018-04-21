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

#include "swfrequest.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::SwfRequest
 * \brief The SwfRequest class provides an interface for SWF requests.
 *
 * \inmodule QtAwsSWF
 */

/*!
 * \enum SwfRequest::Action
 *
 * This enum describes the actions that can be performed as SWF
 * requests.
 *
 * \value CountClosedWorkflowExecutionsAction SWF CountClosedWorkflowExecutions action.
 * \value CountOpenWorkflowExecutionsAction SWF CountOpenWorkflowExecutions action.
 * \value CountPendingActivityTasksAction SWF CountPendingActivityTasks action.
 * \value CountPendingDecisionTasksAction SWF CountPendingDecisionTasks action.
 * \value DeprecateActivityTypeAction SWF DeprecateActivityType action.
 * \value DeprecateDomainAction SWF DeprecateDomain action.
 * \value DeprecateWorkflowTypeAction SWF DeprecateWorkflowType action.
 * \value DescribeActivityTypeAction SWF DescribeActivityType action.
 * \value DescribeDomainAction SWF DescribeDomain action.
 * \value DescribeWorkflowExecutionAction SWF DescribeWorkflowExecution action.
 * \value DescribeWorkflowTypeAction SWF DescribeWorkflowType action.
 * \value GetWorkflowExecutionHistoryAction SWF GetWorkflowExecutionHistory action.
 * \value ListActivityTypesAction SWF ListActivityTypes action.
 * \value ListClosedWorkflowExecutionsAction SWF ListClosedWorkflowExecutions action.
 * \value ListDomainsAction SWF ListDomains action.
 * \value ListOpenWorkflowExecutionsAction SWF ListOpenWorkflowExecutions action.
 * \value ListWorkflowTypesAction SWF ListWorkflowTypes action.
 * \value PollForActivityTaskAction SWF PollForActivityTask action.
 * \value PollForDecisionTaskAction SWF PollForDecisionTask action.
 * \value RecordActivityTaskHeartbeatAction SWF RecordActivityTaskHeartbeat action.
 * \value RegisterActivityTypeAction SWF RegisterActivityType action.
 * \value RegisterDomainAction SWF RegisterDomain action.
 * \value RegisterWorkflowTypeAction SWF RegisterWorkflowType action.
 * \value RequestCancelWorkflowExecutionAction SWF RequestCancelWorkflowExecution action.
 * \value RespondActivityTaskCanceledAction SWF RespondActivityTaskCanceled action.
 * \value RespondActivityTaskCompletedAction SWF RespondActivityTaskCompleted action.
 * \value RespondActivityTaskFailedAction SWF RespondActivityTaskFailed action.
 * \value RespondDecisionTaskCompletedAction SWF RespondDecisionTaskCompleted action.
 * \value SignalWorkflowExecutionAction SWF SignalWorkflowExecution action.
 * \value StartWorkflowExecutionAction SWF StartWorkflowExecution action.
 * \value TerminateWorkflowExecutionAction SWF TerminateWorkflowExecution action.
 */

/*!
 * Constructs a SwfRequest object for SWF \a action.
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
 * Returns the SWF action to be performed by this request.
 */
SwfRequest::Action SwfRequest::action() const
{
    Q_D(const SwfRequest);
    return d->action;
}

/*!
 * Returns the name of the SWF action to be performed by this request.
 */
QString SwfRequest::actionString() const
{
    return SwfRequestPrivate::toString(action());
}

/*!
 * Returns the SWF API version implemented by this request.
 */
QString SwfRequest::apiVersion() const
{
    Q_D(const SwfRequest);
    return d->apiVersion;
}

/*!
 * Sets the SWF action to be performed by this request to \a action.
 */
void SwfRequest::setAction(const Action action)
{
    Q_D(SwfRequest);
    d->action = action;
}

/*!
 * Sets the SWF API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid SWF queue name.
 *
 * @par From SWF FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SWF queue name, \c false otherwise.
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
 * Returns a network request for the SWF request using the given
 * \a endpoint.
 *
 * This SWF implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SwfRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SwfRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SWF::SwfRequestPrivate
 * \brief The SwfRequestPrivate class provides private implementation for SwfRequest.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a SwfRequestPrivate object for SWF \a action,
 * with public implementation \a q.
 */
SwfRequestPrivate::SwfRequestPrivate(const SwfRequest::Action action, SwfRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
 * string representations, appropriate for use with the SWF service's Action
 * query parameters.
 */
QString SwfRequestPrivate::toString(const SwfRequest::Action &action)
{
    #define ActionToString(action) \
        case SwfRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SWF
} // namespace QtAws
