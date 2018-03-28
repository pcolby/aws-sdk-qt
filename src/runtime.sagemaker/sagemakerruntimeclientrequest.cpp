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
#include "sagemakerruntimerequest_p.h"

namespace AWS {
namespace SageMakerRuntime {

/**
 * @class  SageMakerRuntimeClientRequest
 *
 * @brief  Interface class for providing SageMakerRuntime requests
 */


/**
 * @brief  Constructs a new SageMakerRuntimeClientRequest object.
 *
 * @param  action  The SageMakerRuntime action to request.
 */
SageMakerRuntimeClientRequest::SageMakerRuntimeClientRequest(const Action action)
    : AwsAbstractRequest(new SageMakerRuntimeClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SageMakerRuntimeClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SageMakerRuntimeClientRequest::SageMakerRuntimeClientRequest(const SageMakerRuntimeClientRequest &other)
    : AwsAbstractRequest(new SageMakerRuntimeClientRequestPrivate(*other.d_func(), this))
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
SageMakerRuntimeClientRequest& SageMakerRuntimeClientRequest::operator=(const SageMakerRuntimeClientRequest &other)
{
    Q_D(SageMakerRuntimeClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRuntimeClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRuntimeClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SageMakerRuntimeClientRequest::SageMakerRuntimeClientRequest(SageMakerRuntimeClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SageMakerRuntime action to be performed by this request.
 *
 * @return The SageMakerRuntime action to be performed by this request.
 */
SageMakerRuntimeClientRequest::Action SageMakerRuntimeClientRequest::action() const
{
    Q_D(const SageMakerRuntimeClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the SageMakerRuntime action to be performed by this request.
 *
 * @return The name of the SageMakerRuntime action to be performed by this request.
 */
QString SageMakerRuntimeClientRequest::actionString() const
{
    return SageMakerRuntimeClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the SageMakerRuntime API version implemented by this request.
 *
 * @return The SageMakerRuntime API version implmented by this request.
 */
QString SageMakerRuntimeClientRequest::apiVersion() const
{
    Q_D(const SageMakerRuntimeClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the SageMakerRuntime action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SageMakerRuntimeClientRequest::setAction(const Action action)
{
    Q_D(SageMakerRuntimeClientRequest);
    d->action = action;
}

/**
 * @brief  Set the SageMakerRuntime API version to include in this request.
 *
 * @param  version  The SageMakerRuntime API version to include in this request.
 */
void SageMakerRuntimeClientRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerRuntimeClientRequest);
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
bool SageMakerRuntimeClientRequest::operator==(const SageMakerRuntimeClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid SageMakerRuntime queue name.
 *
 * @par From SageMakerRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMakerRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool SageMakerRuntimeClientRequest::isValidQueueName(const QString &queueName)
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
int SageMakerRuntimeClientRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerRuntimeClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SageMakerRuntimeClientRequest::clearParameters()
{
    Q_D(SageMakerRuntimeClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this SageMakerRuntime request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SageMakerRuntimeClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerRuntimeClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this SageMakerRuntime request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SageMakerRuntimeClientRequest::parameters() const
{
    Q_D(const SageMakerRuntimeClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this SageMakerRuntime request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SageMakerRuntimeClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerRuntimeClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this SageMakerRuntime request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SageMakerRuntimeClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerRuntimeClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this SageMakerRuntime request.
 *
 * This SageMakerRuntime implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this SageMakerRuntime request using the given \a endpoint.
 */
QNetworkRequest SageMakerRuntimeClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SageMakerRuntimeClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SageMakerRuntimeClientRequestPrivate
 *
 * @brief  Private implementation for SageMakerRuntimeClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRuntimeClientRequestPrivate object.
 *
 * @param  action  SageMakerRuntime action being performed by the \a q request.
 * @param  q       Pointer to this object's public SageMakerRuntimeClientRequest instance.
 */
SageMakerRuntimeClientRequestPrivate::SageMakerRuntimeClientRequestPrivate(const SageMakerRuntimeClientRequest::Action action, SageMakerRuntimeClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRuntimeClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerRuntimeClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SageMakerRuntimeClientRequest instance.
 */
SageMakerRuntimeClientRequestPrivate::SageMakerRuntimeClientRequestPrivate(const SageMakerRuntimeClientRequestPrivate &other,
                                     SageMakerRuntimeClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and SageMakerRuntime action to a string.
 *
 * This function converts SageMakerRuntimeClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMakerRuntime service's Action
 * query parameters.
 *
 * @param  action  SageMakerRuntime action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SageMakerRuntimeClientRequestPrivate::toString(const SageMakerRuntimeClientRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerRuntimeClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMakerRuntime
} // namespace AWS
