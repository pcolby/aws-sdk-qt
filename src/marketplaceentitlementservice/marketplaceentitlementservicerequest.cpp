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

#include "marketplaceentitlementservicerequest.h"
#include "marketplaceentitlementservicerequest_p.h"

namespace QtAws {
namespace MarketplaceEntitlementService {

/*!
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceRequest
 * \brief The MarketplaceEntitlementServiceRequest class provides an interface for MarketplaceEntitlementService requests.
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * \enum MarketplaceEntitlementServiceRequest::Action
 *
 * This enum describes the actions that can be performed as MarketplaceEntitlementService
 * requests.
 *
 * \value GetEntitlementsAction MarketplaceEntitlementService GetEntitlements action.
 */

/*!
 * Constructs a MarketplaceEntitlementServiceRequest object for MarketplaceEntitlementService \a action.
 */
MarketplaceEntitlementServiceRequest::MarketplaceEntitlementServiceRequest(const Action action)
    : d_ptr(new MarketplaceEntitlementServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MarketplaceEntitlementServiceRequest::MarketplaceEntitlementServiceRequest(const MarketplaceEntitlementServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new MarketplaceEntitlementServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MarketplaceEntitlementServiceRequest object to be equal to \a other.
 */
MarketplaceEntitlementServiceRequest& MarketplaceEntitlementServiceRequest::operator=(const MarketplaceEntitlementServiceRequest &other)
{
    Q_D(MarketplaceEntitlementServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MarketplaceEntitlementServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceEntitlementServiceRequestPrivate.
 */
MarketplaceEntitlementServiceRequest::MarketplaceEntitlementServiceRequest(MarketplaceEntitlementServiceRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the MarketplaceEntitlementService action to be performed by this request.
 */
MarketplaceEntitlementServiceRequest::Action MarketplaceEntitlementServiceRequest::action() const
{
    Q_D(const MarketplaceEntitlementServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the MarketplaceEntitlementService action to be performed by this request.
 */
QString MarketplaceEntitlementServiceRequest::actionString() const
{
    return MarketplaceEntitlementServiceRequestPrivate::toString(action());
}

/*!
 * Returns the MarketplaceEntitlementService API version implemented by this request.
 */
QString MarketplaceEntitlementServiceRequest::apiVersion() const
{
    Q_D(const MarketplaceEntitlementServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the MarketplaceEntitlementService action to be performed by this request to \a action.
 */
void MarketplaceEntitlementServiceRequest::setAction(const Action action)
{
    Q_D(MarketplaceEntitlementServiceRequest);
    d->action = action;
}

/*!
 * Sets the MarketplaceEntitlementService API version to include in this request to \a version.
 */
void MarketplaceEntitlementServiceRequest::setApiVersion(const QString &version)
{
    Q_D(MarketplaceEntitlementServiceRequest);
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
bool MarketplaceEntitlementServiceRequest::operator==(const MarketplaceEntitlementServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MarketplaceEntitlementService queue name.
 *
 * @par From MarketplaceEntitlementService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MarketplaceEntitlementService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MarketplaceEntitlementServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MarketplaceEntitlementServiceRequest::clearParameter(const QString &name)
{
    Q_D(MarketplaceEntitlementServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MarketplaceEntitlementServiceRequest::clearParameters()
{
    Q_D(MarketplaceEntitlementServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MarketplaceEntitlementServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MarketplaceEntitlementServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MarketplaceEntitlementServiceRequest::parameters() const
{
    Q_D(const MarketplaceEntitlementServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MarketplaceEntitlementServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MarketplaceEntitlementServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MarketplaceEntitlementServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MarketplaceEntitlementServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MarketplaceEntitlementService request using the given
 * \a endpoint.
 *
 * This MarketplaceEntitlementService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MarketplaceEntitlementServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MarketplaceEntitlementServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceRequestPrivate
 * \brief The MarketplaceEntitlementServiceRequestPrivate class provides private implementation for MarketplaceEntitlementServiceRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * Constructs a MarketplaceEntitlementServiceRequestPrivate object for MarketplaceEntitlementService \a action,
 * with public implementation \a q.
 */
MarketplaceEntitlementServiceRequestPrivate::MarketplaceEntitlementServiceRequestPrivate(const MarketplaceEntitlementServiceRequest::Action action, MarketplaceEntitlementServiceRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MarketplaceEntitlementServiceRequest class's copy constructor.
 */
MarketplaceEntitlementServiceRequestPrivate::MarketplaceEntitlementServiceRequestPrivate(const MarketplaceEntitlementServiceRequestPrivate &other,
                                     MarketplaceEntitlementServiceRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MarketplaceEntitlementServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MarketplaceEntitlementService service's Action
 * query parameters.
 */
QString MarketplaceEntitlementServiceRequestPrivate::toString(const MarketplaceEntitlementServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case MarketplaceEntitlementServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetEntitlements);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
