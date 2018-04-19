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

#include "sfnrequest.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SFNRequest
 * \brief The SFNRequest class provides an interface for SFN requests.
 *
 * \inmodule QtAwsSFN
 */

/*!
 * \enum SFNRequest::Action
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
 * \value SendTaskFailureAction SFN SendTaskFailure action.
 * \value SendTaskHeartbeatAction SFN SendTaskHeartbeat action.
 * \value SendTaskSuccessAction SFN SendTaskSuccess action.
 * \value StartExecutionAction SFN StartExecution action.
 * \value StopExecutionAction SFN StopExecution action.
 * \value UpdateStateMachineAction SFN UpdateStateMachine action.
 */

/*!
 * Constructs a[n] SFNRequest object for SFN \a action.
 */
SFNRequest::SFNRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SFNRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SFNRequest::SFNRequest(const SFNRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SFNRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SFNRequest object to be equal to \a other.
 */
SFNRequest& SFNRequest::operator=(const SFNRequest &other)
{
    Q_D(SFNRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SFNRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SFNRequestPrivate.
 */
SFNRequest::SFNRequest(SFNRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SFN action to be performed by this request.
 */
SFNRequest::Action SFNRequest::action() const
{
    Q_D(const SFNRequest);
    return d->action;
}

/*!
 * Returns the name of the SFN action to be performed by this request.
 */
QString SFNRequest::actionString() const
{
    return SFNRequestPrivate::toString(action());
}

/*!
 * Returns the SFN API version implemented by this request.
 */
QString SFNRequest::apiVersion() const
{
    Q_D(const SFNRequest);
    return d->apiVersion;
}

/*!
 * Sets the SFN action to be performed by this request to \a action.
 */
void SFNRequest::setAction(const Action action)
{
    Q_D(SFNRequest);
    d->action = action;
}

/*!
 * Sets the SFN API version to include in this request to \a version.
 */
void SFNRequest::setApiVersion(const QString &version)
{
    Q_D(SFNRequest);
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
bool SFNRequest::operator==(const SFNRequest &other) const
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
/*bool SFNRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SFNRequest::clearParameter(const QString &name)
{
    Q_D(SFNRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SFNRequest::clearParameters()
{
    Q_D(SFNRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SFNRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SFNRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SFNRequest::parameters() const
{
    Q_D(const SFNRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SFNRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SFNRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SFNRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SFNRequest);
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
QNetworkRequest SFNRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SFNRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SFN::SFNRequestPrivate
 * \brief The SFNRequestPrivate class provides private implementation for SFNRequest.
 * \internal
 *
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SFNRequestPrivate object for SFN \a action with,
 * public implementation \a q.
 */
SFNRequestPrivate::SFNRequestPrivate(const SFNRequest::Action action, SFNRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SFNRequest class's copy constructor.
 */
SFNRequestPrivate::SFNRequestPrivate(const SFNRequestPrivate &other,
                                     SFNRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SFNRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SFN service's Action
 * query parameters.
 */
QString SFNRequestPrivate::toString(const SFNRequest::Action &action)
{
    #define ActionToString(action) \
        case SFNRequest::action##Action: return QStringLiteral(#action)
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
