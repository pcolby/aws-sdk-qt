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

#include "request.h"
#include "request_p.h"
#include "response.h"
#include "cloudtrailrequest_p.h"

namespace AWS {
namespace CloudTrail {

/**
 * @class  CloudTrailClientRequest
 *
 * @brief  Interface class for providing CloudTrail requests
 */


/**
 * @brief  Constructs a new CloudTrailClientRequest object.
 *
 * @param  action  The CloudTrail action to request.
 */
CloudTrailClientRequest::CloudTrailClientRequest(const Action action)
    : AwsAbstractRequest(new CloudTrailClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CloudTrailClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloudTrailClientRequest::CloudTrailClientRequest(const CloudTrailClientRequest &other)
    : AwsAbstractRequest(new CloudTrailClientRequestPrivate(*other.d_func(), this))
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
CloudTrailClientRequest& CloudTrailClientRequest::operator=(const CloudTrailClientRequest &other)
{
    Q_D(CloudTrailClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CloudTrailClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudTrailClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CloudTrailClientRequest::CloudTrailClientRequest(CloudTrailClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CloudTrail action to be performed by this request.
 *
 * @return The CloudTrail action to be performed by this request.
 */
CloudTrailClientRequest::Action CloudTrailClientRequest::action() const
{
    Q_D(const CloudTrailClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the CloudTrail action to be performed by this request.
 *
 * @return The name of the CloudTrail action to be performed by this request.
 */
QString CloudTrailClientRequest::actionString() const
{
    return CloudTrailClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the CloudTrail API version implemented by this request.
 *
 * @return The CloudTrail API version implmented by this request.
 */
QString CloudTrailClientRequest::apiVersion() const
{
    Q_D(const CloudTrailClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CloudTrail action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CloudTrailClientRequest::setAction(const Action action)
{
    Q_D(CloudTrailClientRequest);
    d->action = action;
}

/**
 * @brief  Set the CloudTrail API version to include in this request.
 *
 * @param  version  The CloudTrail API version to include in this request.
 */
void CloudTrailClientRequest::setApiVersion(const QString &version)
{
    Q_D(CloudTrailClientRequest);
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
bool CloudTrailClientRequest::operator==(const CloudTrailClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CloudTrail queue name.
 *
 * @par From CloudTrail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudTrail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CloudTrailClientRequest::isValidQueueName(const QString &queueName)
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
int CloudTrailClientRequest::clearParameter(const QString &name)
{
    Q_D(CloudTrailClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CloudTrailClientRequest::clearParameters()
{
    Q_D(CloudTrailClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CloudTrail request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CloudTrailClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudTrailClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CloudTrail request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CloudTrailClientRequest::parameters() const
{
    Q_D(const CloudTrailClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CloudTrail request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CloudTrailClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudTrailClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CloudTrail request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CloudTrailClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudTrailClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CloudTrail request.
 *
 * This CloudTrail implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CloudTrail request using the given \a endpoint.
 */
QNetworkRequest CloudTrailClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudTrailClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CloudTrailClientRequestPrivate
 *
 * @brief  Private implementation for CloudTrailClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudTrailClientRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed by the \a q request.
 * @param  q       Pointer to this object's public CloudTrailClientRequest instance.
 */
CloudTrailClientRequestPrivate::CloudTrailClientRequestPrivate(const CloudTrailClientRequest::Action action, CloudTrailClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudTrailClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudTrailClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloudTrailClientRequest instance.
 */
CloudTrailClientRequestPrivate::CloudTrailClientRequestPrivate(const CloudTrailClientRequestPrivate &other,
                                     CloudTrailClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CloudTrail action to a string.
 *
 * This function converts CloudTrailClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudTrail service's Action
 * query parameters.
 *
 * @param  action  CloudTrail action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CloudTrailClientRequestPrivate::toString(const CloudTrailClientRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudTrailClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudTrail
} // namespace AWS
