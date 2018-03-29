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

#include "pricingrequest.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/**
 * @class  PricingRequest
 *
 * @brief  Interface class for providing Pricing requests
 */


/**
 * @brief  Constructs a new PricingRequest object.
 *
 * @param  action  The Pricing action to request.
 */
PricingRequest::PricingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new PricingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PricingRequest::PricingRequest(const PricingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(*other.d_func(), this))
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
PricingRequest& PricingRequest::operator=(const PricingRequest &other)
{
    Q_D(PricingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new PricingRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PricingRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
PricingRequest::PricingRequest(PricingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Pricing action to be performed by this request.
 *
 * @return The Pricing action to be performed by this request.
 */
PricingRequest::Action PricingRequest::action() const
{
    Q_D(const PricingRequest);
    return d->action;
}

/**
 * @brief Get the name of the Pricing action to be performed by this request.
 *
 * @return The name of the Pricing action to be performed by this request.
 */
QString PricingRequest::actionString() const
{
    return PricingRequestPrivate::toString(action());
}

/**
 * @brief  Get the Pricing API version implemented by this request.
 *
 * @return The Pricing API version implmented by this request.
 */
QString PricingRequest::apiVersion() const
{
    Q_D(const PricingRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Pricing action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void PricingRequest::setAction(const Action action)
{
    Q_D(PricingRequest);
    d->action = action;
}

/**
 * @brief  Set the Pricing API version to include in this request.
 *
 * @param  version  The Pricing API version to include in this request.
 */
void PricingRequest::setApiVersion(const QString &version)
{
    Q_D(PricingRequest);
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
bool PricingRequest::operator==(const PricingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Pricing queue name.
 *
 * @par From Pricing FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Pricing queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PricingRequest::isValidQueueName(const QString &queueName)
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
int PricingRequest::clearParameter(const QString &name)
{
    Q_D(PricingRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void PricingRequest::clearParameters()
{
    Q_D(PricingRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Pricing request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant PricingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PricingRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Pricing request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &PricingRequest::parameters() const
{
    Q_D(const PricingRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Pricing request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void PricingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PricingRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Pricing request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void PricingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PricingRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Pricing request.
 *
 * This Pricing implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Pricing request using the given \a endpoint.
 */
QNetworkRequest PricingRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const PricingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  PricingRequestPrivate
 *
 * @brief  Private implementation for PricingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PricingRequestPrivate object.
 *
 * @param  action  Pricing action being performed by the \a q request.
 * @param  q       Pointer to this object's public PricingRequest instance.
 */
PricingRequestPrivate::PricingRequestPrivate(const PricingRequest::Action action, PricingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PricingRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PricingRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PricingRequest instance.
 */
PricingRequestPrivate::PricingRequestPrivate(const PricingRequestPrivate &other,
                                     PricingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Pricing action to a string.
 *
 * This function converts PricingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Pricing service's Action
 * query parameters.
 *
 * @param  action  Pricing action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString PricingRequestPrivate::toString(const PricingRequest::Action &action)
{
    #define ActionToString(action) \
        case PricingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Pricing
} // namespace QtAws
