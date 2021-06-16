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

#include "sfnrequest.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SfnRequest
 * \brief The SfnRequest class provides an interface for SFN requests.
 *
 * \inmodule QtAwsSFN
 */

/*!
 * \enum SfnRequest::Action
 *
 * This enum describes the actions that can be performed as SFN
 * requests.
 *
 * \value CreateActivityAction SFN CreateActivity action.
 * \value CreateStateMachineAction SFN CreateStateMachine action.
 * \value DeleteActivityAction SFN DeleteActivity action.
 * \value DeleteStateMachineAction SFN DeleteStateMachine action.
 * \value DescribeActivityAction SFN DescribeActivity action.
 * \value DescribeExecutionAction SFN DescribeExecution action.
 * \value DescribeStateMachineAction SFN DescribeStateMachine action.
 * \value DescribeStateMachineForExecutionAction SFN DescribeStateMachineForExecution action.
 * \value GetActivityTaskAction SFN GetActivityTask action.
 * \value GetExecutionHistoryAction SFN GetExecutionHistory action.
 * \value ListActivitiesAction SFN ListActivities action.
 * \value ListExecutionsAction SFN ListExecutions action.
 * \value ListStateMachinesAction SFN ListStateMachines action.
 * \value ListTagsForResourceAction SFN ListTagsForResource action.
 * \value SendTaskFailureAction SFN SendTaskFailure action.
 * \value SendTaskHeartbeatAction SFN SendTaskHeartbeat action.
 * \value SendTaskSuccessAction SFN SendTaskSuccess action.
 * \value StartExecutionAction SFN StartExecution action.
 * \value StopExecutionAction SFN StopExecution action.
 * \value TagResourceAction SFN TagResource action.
 * \value UntagResourceAction SFN UntagResource action.
 * \value UpdateStateMachineAction SFN UpdateStateMachine action.
 */

/*!
 * Constructs a SfnRequest object for SFN \a action.
 */
SfnRequest::SfnRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SfnRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SfnRequest::SfnRequest(const SfnRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SfnRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SfnRequest object to be equal to \a other.
 */
SfnRequest& SfnRequest::operator=(const SfnRequest &other)
{
    Q_D(SfnRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SfnRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SfnRequestPrivate.
 */
SfnRequest::SfnRequest(SfnRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SFN action to be performed by this request.
 */
SfnRequest::Action SfnRequest::action() const
{
    Q_D(const SfnRequest);
    return d->action;
}

/*!
 * Returns the name of the SFN action to be performed by this request.
 */
QString SfnRequest::actionString() const
{
    return SfnRequestPrivate::toString(action());
}

/*!
 * Returns the SFN API version implemented by this request.
 */
QString SfnRequest::apiVersion() const
{
    Q_D(const SfnRequest);
    return d->apiVersion;
}

/*!
 * Sets the SFN action to be performed by this request to \a action.
 */
void SfnRequest::setAction(const Action action)
{
    Q_D(SfnRequest);
    d->action = action;
}

/*!
 * Sets the SFN API version to include in this request to \a version.
 */
void SfnRequest::setApiVersion(const QString &version)
{
    Q_D(SfnRequest);
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
bool SfnRequest::operator==(const SfnRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SFN queue name.
 *
 * @par From SFN FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SFN queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SfnRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SfnRequest::clearParameter(const QString &name)
{
    Q_D(SfnRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SfnRequest::clearParameters()
{
    Q_D(SfnRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SfnRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SfnRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SfnRequest::parameters() const
{
    Q_D(const SfnRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SfnRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SfnRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SfnRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SfnRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SFN request using the given
 * \a endpoint.
 *
 * This SFN implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SfnRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SfnRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SFN::SfnRequestPrivate
 * \brief The SfnRequestPrivate class provides private implementation for SfnRequest.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SfnRequestPrivate object for SFN \a action,
 * with public implementation \a q.
 */
SfnRequestPrivate::SfnRequestPrivate(const SfnRequest::Action action, SfnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SfnRequest class's copy constructor.
 */
SfnRequestPrivate::SfnRequestPrivate(const SfnRequestPrivate &other,
                                     SfnRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SfnRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SFN service's Action
 * query parameters.
 */
QString SfnRequestPrivate::toString(const SfnRequest::Action &action)
{
    #define ActionToString(action) \
        case SfnRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SFN
} // namespace QtAws
