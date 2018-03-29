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

#include "cloudsearchrequest.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  CloudSearchRequest
 *
 * @brief  Interface class for providing CloudSearch requests
 */


/**
 * @brief  Constructs a new CloudSearchRequest object.
 *
 * @param  action  The CloudSearch action to request.
 */
CloudSearchRequest::CloudSearchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CloudSearchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloudSearchRequest::CloudSearchRequest(const CloudSearchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudSearchRequestPrivate(*other.d_func(), this))
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
CloudSearchRequest& CloudSearchRequest::operator=(const CloudSearchRequest &other)
{
    Q_D(CloudSearchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CloudSearchRequest::CloudSearchRequest(CloudSearchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CloudSearch action to be performed by this request.
 *
 * @return The CloudSearch action to be performed by this request.
 */
CloudSearchRequest::Action CloudSearchRequest::action() const
{
    Q_D(const CloudSearchRequest);
    return d->action;
}

/**
 * @brief Get the name of the CloudSearch action to be performed by this request.
 *
 * @return The name of the CloudSearch action to be performed by this request.
 */
QString CloudSearchRequest::actionString() const
{
    return CloudSearchRequestPrivate::toString(action());
}

/**
 * @brief  Get the CloudSearch API version implemented by this request.
 *
 * @return The CloudSearch API version implmented by this request.
 */
QString CloudSearchRequest::apiVersion() const
{
    Q_D(const CloudSearchRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CloudSearch action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CloudSearchRequest::setAction(const Action action)
{
    Q_D(CloudSearchRequest);
    d->action = action;
}

/**
 * @brief  Set the CloudSearch API version to include in this request.
 *
 * @param  version  The CloudSearch API version to include in this request.
 */
void CloudSearchRequest::setApiVersion(const QString &version)
{
    Q_D(CloudSearchRequest);
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
bool CloudSearchRequest::operator==(const CloudSearchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CloudSearch queue name.
 *
 * @par From CloudSearch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudSearch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CloudSearchRequest::isValidQueueName(const QString &queueName)
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
int CloudSearchRequest::clearParameter(const QString &name)
{
    Q_D(CloudSearchRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CloudSearchRequest::clearParameters()
{
    Q_D(CloudSearchRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CloudSearch request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CloudSearchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudSearchRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CloudSearch request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CloudSearchRequest::parameters() const
{
    Q_D(const CloudSearchRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CloudSearch request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CloudSearchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudSearchRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CloudSearch request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CloudSearchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudSearchRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CloudSearch request.
 *
 * This CloudSearch implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CloudSearch request using the given \a endpoint.
 */
QNetworkRequest CloudSearchRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudSearchRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CloudSearchRequestPrivate
 *
 * @brief  Private implementation for CloudSearchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed by the \a q request.
 * @param  q       Pointer to this object's public CloudSearchRequest instance.
 */
CloudSearchRequestPrivate::CloudSearchRequestPrivate(const CloudSearchRequest::Action action, CloudSearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudSearchRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloudSearchRequest instance.
 */
CloudSearchRequestPrivate::CloudSearchRequestPrivate(const CloudSearchRequestPrivate &other,
                                     CloudSearchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CloudSearch action to a string.
 *
 * This function converts CloudSearchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudSearch service's Action
 * query parameters.
 *
 * @param  action  CloudSearch action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CloudSearchRequestPrivate::toString(const CloudSearchRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudSearchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudSearch
} // namespace QtAws
