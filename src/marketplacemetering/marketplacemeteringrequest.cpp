/*
    Copyright 2013-2018 Paul Colby

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

#include "marketplacemeteringrequest.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringRequest
 * \brief The MarketplaceMeteringRequest class provides an interface for MarketplaceMetering requests.
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * \enum MarketplaceMeteringRequest::Action
 *
 * This enum describes the actions that can be performed as MarketplaceMetering
 * requests.
 *
 * \value BatchMeterUsageAction MarketplaceMetering BatchMeterUsage action.
 * \value MeterUsageAction MarketplaceMetering MeterUsage action.
 * \value RegisterUsageAction MarketplaceMetering RegisterUsage action.
 * \value ResolveCustomerAction MarketplaceMetering ResolveCustomer action.
 */

/*!
 * Constructs a MarketplaceMeteringRequest object for MarketplaceMetering \a action.
 */
MarketplaceMeteringRequest::MarketplaceMeteringRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceMeteringRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MarketplaceMeteringRequest::MarketplaceMeteringRequest(const MarketplaceMeteringRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceMeteringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MarketplaceMeteringRequest object to be equal to \a other.
 */
MarketplaceMeteringRequest& MarketplaceMeteringRequest::operator=(const MarketplaceMeteringRequest &other)
{
    Q_D(MarketplaceMeteringRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MarketplaceMeteringRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceMeteringRequestPrivate.
 */
MarketplaceMeteringRequest::MarketplaceMeteringRequest(MarketplaceMeteringRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MarketplaceMetering action to be performed by this request.
 */
MarketplaceMeteringRequest::Action MarketplaceMeteringRequest::action() const
{
    Q_D(const MarketplaceMeteringRequest);
    return d->action;
}

/*!
 * Returns the name of the MarketplaceMetering action to be performed by this request.
 */
QString MarketplaceMeteringRequest::actionString() const
{
    return MarketplaceMeteringRequestPrivate::toString(action());
}

/*!
 * Returns the MarketplaceMetering API version implemented by this request.
 */
QString MarketplaceMeteringRequest::apiVersion() const
{
    Q_D(const MarketplaceMeteringRequest);
    return d->apiVersion;
}

/*!
 * Sets the MarketplaceMetering action to be performed by this request to \a action.
 */
void MarketplaceMeteringRequest::setAction(const Action action)
{
    Q_D(MarketplaceMeteringRequest);
    d->action = action;
}

/*!
 * Sets the MarketplaceMetering API version to include in this request to \a version.
 */
void MarketplaceMeteringRequest::setApiVersion(const QString &version)
{
    Q_D(MarketplaceMeteringRequest);
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
bool MarketplaceMeteringRequest::operator==(const MarketplaceMeteringRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MarketplaceMetering queue name.
 *
 * @par From MarketplaceMetering FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MarketplaceMetering queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MarketplaceMeteringRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MarketplaceMeteringRequest::clearParameter(const QString &name)
{
    Q_D(MarketplaceMeteringRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MarketplaceMeteringRequest::clearParameters()
{
    Q_D(MarketplaceMeteringRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MarketplaceMeteringRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MarketplaceMeteringRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MarketplaceMeteringRequest::parameters() const
{
    Q_D(const MarketplaceMeteringRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MarketplaceMeteringRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MarketplaceMeteringRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MarketplaceMeteringRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MarketplaceMeteringRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MarketplaceMetering request using the given
 * \a endpoint.
 *
 * This MarketplaceMetering implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MarketplaceMeteringRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MarketplaceMeteringRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringRequestPrivate
 * \brief The MarketplaceMeteringRequestPrivate class provides private implementation for MarketplaceMeteringRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a MarketplaceMeteringRequestPrivate object for MarketplaceMetering \a action,
 * with public implementation \a q.
 */
MarketplaceMeteringRequestPrivate::MarketplaceMeteringRequestPrivate(const MarketplaceMeteringRequest::Action action, MarketplaceMeteringRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MarketplaceMeteringRequest class's copy constructor.
 */
MarketplaceMeteringRequestPrivate::MarketplaceMeteringRequestPrivate(const MarketplaceMeteringRequestPrivate &other,
                                     MarketplaceMeteringRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MarketplaceMeteringRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MarketplaceMetering service's Action
 * query parameters.
 */
QString MarketplaceMeteringRequestPrivate::toString(const MarketplaceMeteringRequest::Action &action)
{
    #define ActionToString(action) \
        case MarketplaceMeteringRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MarketplaceMetering
} // namespace QtAws
