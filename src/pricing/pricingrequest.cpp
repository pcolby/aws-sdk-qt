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

/*!
 * \class QtAws::Pricing::PricingRequest
 *
 * \brief The PricingRequest class provides an interface for Pricing requests.
 *
 * \ingroup Pricing
 */

/*!
 * @brief  Constructs a new PricingRequest object.
 *
 * @param  action  The Pricing action to request.
 */
PricingRequest::PricingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new PricingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PricingRequest::PricingRequest(const PricingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(*other.d_func(), this))
{

}

/*!
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

/*!
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

/*!
 * \brief Returns the Pricing action to be performed by this request.
 */
PricingRequest::Action PricingRequest::action() const
{
    Q_D(const PricingRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the Pricing action to be performed by this request.
 */
QString PricingRequest::actionString() const
{
    return PricingRequestPrivate::toString(action());
}

/*!
 * \brief Returns the Pricing API version implemented by this request.
 */
QString PricingRequest::apiVersion() const
{
    Q_D(const PricingRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the Pricing action to be performed by this request to \a action.
 */
void PricingRequest::setAction(const Action action)
{
    Q_D(PricingRequest);
    d->action = action;
}

/*!
 * Set the Pricing API version to include in this request to \a version.
 */
void PricingRequest::setApiVersion(const QString &version)
{
    Q_D(PricingRequest);
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool PricingRequest::operator==(const PricingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
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

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int PricingRequest::clearParameter(const QString &name)
{
    Q_D(PricingRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void PricingRequest::clearParameters()
{
    Q_D(PricingRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant PricingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PricingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &PricingRequest::parameters() const
{
    Q_D(const PricingRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void PricingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PricingRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void PricingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PricingRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this Pricing request using the given \a endpoint.
 *
 * This Pricing implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest PricingRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const PricingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  PricingRequestPrivate
 *
 * \brief  Private implementation for PricingRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new PricingRequestPrivate object.
 */
PricingRequestPrivate::PricingRequestPrivate(const PricingRequest::Action action, PricingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new PricingRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PricingRequest class's copy constructor.
 */
PricingRequestPrivate::PricingRequestPrivate(const PricingRequestPrivate &other,
                                     PricingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts PricingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Pricing service's Action
 * query parameters.
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
