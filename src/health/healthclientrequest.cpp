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

#include "healthclientrequest.h"
#include "healthclientrequest_p.h"

namespace QtAws {
namespace Health {

/**
 * @class  HealthClientRequest
 *
 * @brief  Interface class for providing Health requests
 */


/**
 * @brief  Constructs a new HealthClientRequest object.
 *
 * @param  action  The Health action to request.
 */
HealthClientRequest::HealthClientRequest(const Action action)
    : AwsAbstractRequest(new HealthClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new HealthClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
HealthClientRequest::HealthClientRequest(const HealthClientRequest &other)
    : AwsAbstractRequest(new HealthClientRequestPrivate(*other.d_func(), this))
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
HealthClientRequest& HealthClientRequest::operator=(const HealthClientRequest &other)
{
    Q_D(HealthClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new HealthClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
HealthClientRequest::HealthClientRequest(HealthClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Health action to be performed by this request.
 *
 * @return The Health action to be performed by this request.
 */
HealthClientRequest::Action HealthClientRequest::action() const
{
    Q_D(const HealthClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Health action to be performed by this request.
 *
 * @return The name of the Health action to be performed by this request.
 */
QString HealthClientRequest::actionString() const
{
    return HealthClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Health API version implemented by this request.
 *
 * @return The Health API version implmented by this request.
 */
QString HealthClientRequest::apiVersion() const
{
    Q_D(const HealthClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Health action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void HealthClientRequest::setAction(const Action action)
{
    Q_D(HealthClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Health API version to include in this request.
 *
 * @param  version  The Health API version to include in this request.
 */
void HealthClientRequest::setApiVersion(const QString &version)
{
    Q_D(HealthClientRequest);
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
bool HealthClientRequest::operator==(const HealthClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Health queue name.
 *
 * @par From Health FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Health queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool HealthClientRequest::isValidQueueName(const QString &queueName)
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
int HealthClientRequest::clearParameter(const QString &name)
{
    Q_D(HealthClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void HealthClientRequest::clearParameters()
{
    Q_D(HealthClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Health request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant HealthClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const HealthClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Health request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &HealthClientRequest::parameters() const
{
    Q_D(const HealthClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Health request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void HealthClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(HealthClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Health request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void HealthClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(HealthClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Health request.
 *
 * This Health implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Health request using the given \a endpoint.
 */
QNetworkRequest HealthClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const HealthClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  HealthClientRequestPrivate
 *
 * @brief  Private implementation for HealthClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HealthClientRequestPrivate object.
 *
 * @param  action  Health action being performed by the \a q request.
 * @param  q       Pointer to this object's public HealthClientRequest instance.
 */
HealthClientRequestPrivate::HealthClientRequestPrivate(const HealthClientRequest::Action action, HealthClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new HealthClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the HealthClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public HealthClientRequest instance.
 */
HealthClientRequestPrivate::HealthClientRequestPrivate(const HealthClientRequestPrivate &other,
                                     HealthClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Health action to a string.
 *
 * This function converts HealthClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Health service's Action
 * query parameters.
 *
 * @param  action  Health action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString HealthClientRequestPrivate::toString(const HealthClientRequest::Action &action)
{
    #define ActionToString(action) \
        case HealthClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Health
} // namespace QtAws
