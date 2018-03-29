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

#include "route53request.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  Route53Request
 *
 * @brief  Interface class for providing Route53 requests
 */


/**
 * @brief  Constructs a new Route53Request object.
 *
 * @param  action  The Route53 action to request.
 */
Route53Request::Route53Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53RequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new Route53Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
Route53Request::Route53Request(const Route53Request &other)
    : QtAws::Core::AwsAbstractRequest(new Route53RequestPrivate(*other.d_func(), this))
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
Route53Request& Route53Request::operator=(const Route53Request &other)
{
    Q_D(Route53Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new Route53Request object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
Route53Request::Route53Request(Route53RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Route53 action to be performed by this request.
 *
 * @return The Route53 action to be performed by this request.
 */
Route53Request::Action Route53Request::action() const
{
    Q_D(const Route53Request);
    return d->action;
}

/**
 * @brief Get the name of the Route53 action to be performed by this request.
 *
 * @return The name of the Route53 action to be performed by this request.
 */
QString Route53Request::actionString() const
{
    return Route53RequestPrivate::toString(action());
}

/**
 * @brief  Get the Route53 API version implemented by this request.
 *
 * @return The Route53 API version implmented by this request.
 */
QString Route53Request::apiVersion() const
{
    Q_D(const Route53Request);
    return d->apiVersion;
}

/**
 * @brief  Set the Route53 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void Route53Request::setAction(const Action action)
{
    Q_D(Route53Request);
    d->action = action;
}

/**
 * @brief  Set the Route53 API version to include in this request.
 *
 * @param  version  The Route53 API version to include in this request.
 */
void Route53Request::setApiVersion(const QString &version)
{
    Q_D(Route53Request);
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
bool Route53Request::operator==(const Route53Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Route53 queue name.
 *
 * @par From Route53 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool Route53Request::isValidQueueName(const QString &queueName)
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
int Route53Request::clearParameter(const QString &name)
{
    Q_D(Route53Request);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void Route53Request::clearParameters()
{
    Q_D(Route53Request);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Route53 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant Route53Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53Request);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Route53 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &Route53Request::parameters() const
{
    Q_D(const Route53Request);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Route53 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void Route53Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53Request);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Route53 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void Route53Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53Request);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Route53 request.
 *
 * This Route53 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Route53 request using the given \a endpoint.
 */
QNetworkRequest Route53Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const Route53Request);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  Route53RequestPrivate
 *
 * @brief  Private implementation for Route53Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Route53RequestPrivate object.
 *
 * @param  action  Route53 action being performed by the \a q request.
 * @param  q       Pointer to this object's public Route53Request instance.
 */
Route53RequestPrivate::Route53RequestPrivate(const Route53Request::Action action, Route53Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new Route53RequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53Request class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public Route53Request instance.
 */
Route53RequestPrivate::Route53RequestPrivate(const Route53RequestPrivate &other,
                                     Route53Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Route53 action to a string.
 *
 * This function converts Route53Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53 service's Action
 * query parameters.
 *
 * @param  action  Route53 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString Route53RequestPrivate::toString(const Route53Request::Action &action)
{
    #define ActionToString(action) \
        case Route53Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53
} // namespace QtAws
