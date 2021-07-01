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

#include "workmailmessageflowrequest.h"
#include "workmailmessageflowrequest_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowRequest
 * \brief The WorkMailMessageFlowRequest class provides an interface for WorkMailMessageFlow requests.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * \enum WorkMailMessageFlowRequest::Action
 *
 * This enum describes the actions that can be performed as WorkMailMessageFlow
 * requests.
 *
 * \value GetRawMessageContentAction WorkMailMessageFlow GetRawMessageContent action.
 * \value PutRawMessageContentAction WorkMailMessageFlow PutRawMessageContent action.
 */

/*!
 * Constructs a WorkMailMessageFlowRequest object for WorkMailMessageFlow \a action.
 */
WorkMailMessageFlowRequest::WorkMailMessageFlowRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WorkMailMessageFlowRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WorkMailMessageFlowRequest::WorkMailMessageFlowRequest(const WorkMailMessageFlowRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WorkMailMessageFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WorkMailMessageFlowRequest object to be equal to \a other.
 */
WorkMailMessageFlowRequest& WorkMailMessageFlowRequest::operator=(const WorkMailMessageFlowRequest &other)
{
    Q_D(WorkMailMessageFlowRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WorkMailMessageFlowRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkMailMessageFlowRequestPrivate.
 */
WorkMailMessageFlowRequest::WorkMailMessageFlowRequest(WorkMailMessageFlowRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WorkMailMessageFlow action to be performed by this request.
 */
WorkMailMessageFlowRequest::Action WorkMailMessageFlowRequest::action() const
{
    Q_D(const WorkMailMessageFlowRequest);
    return d->action;
}

/*!
 * Returns the name of the WorkMailMessageFlow action to be performed by this request.
 */
QString WorkMailMessageFlowRequest::actionString() const
{
    return WorkMailMessageFlowRequestPrivate::toString(action());
}

/*!
 * Returns the WorkMailMessageFlow API version implemented by this request.
 */
QString WorkMailMessageFlowRequest::apiVersion() const
{
    Q_D(const WorkMailMessageFlowRequest);
    return d->apiVersion;
}

/*!
 * Sets the WorkMailMessageFlow action to be performed by this request to \a action.
 */
void WorkMailMessageFlowRequest::setAction(const Action action)
{
    Q_D(WorkMailMessageFlowRequest);
    d->action = action;
}

/*!
 * Sets the WorkMailMessageFlow API version to include in this request to \a version.
 */
void WorkMailMessageFlowRequest::setApiVersion(const QString &version)
{
    Q_D(WorkMailMessageFlowRequest);
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
bool WorkMailMessageFlowRequest::operator==(const WorkMailMessageFlowRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WorkMailMessageFlow queue name.
 *
 * @par From WorkMailMessageFlow FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkMailMessageFlow queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WorkMailMessageFlowRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WorkMailMessageFlowRequest::clearParameter(const QString &name)
{
    Q_D(WorkMailMessageFlowRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WorkMailMessageFlowRequest::clearParameters()
{
    Q_D(WorkMailMessageFlowRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WorkMailMessageFlowRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkMailMessageFlowRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WorkMailMessageFlowRequest::parameters() const
{
    Q_D(const WorkMailMessageFlowRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WorkMailMessageFlowRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkMailMessageFlowRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WorkMailMessageFlowRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkMailMessageFlowRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WorkMailMessageFlow request using the given
 * \a endpoint.
 *
 * This WorkMailMessageFlow implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WorkMailMessageFlowRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WorkMailMessageFlowRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WorkMailMessageFlow::WorkMailMessageFlowRequestPrivate
 * \brief The WorkMailMessageFlowRequestPrivate class provides private implementation for WorkMailMessageFlowRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a WorkMailMessageFlowRequestPrivate object for WorkMailMessageFlow \a action,
 * with public implementation \a q.
 */
WorkMailMessageFlowRequestPrivate::WorkMailMessageFlowRequestPrivate(const WorkMailMessageFlowRequest::Action action, WorkMailMessageFlowRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkMailMessageFlowRequest class's copy constructor.
 */
WorkMailMessageFlowRequestPrivate::WorkMailMessageFlowRequestPrivate(const WorkMailMessageFlowRequestPrivate &other,
                                     WorkMailMessageFlowRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WorkMailMessageFlowRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkMailMessageFlow service's Action
 * query parameters.
 */
QString WorkMailMessageFlowRequestPrivate::toString(const WorkMailMessageFlowRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkMailMessageFlowRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetRawMessageContent);
        ActionToString(PutRawMessageContent);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkMailMessageFlow
} // namespace QtAws
