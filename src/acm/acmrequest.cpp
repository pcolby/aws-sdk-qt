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

#include "acmrequest.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/**
 * @class  ACMRequest
 *
 * @brief  Interface class for providing ACM requests
 */


/**
 * @brief  Constructs a new ACMRequest object.
 *
 * @param  action  The ACM action to request.
 */
ACMRequest::ACMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ACMRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ACMRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ACMRequest::ACMRequest(const ACMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ACMRequestPrivate(*other.d_func(), this))
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
ACMRequest& ACMRequest::operator=(const ACMRequest &other)
{
    Q_D(ACMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ACMRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ACMRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ACMRequest::ACMRequest(ACMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ACM action to be performed by this request.
 *
 * @return The ACM action to be performed by this request.
 */
ACMRequest::Action ACMRequest::action() const
{
    Q_D(const ACMRequest);
    return d->action;
}

/**
 * @brief Get the name of the ACM action to be performed by this request.
 *
 * @return The name of the ACM action to be performed by this request.
 */
QString ACMRequest::actionString() const
{
    return ACMRequestPrivate::toString(action());
}

/**
 * @brief  Get the ACM API version implemented by this request.
 *
 * @return The ACM API version implmented by this request.
 */
QString ACMRequest::apiVersion() const
{
    Q_D(const ACMRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ACM action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ACMRequest::setAction(const Action action)
{
    Q_D(ACMRequest);
    d->action = action;
}

/**
 * @brief  Set the ACM API version to include in this request.
 *
 * @param  version  The ACM API version to include in this request.
 */
void ACMRequest::setApiVersion(const QString &version)
{
    Q_D(ACMRequest);
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
bool ACMRequest::operator==(const ACMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ACM queue name.
 *
 * @par From ACM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ACM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ACMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int ACMRequest::clearParameter(const QString &name)
{
    Q_D(ACMRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ACMRequest::clearParameters()
{
    Q_D(ACMRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ACM request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ACMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ACMRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ACM request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ACMRequest::parameters() const
{
    Q_D(const ACMRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ACM request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ACMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ACMRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ACM request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ACMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ACMRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ACM request.
 *
 * This ACM implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ACM request using the given \a endpoint.
 */
QNetworkRequest ACMRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ACMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ACMRequestPrivate
 *
 * @brief  Private implementation for ACMRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ACMRequestPrivate object.
 *
 * @param  action  ACM action being performed by the \a q request.
 * @param  q       Pointer to this object's public ACMRequest instance.
 */
ACMRequestPrivate::ACMRequestPrivate(const ACMRequest::Action action, ACMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ACMRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ACMRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ACMRequest instance.
 */
ACMRequestPrivate::ACMRequestPrivate(const ACMRequestPrivate &other,
                                     ACMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ACM action to a string.
 *
 * This function converts ACMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ACM service's Action
 * query parameters.
 *
 * @param  action  ACM action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ACMRequestPrivate::toString(const ACMRequest::Action &action)
{
    #define ActionToString(action) \
        case ACMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ACM
} // namespace QtAws
