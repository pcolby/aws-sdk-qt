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
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GreengrassClientRequest
 *
 * @brief  Interface class for providing Greengrass requests
 */


/**
 * @brief  Constructs a new GreengrassClientRequest object.
 *
 * @param  action  The Greengrass action to request.
 */
GreengrassClientRequest::GreengrassClientRequest(const Action action)
    : AwsAbstractRequest(new GreengrassClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new GreengrassClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GreengrassClientRequest::GreengrassClientRequest(const GreengrassClientRequest &other)
    : AwsAbstractRequest(new GreengrassClientRequestPrivate(*other.d_func(), this))
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
GreengrassClientRequest& GreengrassClientRequest::operator=(const GreengrassClientRequest &other)
{
    Q_D(GreengrassClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new GreengrassClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
GreengrassClientRequest::GreengrassClientRequest(GreengrassClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Greengrass action to be performed by this request.
 *
 * @return The Greengrass action to be performed by this request.
 */
GreengrassClientRequest::Action GreengrassClientRequest::action() const
{
    Q_D(const GreengrassClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Greengrass action to be performed by this request.
 *
 * @return The name of the Greengrass action to be performed by this request.
 */
QString GreengrassClientRequest::actionString() const
{
    return GreengrassClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Greengrass API version implemented by this request.
 *
 * @return The Greengrass API version implmented by this request.
 */
QString GreengrassClientRequest::apiVersion() const
{
    Q_D(const GreengrassClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Greengrass action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void GreengrassClientRequest::setAction(const Action action)
{
    Q_D(GreengrassClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Greengrass API version to include in this request.
 *
 * @param  version  The Greengrass API version to include in this request.
 */
void GreengrassClientRequest::setApiVersion(const QString &version)
{
    Q_D(GreengrassClientRequest);
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
bool GreengrassClientRequest::operator==(const GreengrassClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Greengrass queue name.
 *
 * @par From Greengrass FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Greengrass queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool GreengrassClientRequest::isValidQueueName(const QString &queueName)
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
int GreengrassClientRequest::clearParameter(const QString &name)
{
    Q_D(GreengrassClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void GreengrassClientRequest::clearParameters()
{
    Q_D(GreengrassClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Greengrass request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant GreengrassClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GreengrassClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Greengrass request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &GreengrassClientRequest::parameters() const
{
    Q_D(const GreengrassClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Greengrass request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void GreengrassClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GreengrassClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Greengrass request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void GreengrassClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GreengrassClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Greengrass request.
 *
 * This Greengrass implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Greengrass request using the given \a endpoint.
 */
QNetworkRequest GreengrassClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const GreengrassClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  GreengrassClientRequestPrivate
 *
 * @brief  Private implementation for GreengrassClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GreengrassClientRequestPrivate object.
 *
 * @param  action  Greengrass action being performed by the \a q request.
 * @param  q       Pointer to this object's public GreengrassClientRequest instance.
 */
GreengrassClientRequestPrivate::GreengrassClientRequestPrivate(const GreengrassClientRequest::Action action, GreengrassClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GreengrassClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GreengrassClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GreengrassClientRequest instance.
 */
GreengrassClientRequestPrivate::GreengrassClientRequestPrivate(const GreengrassClientRequestPrivate &other,
                                     GreengrassClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Greengrass action to a string.
 *
 * This function converts GreengrassClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Greengrass service's Action
 * query parameters.
 *
 * @param  action  Greengrass action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString GreengrassClientRequestPrivate::toString(const GreengrassClientRequest::Action &action)
{
    #define ActionToString(action) \
        case GreengrassClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Greengrass
} // namespace AWS
