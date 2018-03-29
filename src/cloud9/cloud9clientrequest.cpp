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

#include "cloud9clientrequest.h"
#include "cloud9clientrequest_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  Cloud9ClientRequest
 *
 * @brief  Interface class for providing Cloud9 requests
 */


/**
 * @brief  Constructs a new Cloud9ClientRequest object.
 *
 * @param  action  The Cloud9 action to request.
 */
Cloud9ClientRequest::Cloud9ClientRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Cloud9ClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new Cloud9ClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
Cloud9ClientRequest::Cloud9ClientRequest(const Cloud9ClientRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Cloud9ClientRequestPrivate(*other.d_func(), this))
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
Cloud9ClientRequest& Cloud9ClientRequest::operator=(const Cloud9ClientRequest &other)
{
    Q_D(Cloud9ClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Cloud9ClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
Cloud9ClientRequest::Cloud9ClientRequest(Cloud9ClientRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Cloud9 action to be performed by this request.
 *
 * @return The Cloud9 action to be performed by this request.
 */
Cloud9ClientRequest::Action Cloud9ClientRequest::action() const
{
    Q_D(const Cloud9ClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Cloud9 action to be performed by this request.
 *
 * @return The name of the Cloud9 action to be performed by this request.
 */
QString Cloud9ClientRequest::actionString() const
{
    return Cloud9ClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Cloud9 API version implemented by this request.
 *
 * @return The Cloud9 API version implmented by this request.
 */
QString Cloud9ClientRequest::apiVersion() const
{
    Q_D(const Cloud9ClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Cloud9 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void Cloud9ClientRequest::setAction(const Action action)
{
    Q_D(Cloud9ClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Cloud9 API version to include in this request.
 *
 * @param  version  The Cloud9 API version to include in this request.
 */
void Cloud9ClientRequest::setApiVersion(const QString &version)
{
    Q_D(Cloud9ClientRequest);
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
bool Cloud9ClientRequest::operator==(const Cloud9ClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Cloud9 queue name.
 *
 * @par From Cloud9 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Cloud9 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool Cloud9ClientRequest::isValidQueueName(const QString &queueName)
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
int Cloud9ClientRequest::clearParameter(const QString &name)
{
    Q_D(Cloud9ClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void Cloud9ClientRequest::clearParameters()
{
    Q_D(Cloud9ClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Cloud9 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant Cloud9ClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Cloud9ClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Cloud9 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &Cloud9ClientRequest::parameters() const
{
    Q_D(const Cloud9ClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Cloud9 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void Cloud9ClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Cloud9ClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Cloud9 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void Cloud9ClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Cloud9ClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Cloud9 request.
 *
 * This Cloud9 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Cloud9 request using the given \a endpoint.
 */
QNetworkRequest Cloud9ClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const Cloud9ClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  Cloud9ClientRequestPrivate
 *
 * @brief  Private implementation for Cloud9ClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientRequestPrivate object.
 *
 * @param  action  Cloud9 action being performed by the \a q request.
 * @param  q       Pointer to this object's public Cloud9ClientRequest instance.
 */
Cloud9ClientRequestPrivate::Cloud9ClientRequestPrivate(const Cloud9ClientRequest::Action action, Cloud9ClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9ClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Cloud9ClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public Cloud9ClientRequest instance.
 */
Cloud9ClientRequestPrivate::Cloud9ClientRequestPrivate(const Cloud9ClientRequestPrivate &other,
                                     Cloud9ClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Cloud9 action to a string.
 *
 * This function converts Cloud9ClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Cloud9 service's Action
 * query parameters.
 *
 * @param  action  Cloud9 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString Cloud9ClientRequestPrivate::toString(const Cloud9ClientRequest::Action &action)
{
    #define ActionToString(action) \
        case Cloud9ClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Cloud9
} // namespace QtAws
