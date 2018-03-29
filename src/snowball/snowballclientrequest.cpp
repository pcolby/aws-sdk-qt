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

#include "snowballclientrequest.h"
#include "snowballclientrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  SnowballClientRequest
 *
 * @brief  Interface class for providing Snowball requests
 */


/**
 * @brief  Constructs a new SnowballClientRequest object.
 *
 * @param  action  The Snowball action to request.
 */
SnowballClientRequest::SnowballClientRequest(const Action action)
    : AwsAbstractRequest(new SnowballClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SnowballClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SnowballClientRequest::SnowballClientRequest(const SnowballClientRequest &other)
    : AwsAbstractRequest(new SnowballClientRequestPrivate(*other.d_func(), this))
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
SnowballClientRequest& SnowballClientRequest::operator=(const SnowballClientRequest &other)
{
    Q_D(SnowballClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowballClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SnowballClientRequest::SnowballClientRequest(SnowballClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Snowball action to be performed by this request.
 *
 * @return The Snowball action to be performed by this request.
 */
SnowballClientRequest::Action SnowballClientRequest::action() const
{
    Q_D(const SnowballClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Snowball action to be performed by this request.
 *
 * @return The name of the Snowball action to be performed by this request.
 */
QString SnowballClientRequest::actionString() const
{
    return SnowballClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Snowball API version implemented by this request.
 *
 * @return The Snowball API version implmented by this request.
 */
QString SnowballClientRequest::apiVersion() const
{
    Q_D(const SnowballClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Snowball action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SnowballClientRequest::setAction(const Action action)
{
    Q_D(SnowballClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Snowball API version to include in this request.
 *
 * @param  version  The Snowball API version to include in this request.
 */
void SnowballClientRequest::setApiVersion(const QString &version)
{
    Q_D(SnowballClientRequest);
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
bool SnowballClientRequest::operator==(const SnowballClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Snowball queue name.
 *
 * @par From Snowball FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Snowball queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool SnowballClientRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int SnowballClientRequest::clearParameter(const QString &name)
{
    Q_D(SnowballClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SnowballClientRequest::clearParameters()
{
    Q_D(SnowballClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Snowball request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SnowballClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SnowballClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Snowball request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SnowballClientRequest::parameters() const
{
    Q_D(const SnowballClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Snowball request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SnowballClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SnowballClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Snowball request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SnowballClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SnowballClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Snowball request.
 *
 * This Snowball implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Snowball request using the given \a endpoint.
 */
QNetworkRequest SnowballClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SnowballClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SnowballClientRequestPrivate
 *
 * @brief  Private implementation for SnowballClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientRequestPrivate object.
 *
 * @param  action  Snowball action being performed by the \a q request.
 * @param  q       Pointer to this object's public SnowballClientRequest instance.
 */
SnowballClientRequestPrivate::SnowballClientRequestPrivate(const SnowballClientRequest::Action action, SnowballClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SnowballClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SnowballClientRequest instance.
 */
SnowballClientRequestPrivate::SnowballClientRequestPrivate(const SnowballClientRequestPrivate &other,
                                     SnowballClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Snowball action to a string.
 *
 * This function converts SnowballClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Snowball service's Action
 * query parameters.
 *
 * @param  action  Snowball action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SnowballClientRequestPrivate::toString(const SnowballClientRequest::Action &action)
{
    #define ActionToString(action) \
        case SnowballClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Snowball
} // namespace AWS
