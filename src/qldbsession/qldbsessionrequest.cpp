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
namespace QldbSession {

/*!
 * \class QtAws::QldbSession::QldbSessionRequest
 * \brief The QldbSessionRequest class provides an interface for QldbSession requests.
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * \enum QldbSessionRequest::Action
 *
 * This enum describes the actions that can be performed as QldbSession
 * requests.
 *
 * \value SendCommandAction QldbSession SendCommand action.
 */

/*!
 * Constructs a QldbSessionRequest object for QldbSession \a action.
 */
QldbSessionRequest::QldbSessionRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new QldbSessionRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QldbSessionRequest::QldbSessionRequest(const QldbSessionRequest &other)
    : QtAws::Core::AwsAbstractRequest(new QldbSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the QldbSessionRequest object to be equal to \a other.
 */
QldbSessionRequest& QldbSessionRequest::operator=(const QldbSessionRequest &other)
{
    Q_D(QldbSessionRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa QldbSessionRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QldbSessionRequestPrivate.
 */
QldbSessionRequest::QldbSessionRequest(QldbSessionRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the QldbSession action to be performed by this request.
 */
QldbSessionRequest::Action QldbSessionRequest::action() const
{
    Q_D(const QldbSessionRequest);
    return d->action;
}

/*!
 * Returns the name of the QldbSession action to be performed by this request.
 */
QString QldbSessionRequest::actionString() const
{
    return QldbSessionRequestPrivate::toString(action());
}

/*!
 * Returns the QldbSession API version implemented by this request.
 */
QString QldbSessionRequest::apiVersion() const
{
    Q_D(const QldbSessionRequest);
    return d->apiVersion;
}

/*!
 * Sets the QldbSession action to be performed by this request to \a action.
 */
void QldbSessionRequest::setAction(const Action action)
{
    Q_D(QldbSessionRequest);
    d->action = action;
}

/*!
 * Sets the QldbSession API version to include in this request to \a version.
 */
void QldbSessionRequest::setApiVersion(const QString &version)
{
    Q_D(QldbSessionRequest);
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
bool QldbSessionRequest::operator==(const QldbSessionRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid QldbSession queue name.
 *
 * @par From QldbSession FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid QldbSession queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool QldbSessionRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int QldbSessionRequest::clearParameter(const QString &name)
{
    Q_D(QldbSessionRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void QldbSessionRequest::clearParameters()
{
    Q_D(QldbSessionRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant QldbSessionRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const QldbSessionRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &QldbSessionRequest::parameters() const
{
    Q_D(const QldbSessionRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void QldbSessionRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(QldbSessionRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void QldbSessionRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(QldbSessionRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the QldbSession request using the given
 * \a endpoint.
 *
 * This QldbSession implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest QldbSessionRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const QldbSessionRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::QldbSession::QldbSessionRequestPrivate
 * \brief The QldbSessionRequestPrivate class provides private implementation for QldbSessionRequest.
 * \internal
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a QldbSessionRequestPrivate object for QldbSession \a action,
 * with public implementation \a q.
 */
QldbSessionRequestPrivate::QldbSessionRequestPrivate(const QldbSessionRequest::Action action, QldbSessionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-07-11"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the QldbSessionRequest class's copy constructor.
 */
QldbSessionRequestPrivate::QldbSessionRequestPrivate(const QldbSessionRequestPrivate &other,
                                     QldbSessionRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QldbSessionRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the QldbSession service's Action
 * query parameters.
 */
QString QldbSessionRequestPrivate::toString(const QldbSessionRequest::Action &action)
{
    #define ActionToString(action) \
        case QldbSessionRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(SendCommand);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace QldbSession
} // namespace QtAws
