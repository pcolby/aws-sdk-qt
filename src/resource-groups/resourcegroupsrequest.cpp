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

#include "resourcegroupsrequest.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  ResourceGroupsRequest
 *
 * @brief  Interface class for providing ResourceGroups requests
 */


/**
 * @brief  Constructs a new ResourceGroupsRequest object.
 *
 * @param  action  The ResourceGroups action to request.
 */
ResourceGroupsRequest::ResourceGroupsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ResourceGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResourceGroupsRequest::ResourceGroupsRequest(const ResourceGroupsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ResourceGroupsRequestPrivate(*other.d_func(), this))
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
ResourceGroupsRequest& ResourceGroupsRequest::operator=(const ResourceGroupsRequest &other)
{
    Q_D(ResourceGroupsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ResourceGroupsRequest::ResourceGroupsRequest(ResourceGroupsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ResourceGroups action to be performed by this request.
 *
 * @return The ResourceGroups action to be performed by this request.
 */
ResourceGroupsRequest::Action ResourceGroupsRequest::action() const
{
    Q_D(const ResourceGroupsRequest);
    return d->action;
}

/**
 * @brief Get the name of the ResourceGroups action to be performed by this request.
 *
 * @return The name of the ResourceGroups action to be performed by this request.
 */
QString ResourceGroupsRequest::actionString() const
{
    return ResourceGroupsRequestPrivate::toString(action());
}

/**
 * @brief  Get the ResourceGroups API version implemented by this request.
 *
 * @return The ResourceGroups API version implmented by this request.
 */
QString ResourceGroupsRequest::apiVersion() const
{
    Q_D(const ResourceGroupsRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ResourceGroups action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ResourceGroupsRequest::setAction(const Action action)
{
    Q_D(ResourceGroupsRequest);
    d->action = action;
}

/**
 * @brief  Set the ResourceGroups API version to include in this request.
 *
 * @param  version  The ResourceGroups API version to include in this request.
 */
void ResourceGroupsRequest::setApiVersion(const QString &version)
{
    Q_D(ResourceGroupsRequest);
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
bool ResourceGroupsRequest::operator==(const ResourceGroupsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ResourceGroups queue name.
 *
 * @par From ResourceGroups FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ResourceGroups queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ResourceGroupsRequest::isValidQueueName(const QString &queueName)
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
int ResourceGroupsRequest::clearParameter(const QString &name)
{
    Q_D(ResourceGroupsRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ResourceGroupsRequest::clearParameters()
{
    Q_D(ResourceGroupsRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ResourceGroups request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ResourceGroupsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ResourceGroupsRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ResourceGroups request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ResourceGroupsRequest::parameters() const
{
    Q_D(const ResourceGroupsRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ResourceGroups request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ResourceGroupsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ResourceGroupsRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ResourceGroups request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ResourceGroupsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ResourceGroupsRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ResourceGroups request.
 *
 * This ResourceGroups implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ResourceGroups request using the given \a endpoint.
 */
QNetworkRequest ResourceGroupsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ResourceGroupsRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ResourceGroupsRequestPrivate
 *
 * @brief  Private implementation for ResourceGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed by the \a q request.
 * @param  q       Pointer to this object's public ResourceGroupsRequest instance.
 */
ResourceGroupsRequestPrivate::ResourceGroupsRequestPrivate(const ResourceGroupsRequest::Action action, ResourceGroupsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ResourceGroupsRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResourceGroupsRequest instance.
 */
ResourceGroupsRequestPrivate::ResourceGroupsRequestPrivate(const ResourceGroupsRequestPrivate &other,
                                     ResourceGroupsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ResourceGroups action to a string.
 *
 * This function converts ResourceGroupsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ResourceGroups service's Action
 * query parameters.
 *
 * @param  action  ResourceGroups action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ResourceGroupsRequestPrivate::toString(const ResourceGroupsRequest::Action &action)
{
    #define ActionToString(action) \
        case ResourceGroupsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ResourceGroups
} // namespace QtAws
