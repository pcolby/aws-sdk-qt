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
#include "cloudhsmv2request_p.h"

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  CloudHSMV2ClientRequest
 *
 * @brief  Interface class for providing CloudHSMV2 requests
 */


/**
 * @brief  Constructs a new CloudHSMV2ClientRequest object.
 *
 * @param  action  The CloudHSMV2 action to request.
 */
CloudHSMV2ClientRequest::CloudHSMV2ClientRequest(const Action action)
    : AwsAbstractRequest(new CloudHSMV2ClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new CloudHSMV2ClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloudHSMV2ClientRequest::CloudHSMV2ClientRequest(const CloudHSMV2ClientRequest &other)
    : AwsAbstractRequest(new CloudHSMV2ClientRequestPrivate(*other.d_func(), this))
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
CloudHSMV2ClientRequest& CloudHSMV2ClientRequest::operator=(const CloudHSMV2ClientRequest &other)
{
    Q_D(CloudHSMV2ClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMV2ClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudHSMV2ClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
CloudHSMV2ClientRequest::CloudHSMV2ClientRequest(CloudHSMV2ClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the CloudHSMV2 action to be performed by this request.
 *
 * @return The CloudHSMV2 action to be performed by this request.
 */
CloudHSMV2ClientRequest::Action CloudHSMV2ClientRequest::action() const
{
    Q_D(const CloudHSMV2ClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the CloudHSMV2 action to be performed by this request.
 *
 * @return The name of the CloudHSMV2 action to be performed by this request.
 */
QString CloudHSMV2ClientRequest::actionString() const
{
    return CloudHSMV2ClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the CloudHSMV2 API version implemented by this request.
 *
 * @return The CloudHSMV2 API version implmented by this request.
 */
QString CloudHSMV2ClientRequest::apiVersion() const
{
    Q_D(const CloudHSMV2ClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the CloudHSMV2 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void CloudHSMV2ClientRequest::setAction(const Action action)
{
    Q_D(CloudHSMV2ClientRequest);
    d->action = action;
}

/**
 * @brief  Set the CloudHSMV2 API version to include in this request.
 *
 * @param  version  The CloudHSMV2 API version to include in this request.
 */
void CloudHSMV2ClientRequest::setApiVersion(const QString &version)
{
    Q_D(CloudHSMV2ClientRequest);
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
bool CloudHSMV2ClientRequest::operator==(const CloudHSMV2ClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid CloudHSMV2 queue name.
 *
 * @par From CloudHSMV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudHSMV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool CloudHSMV2ClientRequest::isValidQueueName(const QString &queueName)
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
int CloudHSMV2ClientRequest::clearParameter(const QString &name)
{
    Q_D(CloudHSMV2ClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void CloudHSMV2ClientRequest::clearParameters()
{
    Q_D(CloudHSMV2ClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this CloudHSMV2 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant CloudHSMV2ClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudHSMV2ClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this CloudHSMV2 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &CloudHSMV2ClientRequest::parameters() const
{
    Q_D(const CloudHSMV2ClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this CloudHSMV2 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void CloudHSMV2ClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudHSMV2ClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this CloudHSMV2 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void CloudHSMV2ClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudHSMV2ClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this CloudHSMV2 request.
 *
 * This CloudHSMV2 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this CloudHSMV2 request using the given \a endpoint.
 */
QNetworkRequest CloudHSMV2ClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CloudHSMV2ClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  CloudHSMV2ClientRequestPrivate
 *
 * @brief  Private implementation for CloudHSMV2ClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMV2ClientRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed by the \a q request.
 * @param  q       Pointer to this object's public CloudHSMV2ClientRequest instance.
 */
CloudHSMV2ClientRequestPrivate::CloudHSMV2ClientRequestPrivate(const CloudHSMV2ClientRequest::Action action, CloudHSMV2ClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMV2ClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudHSMV2ClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloudHSMV2ClientRequest instance.
 */
CloudHSMV2ClientRequestPrivate::CloudHSMV2ClientRequestPrivate(const CloudHSMV2ClientRequestPrivate &other,
                                     CloudHSMV2ClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and CloudHSMV2 action to a string.
 *
 * This function converts CloudHSMV2ClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudHSMV2 service's Action
 * query parameters.
 *
 * @param  action  CloudHSMV2 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString CloudHSMV2ClientRequestPrivate::toString(const CloudHSMV2ClientRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudHSMV2ClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudHSMV2
} // namespace AWS
