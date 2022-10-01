// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ec2instanceconnectrequest.h"
#include "ec2instanceconnectrequest_p.h"

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectRequest
 * \brief The Ec2InstanceConnectRequest class provides an interface for Ec2InstanceConnect requests.
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * \enum Ec2InstanceConnectRequest::Action
 *
 * This enum describes the actions that can be performed as Ec2InstanceConnect
 * requests.
 *
 * \value SendSSHPublicKeyAction Ec2InstanceConnect SendSSHPublicKey action.
 * \value SendSerialConsoleSSHPublicKeyAction Ec2InstanceConnect SendSerialConsoleSSHPublicKey action.
 */

/*!
 * Constructs a Ec2InstanceConnectRequest object for Ec2InstanceConnect \a action.
 */
Ec2InstanceConnectRequest::Ec2InstanceConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Ec2InstanceConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Ec2InstanceConnectRequest::Ec2InstanceConnectRequest(const Ec2InstanceConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Ec2InstanceConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Ec2InstanceConnectRequest object to be equal to \a other.
 */
Ec2InstanceConnectRequest& Ec2InstanceConnectRequest::operator=(const Ec2InstanceConnectRequest &other)
{
    Q_D(Ec2InstanceConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Ec2InstanceConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2InstanceConnectRequestPrivate.
 */
Ec2InstanceConnectRequest::Ec2InstanceConnectRequest(Ec2InstanceConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ec2InstanceConnect action to be performed by this request.
 */
Ec2InstanceConnectRequest::Action Ec2InstanceConnectRequest::action() const
{
    Q_D(const Ec2InstanceConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the Ec2InstanceConnect action to be performed by this request.
 */
QString Ec2InstanceConnectRequest::actionString() const
{
    return Ec2InstanceConnectRequestPrivate::toString(action());
}

/*!
 * Returns the Ec2InstanceConnect API version implemented by this request.
 */
QString Ec2InstanceConnectRequest::apiVersion() const
{
    Q_D(const Ec2InstanceConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ec2InstanceConnect action to be performed by this request to \a action.
 */
void Ec2InstanceConnectRequest::setAction(const Action action)
{
    Q_D(Ec2InstanceConnectRequest);
    d->action = action;
}

/*!
 * Sets the Ec2InstanceConnect API version to include in this request to \a version.
 */
void Ec2InstanceConnectRequest::setApiVersion(const QString &version)
{
    Q_D(Ec2InstanceConnectRequest);
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
bool Ec2InstanceConnectRequest::operator==(const Ec2InstanceConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ec2InstanceConnect queue name.
 *
 * @par From Ec2InstanceConnect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ec2InstanceConnect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Ec2InstanceConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Ec2InstanceConnectRequest::clearParameter(const QString &name)
{
    Q_D(Ec2InstanceConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Ec2InstanceConnectRequest::clearParameters()
{
    Q_D(Ec2InstanceConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Ec2InstanceConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Ec2InstanceConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Ec2InstanceConnectRequest::parameters() const
{
    Q_D(const Ec2InstanceConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Ec2InstanceConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Ec2InstanceConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Ec2InstanceConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Ec2InstanceConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ec2InstanceConnect request using the given
 * \a endpoint.
 *
 * This Ec2InstanceConnect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Ec2InstanceConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Ec2InstanceConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectRequestPrivate
 * \brief The Ec2InstanceConnectRequestPrivate class provides private implementation for Ec2InstanceConnectRequest.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectRequestPrivate object for Ec2InstanceConnect \a action,
 * with public implementation \a q.
 */
Ec2InstanceConnectRequestPrivate::Ec2InstanceConnectRequestPrivate(const Ec2InstanceConnectRequest::Action action, Ec2InstanceConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-04-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Ec2InstanceConnectRequest class's copy constructor.
 */
Ec2InstanceConnectRequestPrivate::Ec2InstanceConnectRequestPrivate(const Ec2InstanceConnectRequestPrivate &other,
                                     Ec2InstanceConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Ec2InstanceConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ec2InstanceConnect service's Action
 * query parameters.
 */
QString Ec2InstanceConnectRequestPrivate::toString(const Ec2InstanceConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case Ec2InstanceConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(SendSSHPublicKey);
        ActionToString(SendSerialConsoleSSHPublicKey);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ec2InstanceConnect
} // namespace QtAws
