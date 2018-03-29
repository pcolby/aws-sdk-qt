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

#include "cloudsearchdomainrequest.h"
#include "cloudsearchdomainrequest_p.h"

namespace QtAws {
namespace CloudSearchDomain {

/**
 * @class  CloudSearchDomainRequest
 *
 * @brief  Interface class for providing CloudSearchDomain requests
 */


/**
 * @brief  Constructs a new CloudSearchDomainRequest object.
 *
 * @param  action  The CloudSearchDomain action to request.
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchDomainRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CloudSearchDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(const CloudSearchDomainRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchDomainRequestPrivate(*other.d_func(), this))
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
CloudSearchDomainRequest& CloudSearchDomainRequest::operator=(const CloudSearchDomainRequest &other)
{
    Q_D(CloudSearchDomainRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchDomainRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CloudSearchDomainRequest::CloudSearchDomainRequest(CloudSearchDomainRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CloudSearchDomain action to be performed by this request.
 *
 * @return The CloudSearchDomain action to be performed by this request.
 */
CloudSearchDomainRequest::Action CloudSearchDomainRequest::action() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->action;
}

/**
 * @brief Get the name of the CloudSearchDomain action to be performed by this request.
 *
 * @return The name of the CloudSearchDomain action to be performed by this request.
 */
QString CloudSearchDomainRequest::actionString() const
{
    return CloudSearchDomainRequestPrivate::toString(action());
}

/**
 * @brief  Get the CloudSearchDomain API version implemented by this request.
 *
 * @return The CloudSearchDomain API version implmented by this request.
 */
QString CloudSearchDomainRequest::apiVersion() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CloudSearchDomain action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CloudSearchDomainRequest::setAction(const Action action)
{
    Q_D(CloudSearchDomainRequest);
    d->action = action;
}

/**
 * @brief  Set the CloudSearchDomain API version to include in this request.
 *
 * @param  version  The CloudSearchDomain API version to include in this request.
 */
void CloudSearchDomainRequest::setApiVersion(const QString &version)
{
    Q_D(CloudSearchDomainRequest);
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
bool CloudSearchDomainRequest::operator==(const CloudSearchDomainRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CloudSearchDomain queue name.
 *
 * @par From CloudSearchDomain FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudSearchDomain queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CloudSearchDomainRequest::isValidQueueName(const QString &queueName)
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
int CloudSearchDomainRequest::clearParameter(const QString &name)
{
    Q_D(CloudSearchDomainRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CloudSearchDomainRequest::clearParameters()
{
    Q_D(CloudSearchDomainRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CloudSearchDomain request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CloudSearchDomainRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudSearchDomainRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CloudSearchDomain request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CloudSearchDomainRequest::parameters() const
{
    Q_D(const CloudSearchDomainRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CloudSearchDomain request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CloudSearchDomainRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudSearchDomainRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CloudSearchDomain request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CloudSearchDomainRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudSearchDomainRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CloudSearchDomain request.
 *
 * This CloudSearchDomain implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CloudSearchDomain request using the given \a endpoint.
 */
QNetworkRequest CloudSearchDomainRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudSearchDomainRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CloudSearchDomainRequestPrivate
 *
 * @brief  Private implementation for CloudSearchDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainRequestPrivate object.
 *
 * @param  action  CloudSearchDomain action being performed by the \a q request.
 * @param  q       Pointer to this object's public CloudSearchDomainRequest instance.
 */
CloudSearchDomainRequestPrivate::CloudSearchDomainRequestPrivate(const CloudSearchDomainRequest::Action action, CloudSearchDomainRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchDomainRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudSearchDomainRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloudSearchDomainRequest instance.
 */
CloudSearchDomainRequestPrivate::CloudSearchDomainRequestPrivate(const CloudSearchDomainRequestPrivate &other,
                                     CloudSearchDomainRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CloudSearchDomain action to a string.
 *
 * This function converts CloudSearchDomainRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudSearchDomain service's Action
 * query parameters.
 *
 * @param  action  CloudSearchDomain action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CloudSearchDomainRequestPrivate::toString(const CloudSearchDomainRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudSearchDomainRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudSearchDomain
} // namespace QtAws
