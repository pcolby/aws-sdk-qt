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

#include "braketrequest.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::BraketRequest
 * \brief The BraketRequest class provides an interface for Braket requests.
 *
 * \inmodule QtAwsBraket
 */

/*!
 * \enum BraketRequest::Action
 *
 * This enum describes the actions that can be performed as Braket
 * requests.
 *
 * \value CancelQuantumTaskAction Braket CancelQuantumTask action.
 * \value CreateQuantumTaskAction Braket CreateQuantumTask action.
 * \value GetDeviceAction Braket GetDevice action.
 * \value GetQuantumTaskAction Braket GetQuantumTask action.
 * \value ListTagsForResourceAction Braket ListTagsForResource action.
 * \value SearchDevicesAction Braket SearchDevices action.
 * \value SearchQuantumTasksAction Braket SearchQuantumTasks action.
 * \value TagResourceAction Braket TagResource action.
 * \value UntagResourceAction Braket UntagResource action.
 */

/*!
 * Constructs a BraketRequest object for Braket \a action.
 */
BraketRequest::BraketRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BraketRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BraketRequest::BraketRequest(const BraketRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BraketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BraketRequest object to be equal to \a other.
 */
BraketRequest& BraketRequest::operator=(const BraketRequest &other)
{
    Q_D(BraketRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BraketRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BraketRequestPrivate.
 */
BraketRequest::BraketRequest(BraketRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Braket action to be performed by this request.
 */
BraketRequest::Action BraketRequest::action() const
{
    Q_D(const BraketRequest);
    return d->action;
}

/*!
 * Returns the name of the Braket action to be performed by this request.
 */
QString BraketRequest::actionString() const
{
    return BraketRequestPrivate::toString(action());
}

/*!
 * Returns the Braket API version implemented by this request.
 */
QString BraketRequest::apiVersion() const
{
    Q_D(const BraketRequest);
    return d->apiVersion;
}

/*!
 * Sets the Braket action to be performed by this request to \a action.
 */
void BraketRequest::setAction(const Action action)
{
    Q_D(BraketRequest);
    d->action = action;
}

/*!
 * Sets the Braket API version to include in this request to \a version.
 */
void BraketRequest::setApiVersion(const QString &version)
{
    Q_D(BraketRequest);
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
bool BraketRequest::operator==(const BraketRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Braket queue name.
 *
 * @par From Braket FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Braket queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BraketRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BraketRequest::clearParameter(const QString &name)
{
    Q_D(BraketRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BraketRequest::clearParameters()
{
    Q_D(BraketRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BraketRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BraketRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BraketRequest::parameters() const
{
    Q_D(const BraketRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BraketRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BraketRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BraketRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BraketRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Braket request using the given
 * \a endpoint.
 *
 * This Braket implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BraketRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BraketRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Braket::BraketRequestPrivate
 * \brief The BraketRequestPrivate class provides private implementation for BraketRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a BraketRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
BraketRequestPrivate::BraketRequestPrivate(const BraketRequest::Action action, BraketRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BraketRequest class's copy constructor.
 */
BraketRequestPrivate::BraketRequestPrivate(const BraketRequestPrivate &other,
                                     BraketRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BraketRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Braket service's Action
 * query parameters.
 */
QString BraketRequestPrivate::toString(const BraketRequest::Action &action)
{
    #define ActionToString(action) \
        case BraketRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Braket
} // namespace QtAws
