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

#include "smsrequest.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  SMSRequest
 *
 * @brief  Interface class for providing SMS requests
 */


/**
 * @brief  Constructs a new SMSRequest object.
 *
 * @param  action  The SMS action to request.
 */
SMSRequest::SMSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SMSRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SMSRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SMSRequest::SMSRequest(const SMSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SMSRequestPrivate(*other.d_func(), this))
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
SMSRequest& SMSRequest::operator=(const SMSRequest &other)
{
    Q_D(SMSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SMSRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SMSRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SMSRequest::SMSRequest(SMSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SMS action to be performed by this request.
 *
 * @return The SMS action to be performed by this request.
 */
SMSRequest::Action SMSRequest::action() const
{
    Q_D(const SMSRequest);
    return d->action;
}

/**
 * @brief Get the name of the SMS action to be performed by this request.
 *
 * @return The name of the SMS action to be performed by this request.
 */
QString SMSRequest::actionString() const
{
    return SMSRequestPrivate::toString(action());
}

/**
 * @brief  Get the SMS API version implemented by this request.
 *
 * @return The SMS API version implmented by this request.
 */
QString SMSRequest::apiVersion() const
{
    Q_D(const SMSRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the SMS action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SMSRequest::setAction(const Action action)
{
    Q_D(SMSRequest);
    d->action = action;
}

/**
 * @brief  Set the SMS API version to include in this request.
 *
 * @param  version  The SMS API version to include in this request.
 */
void SMSRequest::setApiVersion(const QString &version)
{
    Q_D(SMSRequest);
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
bool SMSRequest::operator==(const SMSRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid SMS queue name.
 *
 * @par From SMS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SMS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SMSRequest::isValidQueueName(const QString &queueName)
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
int SMSRequest::clearParameter(const QString &name)
{
    Q_D(SMSRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SMSRequest::clearParameters()
{
    Q_D(SMSRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this SMS request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SMSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SMSRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this SMS request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SMSRequest::parameters() const
{
    Q_D(const SMSRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this SMS request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SMSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SMSRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this SMS request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SMSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SMSRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this SMS request.
 *
 * This SMS implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this SMS request using the given \a endpoint.
 */
QNetworkRequest SMSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SMSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SMSRequestPrivate
 *
 * @brief  Private implementation for SMSRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SMSRequestPrivate object.
 *
 * @param  action  SMS action being performed by the \a q request.
 * @param  q       Pointer to this object's public SMSRequest instance.
 */
SMSRequestPrivate::SMSRequestPrivate(const SMSRequest::Action action, SMSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SMSRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SMSRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SMSRequest instance.
 */
SMSRequestPrivate::SMSRequestPrivate(const SMSRequestPrivate &other,
                                     SMSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and SMS action to a string.
 *
 * This function converts SMSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SMS service's Action
 * query parameters.
 *
 * @param  action  SMS action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SMSRequestPrivate::toString(const SMSRequest::Action &action)
{
    #define ActionToString(action) \
        case SMSRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SMS
} // namespace QtAws
