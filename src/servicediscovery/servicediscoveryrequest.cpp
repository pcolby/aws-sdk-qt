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

#include "servicediscoveryrequest.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  ServiceDiscoveryRequest
 *
 * @brief  Interface class for providing ServiceDiscovery requests
 */


/**
 * @brief  Constructs a new ServiceDiscoveryRequest object.
 *
 * @param  action  The ServiceDiscovery action to request.
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServiceDiscoveryRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ServiceDiscoveryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(const ServiceDiscoveryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServiceDiscoveryRequestPrivate(*other.d_func(), this))
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
ServiceDiscoveryRequest& ServiceDiscoveryRequest::operator=(const ServiceDiscoveryRequest &other)
{
    Q_D(ServiceDiscoveryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ServiceDiscoveryRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceDiscoveryRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(ServiceDiscoveryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ServiceDiscovery action to be performed by this request.
 *
 * @return The ServiceDiscovery action to be performed by this request.
 */
ServiceDiscoveryRequest::Action ServiceDiscoveryRequest::action() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->action;
}

/**
 * @brief Get the name of the ServiceDiscovery action to be performed by this request.
 *
 * @return The name of the ServiceDiscovery action to be performed by this request.
 */
QString ServiceDiscoveryRequest::actionString() const
{
    return ServiceDiscoveryRequestPrivate::toString(action());
}

/**
 * @brief  Get the ServiceDiscovery API version implemented by this request.
 *
 * @return The ServiceDiscovery API version implmented by this request.
 */
QString ServiceDiscoveryRequest::apiVersion() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ServiceDiscovery action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ServiceDiscoveryRequest::setAction(const Action action)
{
    Q_D(ServiceDiscoveryRequest);
    d->action = action;
}

/**
 * @brief  Set the ServiceDiscovery API version to include in this request.
 *
 * @param  version  The ServiceDiscovery API version to include in this request.
 */
void ServiceDiscoveryRequest::setApiVersion(const QString &version)
{
    Q_D(ServiceDiscoveryRequest);
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
bool ServiceDiscoveryRequest::operator==(const ServiceDiscoveryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ServiceDiscovery queue name.
 *
 * @par From ServiceDiscovery FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServiceDiscovery queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServiceDiscoveryRequest::isValidQueueName(const QString &queueName)
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
int ServiceDiscoveryRequest::clearParameter(const QString &name)
{
    Q_D(ServiceDiscoveryRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ServiceDiscoveryRequest::clearParameters()
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ServiceDiscovery request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ServiceDiscoveryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ServiceDiscovery request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ServiceDiscoveryRequest::parameters() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ServiceDiscovery request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ServiceDiscoveryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ServiceDiscovery request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ServiceDiscoveryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ServiceDiscovery request.
 *
 * This ServiceDiscovery implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ServiceDiscovery request using the given \a endpoint.
 */
QNetworkRequest ServiceDiscoveryRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ServiceDiscoveryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ServiceDiscoveryRequestPrivate
 *
 * @brief  Private implementation for ServiceDiscoveryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceDiscoveryRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed by the \a q request.
 * @param  q       Pointer to this object's public ServiceDiscoveryRequest instance.
 */
ServiceDiscoveryRequestPrivate::ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequest::Action action, ServiceDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ServiceDiscoveryRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServiceDiscoveryRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ServiceDiscoveryRequest instance.
 */
ServiceDiscoveryRequestPrivate::ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequestPrivate &other,
                                     ServiceDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ServiceDiscovery action to a string.
 *
 * This function converts ServiceDiscoveryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServiceDiscovery service's Action
 * query parameters.
 *
 * @param  action  ServiceDiscovery action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ServiceDiscoveryRequestPrivate::toString(const ServiceDiscoveryRequest::Action &action)
{
    #define ActionToString(action) \
        case ServiceDiscoveryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServiceDiscovery
} // namespace QtAws
