// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplaceentitlementrequest.h"
#include "marketplaceentitlementrequest_p.h"

namespace QtAws {
namespace MarketplaceEntitlement {

/*!
 * \class QtAws::MarketplaceEntitlement::MarketplaceEntitlementRequest
 * \brief The MarketplaceEntitlementRequest class provides an interface for MarketplaceEntitlement requests.
 *
 * \inmodule QtAwsMarketplaceEntitlement
 */

/*!
 * \enum MarketplaceEntitlementRequest::Action
 *
 * This enum describes the actions that can be performed as MarketplaceEntitlement
 * requests.
 *
 * \value GetEntitlementsAction MarketplaceEntitlement GetEntitlements action.
 */

/*!
 * Constructs a MarketplaceEntitlementRequest object for MarketplaceEntitlement \a action.
 */
MarketplaceEntitlementRequest::MarketplaceEntitlementRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceEntitlementRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MarketplaceEntitlementRequest::MarketplaceEntitlementRequest(const MarketplaceEntitlementRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceEntitlementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MarketplaceEntitlementRequest object to be equal to \a other.
 */
MarketplaceEntitlementRequest& MarketplaceEntitlementRequest::operator=(const MarketplaceEntitlementRequest &other)
{
    Q_D(MarketplaceEntitlementRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MarketplaceEntitlementRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceEntitlementRequestPrivate.
 */
MarketplaceEntitlementRequest::MarketplaceEntitlementRequest(MarketplaceEntitlementRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MarketplaceEntitlement action to be performed by this request.
 */
MarketplaceEntitlementRequest::Action MarketplaceEntitlementRequest::action() const
{
    Q_D(const MarketplaceEntitlementRequest);
    return d->action;
}

/*!
 * Returns the name of the MarketplaceEntitlement action to be performed by this request.
 */
QString MarketplaceEntitlementRequest::actionString() const
{
    return MarketplaceEntitlementRequestPrivate::toString(action());
}

/*!
 * Returns the MarketplaceEntitlement API version implemented by this request.
 */
QString MarketplaceEntitlementRequest::apiVersion() const
{
    Q_D(const MarketplaceEntitlementRequest);
    return d->apiVersion;
}

/*!
 * Sets the MarketplaceEntitlement action to be performed by this request to \a action.
 */
void MarketplaceEntitlementRequest::setAction(const Action action)
{
    Q_D(MarketplaceEntitlementRequest);
    d->action = action;
}

/*!
 * Sets the MarketplaceEntitlement API version to include in this request to \a version.
 */
void MarketplaceEntitlementRequest::setApiVersion(const QString &version)
{
    Q_D(MarketplaceEntitlementRequest);
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
bool MarketplaceEntitlementRequest::operator==(const MarketplaceEntitlementRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MarketplaceEntitlement queue name.
 *
 * @par From MarketplaceEntitlement FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MarketplaceEntitlement queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MarketplaceEntitlementRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MarketplaceEntitlementRequest::clearParameter(const QString &name)
{
    Q_D(MarketplaceEntitlementRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MarketplaceEntitlementRequest::clearParameters()
{
    Q_D(MarketplaceEntitlementRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MarketplaceEntitlementRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MarketplaceEntitlementRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MarketplaceEntitlementRequest::parameters() const
{
    Q_D(const MarketplaceEntitlementRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MarketplaceEntitlementRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MarketplaceEntitlementRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MarketplaceEntitlementRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MarketplaceEntitlementRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MarketplaceEntitlement request using the given
 * \a endpoint.
 *
 * This MarketplaceEntitlement implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MarketplaceEntitlementRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MarketplaceEntitlementRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MarketplaceEntitlement::MarketplaceEntitlementRequestPrivate
 * \brief The MarketplaceEntitlementRequestPrivate class provides private implementation for MarketplaceEntitlementRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlement
 */

/*!
 * Constructs a MarketplaceEntitlementRequestPrivate object for MarketplaceEntitlement \a action,
 * with public implementation \a q.
 */
MarketplaceEntitlementRequestPrivate::MarketplaceEntitlementRequestPrivate(const MarketplaceEntitlementRequest::Action action, MarketplaceEntitlementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-01-11"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MarketplaceEntitlementRequest class's copy constructor.
 */
MarketplaceEntitlementRequestPrivate::MarketplaceEntitlementRequestPrivate(const MarketplaceEntitlementRequestPrivate &other,
                                     MarketplaceEntitlementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MarketplaceEntitlementRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MarketplaceEntitlement service's Action
 * query parameters.
 */
QString MarketplaceEntitlementRequestPrivate::toString(const MarketplaceEntitlementRequest::Action &action)
{
    #define ActionToString(action) \
        case MarketplaceEntitlementRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetEntitlements);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MarketplaceEntitlement
} // namespace QtAws
