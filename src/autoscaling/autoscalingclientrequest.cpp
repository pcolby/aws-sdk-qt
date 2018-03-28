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
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  AutoScalingClientRequest
 *
 * @brief  Interface class for providing AutoScaling requests
 */


/**
 * @brief  Constructs a new AutoScalingClientRequest object.
 *
 * @param  action  The AutoScaling action to request.
 */
AutoScalingClientRequest::AutoScalingClientRequest(const Action action)
    : AwsAbstractRequest(new AutoScalingClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new AutoScalingClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AutoScalingClientRequest::AutoScalingClientRequest(const AutoScalingClientRequest &other)
    : AwsAbstractRequest(new AutoScalingClientRequestPrivate(*other.d_func(), this))
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
AutoScalingClientRequest& AutoScalingClientRequest::operator=(const AutoScalingClientRequest &other)
{
    Q_D(AutoScalingClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AutoScalingClientRequest::AutoScalingClientRequest(AutoScalingClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the AutoScaling action to be performed by this request.
 *
 * @return The AutoScaling action to be performed by this request.
 */
AutoScalingClientRequest::Action AutoScalingClientRequest::action() const
{
    Q_D(const AutoScalingClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the AutoScaling action to be performed by this request.
 *
 * @return The name of the AutoScaling action to be performed by this request.
 */
QString AutoScalingClientRequest::actionString() const
{
    return AutoScalingClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the AutoScaling API version implemented by this request.
 *
 * @return The AutoScaling API version implmented by this request.
 */
QString AutoScalingClientRequest::apiVersion() const
{
    Q_D(const AutoScalingClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the AutoScaling action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void AutoScalingClientRequest::setAction(const Action action)
{
    Q_D(AutoScalingClientRequest);
    d->action = action;
}

/**
 * @brief  Set the AutoScaling API version to include in this request.
 *
 * @param  version  The AutoScaling API version to include in this request.
 */
void AutoScalingClientRequest::setApiVersion(const QString &version)
{
    Q_D(AutoScalingClientRequest);
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
bool AutoScalingClientRequest::operator==(const AutoScalingClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid AutoScaling queue name.
 *
 * @par From AutoScaling FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AutoScaling queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool AutoScalingClientRequest::isValidQueueName(const QString &queueName)
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
int AutoScalingClientRequest::clearParameter(const QString &name)
{
    Q_D(AutoScalingClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void AutoScalingClientRequest::clearParameters()
{
    Q_D(AutoScalingClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this AutoScaling request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant AutoScalingClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AutoScalingClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this AutoScaling request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &AutoScalingClientRequest::parameters() const
{
    Q_D(const AutoScalingClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this AutoScaling request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void AutoScalingClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AutoScalingClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this AutoScaling request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void AutoScalingClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AutoScalingClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this AutoScaling request.
 *
 * This AutoScaling implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this AutoScaling request using the given \a endpoint.
 */
QNetworkRequest AutoScalingClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AutoScalingClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  AutoScalingClientRequestPrivate
 *
 * @brief  Private implementation for AutoScalingClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingClientRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed by the \a q request.
 * @param  q       Pointer to this object's public AutoScalingClientRequest instance.
 */
AutoScalingClientRequestPrivate::AutoScalingClientRequestPrivate(const AutoScalingClientRequest::Action action, AutoScalingClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AutoScalingClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AutoScalingClientRequest instance.
 */
AutoScalingClientRequestPrivate::AutoScalingClientRequestPrivate(const AutoScalingClientRequestPrivate &other,
                                     AutoScalingClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and AutoScaling action to a string.
 *
 * This function converts AutoScalingClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AutoScaling service's Action
 * query parameters.
 *
 * @param  action  AutoScaling action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString AutoScalingClientRequestPrivate::toString(const AutoScalingClientRequest::Action &action)
{
    #define ActionToString(action) \
        case AutoScalingClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AutoScaling
} // namespace AWS
