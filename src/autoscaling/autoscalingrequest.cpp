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

#include "autoscalingrequest.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  AutoScalingRequest
 *
 * @brief  Interface class for providing AutoScaling requests
 */


/**
 * @brief  Constructs a new AutoScalingRequest object.
 *
 * @param  action  The AutoScaling action to request.
 */
AutoScalingRequest::AutoScalingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new AutoScalingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AutoScalingRequest::AutoScalingRequest(const AutoScalingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingRequestPrivate(*other.d_func(), this))
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
AutoScalingRequest& AutoScalingRequest::operator=(const AutoScalingRequest &other)
{
    Q_D(AutoScalingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AutoScalingRequest::AutoScalingRequest(AutoScalingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the AutoScaling action to be performed by this request.
 *
 * @return The AutoScaling action to be performed by this request.
 */
AutoScalingRequest::Action AutoScalingRequest::action() const
{
    Q_D(const AutoScalingRequest);
    return d->action;
}

/**
 * @brief Get the name of the AutoScaling action to be performed by this request.
 *
 * @return The name of the AutoScaling action to be performed by this request.
 */
QString AutoScalingRequest::actionString() const
{
    return AutoScalingRequestPrivate::toString(action());
}

/**
 * @brief  Get the AutoScaling API version implemented by this request.
 *
 * @return The AutoScaling API version implmented by this request.
 */
QString AutoScalingRequest::apiVersion() const
{
    Q_D(const AutoScalingRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the AutoScaling action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void AutoScalingRequest::setAction(const Action action)
{
    Q_D(AutoScalingRequest);
    d->action = action;
}

/**
 * @brief  Set the AutoScaling API version to include in this request.
 *
 * @param  version  The AutoScaling API version to include in this request.
 */
void AutoScalingRequest::setApiVersion(const QString &version)
{
    Q_D(AutoScalingRequest);
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
bool AutoScalingRequest::operator==(const AutoScalingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
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
bool AutoScalingRequest::isValidQueueName(const QString &queueName)
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
int AutoScalingRequest::clearParameter(const QString &name)
{
    Q_D(AutoScalingRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void AutoScalingRequest::clearParameters()
{
    Q_D(AutoScalingRequest);
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
QVariant AutoScalingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AutoScalingRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this AutoScaling request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &AutoScalingRequest::parameters() const
{
    Q_D(const AutoScalingRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this AutoScaling request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void AutoScalingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AutoScalingRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this AutoScaling request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void AutoScalingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AutoScalingRequest);
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
QNetworkRequest AutoScalingRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AutoScalingRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  AutoScalingRequestPrivate
 *
 * @brief  Private implementation for AutoScalingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed by the \a q request.
 * @param  q       Pointer to this object's public AutoScalingRequest instance.
 */
AutoScalingRequestPrivate::AutoScalingRequestPrivate(const AutoScalingRequest::Action action, AutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AutoScalingRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AutoScalingRequest instance.
 */
AutoScalingRequestPrivate::AutoScalingRequestPrivate(const AutoScalingRequestPrivate &other,
                                     AutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and AutoScaling action to a string.
 *
 * This function converts AutoScalingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AutoScaling service's Action
 * query parameters.
 *
 * @param  action  AutoScaling action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString AutoScalingRequestPrivate::toString(const AutoScalingRequest::Action &action)
{
    #define ActionToString(action) \
        case AutoScalingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AutoScaling
} // namespace QtAws
