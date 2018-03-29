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

#include "storagegatewayrequest.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  StorageGatewayRequest
 *
 * @brief  Interface class for providing StorageGateway requests
 */


/**
 * @brief  Constructs a new StorageGatewayRequest object.
 *
 * @param  action  The StorageGateway action to request.
 */
StorageGatewayRequest::StorageGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new StorageGatewayRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new StorageGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StorageGatewayRequest::StorageGatewayRequest(const StorageGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new StorageGatewayRequestPrivate(*other.d_func(), this))
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
StorageGatewayRequest& StorageGatewayRequest::operator=(const StorageGatewayRequest &other)
{
    Q_D(StorageGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new StorageGatewayRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StorageGatewayRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
StorageGatewayRequest::StorageGatewayRequest(StorageGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the StorageGateway action to be performed by this request.
 *
 * @return The StorageGateway action to be performed by this request.
 */
StorageGatewayRequest::Action StorageGatewayRequest::action() const
{
    Q_D(const StorageGatewayRequest);
    return d->action;
}

/**
 * @brief Get the name of the StorageGateway action to be performed by this request.
 *
 * @return The name of the StorageGateway action to be performed by this request.
 */
QString StorageGatewayRequest::actionString() const
{
    return StorageGatewayRequestPrivate::toString(action());
}

/**
 * @brief  Get the StorageGateway API version implemented by this request.
 *
 * @return The StorageGateway API version implmented by this request.
 */
QString StorageGatewayRequest::apiVersion() const
{
    Q_D(const StorageGatewayRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the StorageGateway action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void StorageGatewayRequest::setAction(const Action action)
{
    Q_D(StorageGatewayRequest);
    d->action = action;
}

/**
 * @brief  Set the StorageGateway API version to include in this request.
 *
 * @param  version  The StorageGateway API version to include in this request.
 */
void StorageGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(StorageGatewayRequest);
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
bool StorageGatewayRequest::operator==(const StorageGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid StorageGateway queue name.
 *
 * @par From StorageGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid StorageGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool StorageGatewayRequest::isValidQueueName(const QString &queueName)
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
int StorageGatewayRequest::clearParameter(const QString &name)
{
    Q_D(StorageGatewayRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void StorageGatewayRequest::clearParameters()
{
    Q_D(StorageGatewayRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this StorageGateway request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant StorageGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const StorageGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this StorageGateway request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &StorageGatewayRequest::parameters() const
{
    Q_D(const StorageGatewayRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this StorageGateway request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void StorageGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(StorageGatewayRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this StorageGateway request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void StorageGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(StorageGatewayRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this StorageGateway request.
 *
 * This StorageGateway implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this StorageGateway request using the given \a endpoint.
 */
QNetworkRequest StorageGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const StorageGatewayRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  StorageGatewayRequestPrivate
 *
 * @brief  Private implementation for StorageGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StorageGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed by the \a q request.
 * @param  q       Pointer to this object's public StorageGatewayRequest instance.
 */
StorageGatewayRequestPrivate::StorageGatewayRequestPrivate(const StorageGatewayRequest::Action action, StorageGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StorageGatewayRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the StorageGatewayRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StorageGatewayRequest instance.
 */
StorageGatewayRequestPrivate::StorageGatewayRequestPrivate(const StorageGatewayRequestPrivate &other,
                                     StorageGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and StorageGateway action to a string.
 *
 * This function converts StorageGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the StorageGateway service's Action
 * query parameters.
 *
 * @param  action  StorageGateway action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString StorageGatewayRequestPrivate::toString(const StorageGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case StorageGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace StorageGateway
} // namespace QtAws
