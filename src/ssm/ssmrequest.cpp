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

#include "ssmrequest.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  SSMRequest
 *
 * @brief  Interface class for providing SSM requests
 */


/**
 * @brief  Constructs a new SSMRequest object.
 *
 * @param  action  The SSM action to request.
 */
SSMRequest::SSMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SSMRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SSMRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SSMRequest::SSMRequest(const SSMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SSMRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
SSMRequest& SSMRequest::operator=(const SSMRequest &other)
{
    Q_D(SSMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SSMRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SSMRequest::SSMRequest(SSMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SSM action to be performed by this request.
 *
 * @return The SSM action to be performed by this request.
 */
SSMRequest::Action SSMRequest::action() const
{
    Q_D(const SSMRequest);
    return d->action;
}

/**
 * @brief Get the name of the SSM action to be performed by this request.
 *
 * @return The name of the SSM action to be performed by this request.
 */
QString SSMRequest::actionString() const
{
    return SSMRequestPrivate::toString(action());
}

/**
 * @brief  Get the SSM API version implemented by this request.
 *
 * @return The SSM API version implmented by this request.
 */
QString SSMRequest::apiVersion() const
{
    Q_D(const SSMRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the SSM action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SSMRequest::setAction(const Action action)
{
    Q_D(SSMRequest);
    d->action = action;
}

/**
 * @brief  Set the SSM API version to include in this request.
 *
 * @param  version  The SSM API version to include in this request.
 */
void SSMRequest::setApiVersion(const QString &version)
{
    Q_D(SSMRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool SSMRequest::operator==(const SSMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid SSM queue name.
 *
 * @par From SSM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SSMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int SSMRequest::clearParameter(const QString &name)
{
    Q_D(SSMRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SSMRequest::clearParameters()
{
    Q_D(SSMRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this SSM request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SSMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SSMRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this SSM request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SSMRequest::parameters() const
{
    Q_D(const SSMRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this SSM request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SSMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SSMRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this SSM request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SSMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SSMRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this SSM request.
 *
 * This SSM implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this SSM request using the given \a endpoint.
 */
QNetworkRequest SSMRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SSMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SSMRequestPrivate
 *
 * @brief  Private implementation for SSMRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SSMRequestPrivate object.
 *
 * @param  action  SSM action being performed by the \a q request.
 * @param  q       Pointer to this object's public SSMRequest instance.
 */
SSMRequestPrivate::SSMRequestPrivate(const SSMRequest::Action action, SSMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SSMRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SSMRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SSMRequest instance.
 */
SSMRequestPrivate::SSMRequestPrivate(const SSMRequestPrivate &other,
                                     SSMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and SSM action to a string.
 *
 * This function converts SSMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSM service's Action
 * query parameters.
 *
 * @param  action  SSM action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SSMRequestPrivate::toString(const SSMRequest::Action &action)
{
    #define ActionToString(action) \
        case SSMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSM
} // namespace QtAws
