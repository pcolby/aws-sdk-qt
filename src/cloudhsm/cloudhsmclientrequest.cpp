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

#include "cloudhsmclientrequest.h"
#include "cloudhsmclientrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  CloudHSMClientRequest
 *
 * @brief  Interface class for providing CloudHSM requests
 */


/**
 * @brief  Constructs a new CloudHSMClientRequest object.
 *
 * @param  action  The CloudHSM action to request.
 */
CloudHSMClientRequest::CloudHSMClientRequest(const Action action)
    : AwsAbstractRequest(new CloudHSMClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CloudHSMClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloudHSMClientRequest::CloudHSMClientRequest(const CloudHSMClientRequest &other)
    : AwsAbstractRequest(new CloudHSMClientRequestPrivate(*other.d_func(), this))
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
CloudHSMClientRequest& CloudHSMClientRequest::operator=(const CloudHSMClientRequest &other)
{
    Q_D(CloudHSMClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CloudHSMClientRequest::CloudHSMClientRequest(CloudHSMClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CloudHSM action to be performed by this request.
 *
 * @return The CloudHSM action to be performed by this request.
 */
CloudHSMClientRequest::Action CloudHSMClientRequest::action() const
{
    Q_D(const CloudHSMClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the CloudHSM action to be performed by this request.
 *
 * @return The name of the CloudHSM action to be performed by this request.
 */
QString CloudHSMClientRequest::actionString() const
{
    return CloudHSMClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the CloudHSM API version implemented by this request.
 *
 * @return The CloudHSM API version implmented by this request.
 */
QString CloudHSMClientRequest::apiVersion() const
{
    Q_D(const CloudHSMClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CloudHSM action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CloudHSMClientRequest::setAction(const Action action)
{
    Q_D(CloudHSMClientRequest);
    d->action = action;
}

/**
 * @brief  Set the CloudHSM API version to include in this request.
 *
 * @param  version  The CloudHSM API version to include in this request.
 */
void CloudHSMClientRequest::setApiVersion(const QString &version)
{
    Q_D(CloudHSMClientRequest);
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
bool CloudHSMClientRequest::operator==(const CloudHSMClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CloudHSM queue name.
 *
 * @par From CloudHSM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHSM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CloudHSMClientRequest::isValidQueueName(const QString &queueName)
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
int CloudHSMClientRequest::clearParameter(const QString &name)
{
    Q_D(CloudHSMClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CloudHSMClientRequest::clearParameters()
{
    Q_D(CloudHSMClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CloudHSM request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CloudHSMClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHSMClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CloudHSM request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CloudHSMClientRequest::parameters() const
{
    Q_D(const CloudHSMClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CloudHSM request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CloudHSMClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHSMClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CloudHSM request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CloudHSMClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHSMClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CloudHSM request.
 *
 * This CloudHSM implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CloudHSM request using the given \a endpoint.
 */
QNetworkRequest CloudHSMClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudHSMClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CloudHSMClientRequestPrivate
 *
 * @brief  Private implementation for CloudHSMClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMClientRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed by the \a q request.
 * @param  q       Pointer to this object's public CloudHSMClientRequest instance.
 */
CloudHSMClientRequestPrivate::CloudHSMClientRequestPrivate(const CloudHSMClientRequest::Action action, CloudHSMClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHSMClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloudHSMClientRequest instance.
 */
CloudHSMClientRequestPrivate::CloudHSMClientRequestPrivate(const CloudHSMClientRequestPrivate &other,
                                     CloudHSMClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CloudHSM action to a string.
 *
 * This function converts CloudHSMClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHSM service's Action
 * query parameters.
 *
 * @param  action  CloudHSM action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CloudHSMClientRequestPrivate::toString(const CloudHSMClientRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudHSMClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHSM
} // namespace AWS
