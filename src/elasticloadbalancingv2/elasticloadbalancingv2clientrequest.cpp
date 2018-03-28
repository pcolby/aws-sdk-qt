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

#include "elasticloadbalancingv2clientrequest.h"
#include "elasticloadbalancingv2clientrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ElasticLoadBalancingv2ClientRequest
 *
 * @brief  Interface class for providing ElasticLoadBalancingv2 requests
 */


/**
 * @brief  Constructs a new ElasticLoadBalancingv2ClientRequest object.
 *
 * @param  action  The ElasticLoadBalancingv2 action to request.
 */
ElasticLoadBalancingv2ClientRequest::ElasticLoadBalancingv2ClientRequest(const Action action)
    : AwsAbstractRequest(new ElasticLoadBalancingv2ClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ElasticLoadBalancingv2ClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ElasticLoadBalancingv2ClientRequest::ElasticLoadBalancingv2ClientRequest(const ElasticLoadBalancingv2ClientRequest &other)
    : AwsAbstractRequest(new ElasticLoadBalancingv2ClientRequestPrivate(*other.d_func(), this))
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
ElasticLoadBalancingv2ClientRequest& ElasticLoadBalancingv2ClientRequest::operator=(const ElasticLoadBalancingv2ClientRequest &other)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingv2ClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ElasticLoadBalancingv2ClientRequest::ElasticLoadBalancingv2ClientRequest(ElasticLoadBalancingv2ClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ElasticLoadBalancingv2 action to be performed by this request.
 *
 * @return The ElasticLoadBalancingv2 action to be performed by this request.
 */
ElasticLoadBalancingv2ClientRequest::Action ElasticLoadBalancingv2ClientRequest::action() const
{
    Q_D(const ElasticLoadBalancingv2ClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ElasticLoadBalancingv2 action to be performed by this request.
 *
 * @return The name of the ElasticLoadBalancingv2 action to be performed by this request.
 */
QString ElasticLoadBalancingv2ClientRequest::actionString() const
{
    return ElasticLoadBalancingv2ClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ElasticLoadBalancingv2 API version implemented by this request.
 *
 * @return The ElasticLoadBalancingv2 API version implmented by this request.
 */
QString ElasticLoadBalancingv2ClientRequest::apiVersion() const
{
    Q_D(const ElasticLoadBalancingv2ClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ElasticLoadBalancingv2 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ElasticLoadBalancingv2ClientRequest::setAction(const Action action)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ElasticLoadBalancingv2 API version to include in this request.
 *
 * @param  version  The ElasticLoadBalancingv2 API version to include in this request.
 */
void ElasticLoadBalancingv2ClientRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
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
bool ElasticLoadBalancingv2ClientRequest::operator==(const ElasticLoadBalancingv2ClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ElasticLoadBalancingv2 queue name.
 *
 * @par From ElasticLoadBalancingv2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticLoadBalancingv2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ElasticLoadBalancingv2ClientRequest::isValidQueueName(const QString &queueName)
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
int ElasticLoadBalancingv2ClientRequest::clearParameter(const QString &name)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ElasticLoadBalancingv2ClientRequest::clearParameters()
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ElasticLoadBalancingv2 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ElasticLoadBalancingv2ClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticLoadBalancingv2ClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ElasticLoadBalancingv2 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ElasticLoadBalancingv2ClientRequest::parameters() const
{
    Q_D(const ElasticLoadBalancingv2ClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ElasticLoadBalancingv2 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ElasticLoadBalancingv2ClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ElasticLoadBalancingv2 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ElasticLoadBalancingv2ClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticLoadBalancingv2ClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ElasticLoadBalancingv2 request.
 *
 * This ElasticLoadBalancingv2 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ElasticLoadBalancingv2 request using the given \a endpoint.
 */
QNetworkRequest ElasticLoadBalancingv2ClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticLoadBalancingv2ClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingv2ClientRequestPrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingv2ClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ClientRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed by the \a q request.
 * @param  q       Pointer to this object's public ElasticLoadBalancingv2ClientRequest instance.
 */
ElasticLoadBalancingv2ClientRequestPrivate::ElasticLoadBalancingv2ClientRequestPrivate(const ElasticLoadBalancingv2ClientRequest::Action action, ElasticLoadBalancingv2ClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticLoadBalancingv2ClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ElasticLoadBalancingv2ClientRequest instance.
 */
ElasticLoadBalancingv2ClientRequestPrivate::ElasticLoadBalancingv2ClientRequestPrivate(const ElasticLoadBalancingv2ClientRequestPrivate &other,
                                     ElasticLoadBalancingv2ClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ElasticLoadBalancingv2 action to a string.
 *
 * This function converts ElasticLoadBalancingv2ClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticLoadBalancingv2 service's Action
 * query parameters.
 *
 * @param  action  ElasticLoadBalancingv2 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ElasticLoadBalancingv2ClientRequestPrivate::toString(const ElasticLoadBalancingv2ClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticLoadBalancingv2ClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
