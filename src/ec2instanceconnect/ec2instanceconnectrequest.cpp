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

#include "ec2instanceconnectrequest.h"
#include "ec2instanceconnectrequest_p.h"

namespace QtAws {
namespace EC2InstanceConnect {

/*!
 * \class QtAws::EC2InstanceConnect::EC2InstanceConnectRequest
 * \brief The EC2InstanceConnectRequest class provides an interface for EC2InstanceConnect requests.
 *
 * \inmodule QtAwsEC2InstanceConnect
 */

/*!
 * \enum EC2InstanceConnectRequest::Action
 *
 * This enum describes the actions that can be performed as EC2InstanceConnect
 * requests.
 *
 * \value SendSSHPublicKeyAction EC2InstanceConnect SendSSHPublicKey action.
 * \value SendSerialConsoleSSHPublicKeyAction EC2InstanceConnect SendSerialConsoleSSHPublicKey action.
 */

/*!
 * Constructs a EC2InstanceConnectRequest object for EC2InstanceConnect \a action.
 */
EC2InstanceConnectRequest::EC2InstanceConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EC2InstanceConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EC2InstanceConnectRequest::EC2InstanceConnectRequest(const EC2InstanceConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EC2InstanceConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EC2InstanceConnectRequest object to be equal to \a other.
 */
EC2InstanceConnectRequest& EC2InstanceConnectRequest::operator=(const EC2InstanceConnectRequest &other)
{
    Q_D(EC2InstanceConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EC2InstanceConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EC2InstanceConnectRequestPrivate.
 */
EC2InstanceConnectRequest::EC2InstanceConnectRequest(EC2InstanceConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EC2InstanceConnect action to be performed by this request.
 */
EC2InstanceConnectRequest::Action EC2InstanceConnectRequest::action() const
{
    Q_D(const EC2InstanceConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the EC2InstanceConnect action to be performed by this request.
 */
QString EC2InstanceConnectRequest::actionString() const
{
    return EC2InstanceConnectRequestPrivate::toString(action());
}

/*!
 * Returns the EC2InstanceConnect API version implemented by this request.
 */
QString EC2InstanceConnectRequest::apiVersion() const
{
    Q_D(const EC2InstanceConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the EC2InstanceConnect action to be performed by this request to \a action.
 */
void EC2InstanceConnectRequest::setAction(const Action action)
{
    Q_D(EC2InstanceConnectRequest);
    d->action = action;
}

/*!
 * Sets the EC2InstanceConnect API version to include in this request to \a version.
 */
void EC2InstanceConnectRequest::setApiVersion(const QString &version)
{
    Q_D(EC2InstanceConnectRequest);
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
bool EC2InstanceConnectRequest::operator==(const EC2InstanceConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EC2InstanceConnect queue name.
 *
 * @par From EC2InstanceConnect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EC2InstanceConnect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EC2InstanceConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EC2InstanceConnectRequest::clearParameter(const QString &name)
{
    Q_D(EC2InstanceConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EC2InstanceConnectRequest::clearParameters()
{
    Q_D(EC2InstanceConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EC2InstanceConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EC2InstanceConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EC2InstanceConnectRequest::parameters() const
{
    Q_D(const EC2InstanceConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EC2InstanceConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EC2InstanceConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EC2InstanceConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EC2InstanceConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EC2InstanceConnect request using the given
 * \a endpoint.
 *
 * This EC2InstanceConnect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EC2InstanceConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EC2InstanceConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EC2InstanceConnect::EC2InstanceConnectRequestPrivate
 * \brief The EC2InstanceConnectRequestPrivate class provides private implementation for EC2InstanceConnectRequest.
 * \internal
 *
 * \inmodule QtAwsEC2InstanceConnect
 */

/*!
 * Constructs a EC2InstanceConnectRequestPrivate object for EC2InstanceConnect \a action,
 * with public implementation \a q.
 */
EC2InstanceConnectRequestPrivate::EC2InstanceConnectRequestPrivate(const EC2InstanceConnectRequest::Action action, EC2InstanceConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EC2InstanceConnectRequest class's copy constructor.
 */
EC2InstanceConnectRequestPrivate::EC2InstanceConnectRequestPrivate(const EC2InstanceConnectRequestPrivate &other,
                                     EC2InstanceConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EC2InstanceConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EC2InstanceConnect service's Action
 * query parameters.
 */
QString EC2InstanceConnectRequestPrivate::toString(const EC2InstanceConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case EC2InstanceConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EC2InstanceConnect
} // namespace QtAws
