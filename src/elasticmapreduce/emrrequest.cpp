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

#include "emrrequest.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  EMRRequest
 *
 * @brief  Interface class for providing EMR requests
 */


/**
 * @brief  Constructs a new EMRRequest object.
 *
 * @param  action  The EMR action to request.
 */
EMRRequest::EMRRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EMRRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new EMRRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EMRRequest::EMRRequest(const EMRRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EMRRequestPrivate(*other.d_func(), this))
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
EMRRequest& EMRRequest::operator=(const EMRRequest &other)
{
    Q_D(EMRRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new EMRRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EMRRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
EMRRequest::EMRRequest(EMRRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the EMR action to be performed by this request.
 *
 * @return The EMR action to be performed by this request.
 */
EMRRequest::Action EMRRequest::action() const
{
    Q_D(const EMRRequest);
    return d->action;
}

/**
 * @brief Get the name of the EMR action to be performed by this request.
 *
 * @return The name of the EMR action to be performed by this request.
 */
QString EMRRequest::actionString() const
{
    return EMRRequestPrivate::toString(action());
}

/**
 * @brief  Get the EMR API version implemented by this request.
 *
 * @return The EMR API version implmented by this request.
 */
QString EMRRequest::apiVersion() const
{
    Q_D(const EMRRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the EMR action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void EMRRequest::setAction(const Action action)
{
    Q_D(EMRRequest);
    d->action = action;
}

/**
 * @brief  Set the EMR API version to include in this request.
 *
 * @param  version  The EMR API version to include in this request.
 */
void EMRRequest::setApiVersion(const QString &version)
{
    Q_D(EMRRequest);
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
bool EMRRequest::operator==(const EMRRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid EMR queue name.
 *
 * @par From EMR FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EMR queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool EMRRequest::isValidQueueName(const QString &queueName)
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
int EMRRequest::clearParameter(const QString &name)
{
    Q_D(EMRRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void EMRRequest::clearParameters()
{
    Q_D(EMRRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this EMR request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant EMRRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EMRRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this EMR request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &EMRRequest::parameters() const
{
    Q_D(const EMRRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this EMR request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void EMRRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EMRRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this EMR request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void EMRRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EMRRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this EMR request.
 *
 * This EMR implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this EMR request using the given \a endpoint.
 */
QNetworkRequest EMRRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const EMRRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  EMRRequestPrivate
 *
 * @brief  Private implementation for EMRRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EMRRequestPrivate object.
 *
 * @param  action  EMR action being performed by the \a q request.
 * @param  q       Pointer to this object's public EMRRequest instance.
 */
EMRRequestPrivate::EMRRequestPrivate(const EMRRequest::Action action, EMRRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EMRRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EMRRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EMRRequest instance.
 */
EMRRequestPrivate::EMRRequestPrivate(const EMRRequestPrivate &other,
                                     EMRRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and EMR action to a string.
 *
 * This function converts EMRRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EMR service's Action
 * query parameters.
 *
 * @param  action  EMR action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString EMRRequestPrivate::toString(const EMRRequest::Action &action)
{
    #define ActionToString(action) \
        case EMRRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EMR
} // namespace QtAws
