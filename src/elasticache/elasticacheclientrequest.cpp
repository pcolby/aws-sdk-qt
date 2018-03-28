/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticacheclientrequest.h"
#include "elasticacheclientrequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  ElastiCacheClientRequest
 *
 * @brief  Interface class for providing ElastiCache requests
 */


/**
 * @brief  Constructs a new ElastiCacheClientRequest object.
 *
 * @param  action  The ElastiCache action to request.
 */
ElastiCacheClientRequest::ElastiCacheClientRequest(const Action action)
    : AwsAbstractRequest(new ElastiCacheClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ElastiCacheClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ElastiCacheClientRequest::ElastiCacheClientRequest(const ElastiCacheClientRequest &other)
    : AwsAbstractRequest(new ElastiCacheClientRequestPrivate(*other.d_func(), this))
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
ElastiCacheClientRequest& ElastiCacheClientRequest::operator=(const ElastiCacheClientRequest &other)
{
    Q_D(ElastiCacheClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ElastiCacheClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElastiCacheClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ElastiCacheClientRequest::ElastiCacheClientRequest(ElastiCacheClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ElastiCache action to be performed by this request.
 *
 * @return The ElastiCache action to be performed by this request.
 */
ElastiCacheClientRequest::Action ElastiCacheClientRequest::action() const
{
    Q_D(const ElastiCacheClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ElastiCache action to be performed by this request.
 *
 * @return The name of the ElastiCache action to be performed by this request.
 */
QString ElastiCacheClientRequest::actionString() const
{
    return ElastiCacheClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ElastiCache API version implemented by this request.
 *
 * @return The ElastiCache API version implmented by this request.
 */
QString ElastiCacheClientRequest::apiVersion() const
{
    Q_D(const ElastiCacheClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ElastiCache action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ElastiCacheClientRequest::setAction(const Action action)
{
    Q_D(ElastiCacheClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ElastiCache API version to include in this request.
 *
 * @param  version  The ElastiCache API version to include in this request.
 */
void ElastiCacheClientRequest::setApiVersion(const QString &version)
{
    Q_D(ElastiCacheClientRequest);
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
bool ElastiCacheClientRequest::operator==(const ElastiCacheClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ElastiCache queue name.
 *
 * @par From ElastiCache FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElastiCache queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ElastiCacheClientRequest::isValidQueueName(const QString &queueName)
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
int ElastiCacheClientRequest::clearParameter(const QString &name)
{
    Q_D(ElastiCacheClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ElastiCacheClientRequest::clearParameters()
{
    Q_D(ElastiCacheClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ElastiCache request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ElastiCacheClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElastiCacheClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ElastiCache request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ElastiCacheClientRequest::parameters() const
{
    Q_D(const ElastiCacheClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ElastiCache request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ElastiCacheClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElastiCacheClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ElastiCache request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ElastiCacheClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElastiCacheClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ElastiCache request.
 *
 * This ElastiCache implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ElastiCache request using the given \a endpoint.
 */
QNetworkRequest ElastiCacheClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElastiCacheClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ElastiCacheClientRequestPrivate
 *
 * @brief  Private implementation for ElastiCacheClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElastiCacheClientRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed by the \a q request.
 * @param  q       Pointer to this object's public ElastiCacheClientRequest instance.
 */
ElastiCacheClientRequestPrivate::ElastiCacheClientRequestPrivate(const ElastiCacheClientRequest::Action action, ElastiCacheClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ElastiCacheClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElastiCacheClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ElastiCacheClientRequest instance.
 */
ElastiCacheClientRequestPrivate::ElastiCacheClientRequestPrivate(const ElastiCacheClientRequestPrivate &other,
                                     ElastiCacheClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ElastiCache action to a string.
 *
 * This function converts ElastiCacheClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElastiCache service's Action
 * query parameters.
 *
 * @param  action  ElastiCache action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ElastiCacheClientRequestPrivate::toString(const ElastiCacheClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ElastiCacheClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElastiCache
} // namespace AWS
