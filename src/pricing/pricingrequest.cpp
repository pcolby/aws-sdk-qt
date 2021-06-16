/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pricingrequest.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::PricingRequest
 * \brief The PricingRequest class provides an interface for Pricing requests.
 *
 * \inmodule QtAwsPricing
 */

/*!
 * \enum PricingRequest::Action
 *
 * This enum describes the actions that can be performed as Pricing
 * requests.
 *
 * \value DescribeServicesAction Pricing DescribeServices action.
 * \value GetAttributeValuesAction Pricing GetAttributeValues action.
 * \value GetProductsAction Pricing GetProducts action.
 */

/*!
 * Constructs a PricingRequest object for Pricing \a action.
 */
PricingRequest::PricingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PricingRequest::PricingRequest(const PricingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PricingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PricingRequest object to be equal to \a other.
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
 * Constructs aa PricingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PricingRequestPrivate.
 */
PricingRequest::PricingRequest(PricingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Pricing action to be performed by this request.
 */
PricingRequest::Action PricingRequest::action() const
{
    Q_D(const PricingRequest);
    return d->action;
}

/*!
 * Returns the name of the Pricing action to be performed by this request.
 */
QString PricingRequest::actionString() const
{
    return PricingRequestPrivate::toString(action());
}

/*!
 * Returns the Pricing API version implemented by this request.
 */
QString PricingRequest::apiVersion() const
{
    Q_D(const PricingRequest);
    return d->apiVersion;
}

/*!
 * Sets the Pricing action to be performed by this request to \a action.
 */
void PricingRequest::setAction(const Action action)
{
    Q_D(PricingRequest);
    d->action = action;
}

/*!
 * Sets the Pricing API version to include in this request to \a version.
 */
void PricingRequest::setApiVersion(const QString &version)
{
    Q_D(PricingRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
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

/*
 * Returns \c tue if \a queueName is a valid Pricing queue name.
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
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PricingRequest::clearParameter(const QString &name)
{
    Q_D(PricingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PricingRequest::clearParameters()
{
    Q_D(PricingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PricingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PricingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PricingRequest::parameters() const
{
    Q_D(const PricingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PricingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PricingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PricingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PricingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Pricing request using the given
 * \a endpoint.
 *
 * This Pricing implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PricingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PricingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Pricing::PricingRequestPrivate
 * \brief The PricingRequestPrivate class provides private implementation for PricingRequest.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a PricingRequestPrivate object for Pricing \a action,
 * with public implementation \a q.
 */
PricingRequestPrivate::PricingRequestPrivate(const PricingRequest::Action action, PricingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
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
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PricingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Pricing service's Action
 * query parameters.
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
