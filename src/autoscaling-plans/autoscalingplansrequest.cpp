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

#include "autoscalingplansrequest.h"
#include "autoscalingplansrequest_p.h"

namespace QtAws {
namespace AutoScalingPlans {

/**
 * @class  AutoScalingPlansRequest
 *
 * @brief  Interface class for providing AutoScalingPlans requests
 */


/**
 * @brief  Constructs a new AutoScalingPlansRequest object.
 *
 * @param  action  The AutoScalingPlans action to request.
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingPlansRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new AutoScalingPlansRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(const AutoScalingPlansRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingPlansRequestPrivate(*other.d_func(), this))
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
AutoScalingPlansRequest& AutoScalingPlansRequest::operator=(const AutoScalingPlansRequest &other)
{
    Q_D(AutoScalingPlansRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingPlansRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AutoScalingPlansRequest::AutoScalingPlansRequest(AutoScalingPlansRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the AutoScalingPlans action to be performed by this request.
 *
 * @return The AutoScalingPlans action to be performed by this request.
 */
AutoScalingPlansRequest::Action AutoScalingPlansRequest::action() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->action;
}

/**
 * @brief Get the name of the AutoScalingPlans action to be performed by this request.
 *
 * @return The name of the AutoScalingPlans action to be performed by this request.
 */
QString AutoScalingPlansRequest::actionString() const
{
    return AutoScalingPlansRequestPrivate::toString(action());
}

/**
 * @brief  Get the AutoScalingPlans API version implemented by this request.
 *
 * @return The AutoScalingPlans API version implmented by this request.
 */
QString AutoScalingPlansRequest::apiVersion() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the AutoScalingPlans action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void AutoScalingPlansRequest::setAction(const Action action)
{
    Q_D(AutoScalingPlansRequest);
    d->action = action;
}

/**
 * @brief  Set the AutoScalingPlans API version to include in this request.
 *
 * @param  version  The AutoScalingPlans API version to include in this request.
 */
void AutoScalingPlansRequest::setApiVersion(const QString &version)
{
    Q_D(AutoScalingPlansRequest);
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
bool AutoScalingPlansRequest::operator==(const AutoScalingPlansRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid AutoScalingPlans queue name.
 *
 * @par From AutoScalingPlans FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AutoScalingPlans queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool AutoScalingPlansRequest::isValidQueueName(const QString &queueName)
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
int AutoScalingPlansRequest::clearParameter(const QString &name)
{
    Q_D(AutoScalingPlansRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void AutoScalingPlansRequest::clearParameters()
{
    Q_D(AutoScalingPlansRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this AutoScalingPlans request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant AutoScalingPlansRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AutoScalingPlansRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this AutoScalingPlans request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &AutoScalingPlansRequest::parameters() const
{
    Q_D(const AutoScalingPlansRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this AutoScalingPlans request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void AutoScalingPlansRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AutoScalingPlansRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this AutoScalingPlans request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void AutoScalingPlansRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AutoScalingPlansRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this AutoScalingPlans request.
 *
 * This AutoScalingPlans implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this AutoScalingPlans request using the given \a endpoint.
 */
QNetworkRequest AutoScalingPlansRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AutoScalingPlansRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  AutoScalingPlansRequestPrivate
 *
 * @brief  Private implementation for AutoScalingPlansRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansRequestPrivate object.
 *
 * @param  action  AutoScalingPlans action being performed by the \a q request.
 * @param  q       Pointer to this object's public AutoScalingPlansRequest instance.
 */
AutoScalingPlansRequestPrivate::AutoScalingPlansRequestPrivate(const AutoScalingPlansRequest::Action action, AutoScalingPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AutoScalingPlansRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AutoScalingPlansRequest instance.
 */
AutoScalingPlansRequestPrivate::AutoScalingPlansRequestPrivate(const AutoScalingPlansRequestPrivate &other,
                                     AutoScalingPlansRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and AutoScalingPlans action to a string.
 *
 * This function converts AutoScalingPlansRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AutoScalingPlans service's Action
 * query parameters.
 *
 * @param  action  AutoScalingPlans action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString AutoScalingPlansRequestPrivate::toString(const AutoScalingPlansRequest::Action &action)
{
    #define ActionToString(action) \
        case AutoScalingPlansRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AutoScalingPlans
} // namespace QtAws
