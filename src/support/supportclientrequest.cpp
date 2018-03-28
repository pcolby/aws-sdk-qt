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

#include "supportclientrequest.h"
#include "supportclientrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  SupportClientRequest
 *
 * @brief  Interface class for providing Support requests
 */


/**
 * @brief  Constructs a new SupportClientRequest object.
 *
 * @param  action  The Support action to request.
 */
SupportClientRequest::SupportClientRequest(const Action action)
    : AwsAbstractRequest(new SupportClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SupportClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SupportClientRequest::SupportClientRequest(const SupportClientRequest &other)
    : AwsAbstractRequest(new SupportClientRequestPrivate(*other.d_func(), this))
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
SupportClientRequest& SupportClientRequest::operator=(const SupportClientRequest &other)
{
    Q_D(SupportClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SupportClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SupportClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SupportClientRequest::SupportClientRequest(SupportClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Support action to be performed by this request.
 *
 * @return The Support action to be performed by this request.
 */
SupportClientRequest::Action SupportClientRequest::action() const
{
    Q_D(const SupportClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Support action to be performed by this request.
 *
 * @return The name of the Support action to be performed by this request.
 */
QString SupportClientRequest::actionString() const
{
    return SupportClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Support API version implemented by this request.
 *
 * @return The Support API version implmented by this request.
 */
QString SupportClientRequest::apiVersion() const
{
    Q_D(const SupportClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Support action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SupportClientRequest::setAction(const Action action)
{
    Q_D(SupportClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Support API version to include in this request.
 *
 * @param  version  The Support API version to include in this request.
 */
void SupportClientRequest::setApiVersion(const QString &version)
{
    Q_D(SupportClientRequest);
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
bool SupportClientRequest::operator==(const SupportClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Support queue name.
 *
 * @par From Support FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Support queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool SupportClientRequest::isValidQueueName(const QString &queueName)
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
int SupportClientRequest::clearParameter(const QString &name)
{
    Q_D(SupportClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SupportClientRequest::clearParameters()
{
    Q_D(SupportClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Support request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SupportClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SupportClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Support request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SupportClientRequest::parameters() const
{
    Q_D(const SupportClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Support request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SupportClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SupportClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Support request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SupportClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SupportClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Support request.
 *
 * This Support implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Support request using the given \a endpoint.
 */
QNetworkRequest SupportClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SupportClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SupportClientRequestPrivate
 *
 * @brief  Private implementation for SupportClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SupportClientRequestPrivate object.
 *
 * @param  action  Support action being performed by the \a q request.
 * @param  q       Pointer to this object's public SupportClientRequest instance.
 */
SupportClientRequestPrivate::SupportClientRequestPrivate(const SupportClientRequest::Action action, SupportClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SupportClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SupportClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SupportClientRequest instance.
 */
SupportClientRequestPrivate::SupportClientRequestPrivate(const SupportClientRequestPrivate &other,
                                     SupportClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Support action to a string.
 *
 * This function converts SupportClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Support service's Action
 * query parameters.
 *
 * @param  action  Support action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SupportClientRequestPrivate::toString(const SupportClientRequest::Action &action)
{
    #define ActionToString(action) \
        case SupportClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Support
} // namespace AWS
