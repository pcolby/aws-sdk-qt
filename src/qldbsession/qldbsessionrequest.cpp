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

#include "qldbsessionrequest.h"
#include "qldbsessionrequest_p.h"

namespace QtAws {
namespace QLDBSession {

/*!
 * \class QtAws::QLDBSession::QLDBSessionRequest
 * \brief The QLDBSessionRequest class provides an interface for QLDBSession requests.
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * \enum QLDBSessionRequest::Action
 *
 * This enum describes the actions that can be performed as QLDBSession
 * requests.
 *
 * \value SendCommandAction QLDBSession SendCommand action.
 */

/*!
 * Constructs a QLDBSessionRequest object for QLDBSession \a action.
 */
QLDBSessionRequest::QLDBSessionRequest(const Action action)
    : d_ptr(new QLDBSessionRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QLDBSessionRequest::QLDBSessionRequest(const QLDBSessionRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new QLDBSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the QLDBSessionRequest object to be equal to \a other.
 */
QLDBSessionRequest& QLDBSessionRequest::operator=(const QLDBSessionRequest &other)
{
    Q_D(QLDBSessionRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa QLDBSessionRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QLDBSessionRequestPrivate.
 */
QLDBSessionRequest::QLDBSessionRequest(QLDBSessionRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the QLDBSession action to be performed by this request.
 */
QLDBSessionRequest::Action QLDBSessionRequest::action() const
{
    Q_D(const QLDBSessionRequest);
    return d->action;
}

/*!
 * Returns the name of the QLDBSession action to be performed by this request.
 */
QString QLDBSessionRequest::actionString() const
{
    return QLDBSessionRequestPrivate::toString(action());
}

/*!
 * Returns the QLDBSession API version implemented by this request.
 */
QString QLDBSessionRequest::apiVersion() const
{
    Q_D(const QLDBSessionRequest);
    return d->apiVersion;
}

/*!
 * Sets the QLDBSession action to be performed by this request to \a action.
 */
void QLDBSessionRequest::setAction(const Action action)
{
    Q_D(QLDBSessionRequest);
    d->action = action;
}

/*!
 * Sets the QLDBSession API version to include in this request to \a version.
 */
void QLDBSessionRequest::setApiVersion(const QString &version)
{
    Q_D(QLDBSessionRequest);
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
bool QLDBSessionRequest::operator==(const QLDBSessionRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid QLDBSession queue name.
 *
 * @par From QLDBSession FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid QLDBSession queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool QLDBSessionRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int QLDBSessionRequest::clearParameter(const QString &name)
{
    Q_D(QLDBSessionRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void QLDBSessionRequest::clearParameters()
{
    Q_D(QLDBSessionRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant QLDBSessionRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const QLDBSessionRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &QLDBSessionRequest::parameters() const
{
    Q_D(const QLDBSessionRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void QLDBSessionRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(QLDBSessionRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void QLDBSessionRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(QLDBSessionRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the QLDBSession request using the given
 * \a endpoint.
 *
 * This QLDBSession implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest QLDBSessionRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const QLDBSessionRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::QLDBSession::QLDBSessionRequestPrivate
 * \brief The QLDBSessionRequestPrivate class provides private implementation for QLDBSessionRequest.
 * \internal
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a QLDBSessionRequestPrivate object for QLDBSession \a action,
 * with public implementation \a q.
 */
QLDBSessionRequestPrivate::QLDBSessionRequestPrivate(const QLDBSessionRequest::Action action, QLDBSessionRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the QLDBSessionRequest class's copy constructor.
 */
QLDBSessionRequestPrivate::QLDBSessionRequestPrivate(const QLDBSessionRequestPrivate &other,
                                     QLDBSessionRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QLDBSessionRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the QLDBSession service's Action
 * query parameters.
 */
QString QLDBSessionRequestPrivate::toString(const QLDBSessionRequest::Action &action)
{
    #define ActionToString(action) \
        case QLDBSessionRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace QLDBSession
} // namespace QtAws
