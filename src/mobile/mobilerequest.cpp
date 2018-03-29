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

#include "mobilerequest.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/**
 * @class  MobileRequest
 *
 * @brief  Interface class for providing Mobile requests
 */


/**
 * @brief  Constructs a new MobileRequest object.
 *
 * @param  action  The Mobile action to request.
 */
MobileRequest::MobileRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MobileRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new MobileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MobileRequest::MobileRequest(const MobileRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MobileRequestPrivate(*other.d_func(), this))
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
MobileRequest& MobileRequest::operator=(const MobileRequest &other)
{
    Q_D(MobileRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new MobileRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
MobileRequest::MobileRequest(MobileRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Mobile action to be performed by this request.
 *
 * @return The Mobile action to be performed by this request.
 */
MobileRequest::Action MobileRequest::action() const
{
    Q_D(const MobileRequest);
    return d->action;
}

/**
 * @brief Get the name of the Mobile action to be performed by this request.
 *
 * @return The name of the Mobile action to be performed by this request.
 */
QString MobileRequest::actionString() const
{
    return MobileRequestPrivate::toString(action());
}

/**
 * @brief  Get the Mobile API version implemented by this request.
 *
 * @return The Mobile API version implmented by this request.
 */
QString MobileRequest::apiVersion() const
{
    Q_D(const MobileRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Mobile action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void MobileRequest::setAction(const Action action)
{
    Q_D(MobileRequest);
    d->action = action;
}

/**
 * @brief  Set the Mobile API version to include in this request.
 *
 * @param  version  The Mobile API version to include in this request.
 */
void MobileRequest::setApiVersion(const QString &version)
{
    Q_D(MobileRequest);
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
bool MobileRequest::operator==(const MobileRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Mobile queue name.
 *
 * @par From Mobile FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Mobile queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool MobileRequest::isValidQueueName(const QString &queueName)
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
int MobileRequest::clearParameter(const QString &name)
{
    Q_D(MobileRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void MobileRequest::clearParameters()
{
    Q_D(MobileRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Mobile request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant MobileRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MobileRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Mobile request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &MobileRequest::parameters() const
{
    Q_D(const MobileRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Mobile request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void MobileRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MobileRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Mobile request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void MobileRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MobileRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Mobile request.
 *
 * This Mobile implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Mobile request using the given \a endpoint.
 */
QNetworkRequest MobileRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MobileRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  MobileRequestPrivate
 *
 * @brief  Private implementation for MobileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MobileRequestPrivate object.
 *
 * @param  action  Mobile action being performed by the \a q request.
 * @param  q       Pointer to this object's public MobileRequest instance.
 */
MobileRequestPrivate::MobileRequestPrivate(const MobileRequest::Action action, MobileRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MobileRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MobileRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MobileRequest instance.
 */
MobileRequestPrivate::MobileRequestPrivate(const MobileRequestPrivate &other,
                                     MobileRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Mobile action to a string.
 *
 * This function converts MobileRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Mobile service's Action
 * query parameters.
 *
 * @param  action  Mobile action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString MobileRequestPrivate::toString(const MobileRequest::Action &action)
{
    #define ActionToString(action) \
        case MobileRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Mobile
} // namespace QtAws
