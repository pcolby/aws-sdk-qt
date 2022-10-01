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

#include "privatenetworksrequest.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::PrivateNetworksRequest
 * \brief The PrivateNetworksRequest class provides an interface for PrivateNetworks requests.
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * \enum PrivateNetworksRequest::Action
 *
 * This enum describes the actions that can be performed as PrivateNetworks
 * requests.
 *
 * \value AcknowledgeOrderReceiptAction PrivateNetworks AcknowledgeOrderReceipt action.
 * \value ActivateDeviceIdentifierAction PrivateNetworks ActivateDeviceIdentifier action.
 * \value ActivateNetworkSiteAction PrivateNetworks ActivateNetworkSite action.
 * \value ConfigureAccessPointAction PrivateNetworks ConfigureAccessPoint action.
 * \value CreateNetworkAction PrivateNetworks CreateNetwork action.
 * \value CreateNetworkSiteAction PrivateNetworks CreateNetworkSite action.
 * \value DeactivateDeviceIdentifierAction PrivateNetworks DeactivateDeviceIdentifier action.
 * \value DeleteNetworkAction PrivateNetworks DeleteNetwork action.
 * \value DeleteNetworkSiteAction PrivateNetworks DeleteNetworkSite action.
 * \value GetDeviceIdentifierAction PrivateNetworks GetDeviceIdentifier action.
 * \value GetNetworkAction PrivateNetworks GetNetwork action.
 * \value GetNetworkResourceAction PrivateNetworks GetNetworkResource action.
 * \value GetNetworkSiteAction PrivateNetworks GetNetworkSite action.
 * \value GetOrderAction PrivateNetworks GetOrder action.
 * \value ListDeviceIdentifiersAction PrivateNetworks ListDeviceIdentifiers action.
 * \value ListNetworkResourcesAction PrivateNetworks ListNetworkResources action.
 * \value ListNetworkSitesAction PrivateNetworks ListNetworkSites action.
 * \value ListNetworksAction PrivateNetworks ListNetworks action.
 * \value ListOrdersAction PrivateNetworks ListOrders action.
 * \value ListTagsForResourceAction PrivateNetworks ListTagsForResource action.
 * \value PingAction PrivateNetworks Ping action.
 * \value TagResourceAction PrivateNetworks TagResource action.
 * \value UntagResourceAction PrivateNetworks UntagResource action.
 * \value UpdateNetworkSiteAction PrivateNetworks UpdateNetworkSite action.
 * \value UpdateNetworkSitePlanAction PrivateNetworks UpdateNetworkSitePlan action.
 */

/*!
 * Constructs a PrivateNetworksRequest object for PrivateNetworks \a action.
 */
PrivateNetworksRequest::PrivateNetworksRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PrivateNetworksRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PrivateNetworksRequest::PrivateNetworksRequest(const PrivateNetworksRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PrivateNetworksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PrivateNetworksRequest object to be equal to \a other.
 */
PrivateNetworksRequest& PrivateNetworksRequest::operator=(const PrivateNetworksRequest &other)
{
    Q_D(PrivateNetworksRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PrivateNetworksRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PrivateNetworksRequestPrivate.
 */
PrivateNetworksRequest::PrivateNetworksRequest(PrivateNetworksRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PrivateNetworks action to be performed by this request.
 */
PrivateNetworksRequest::Action PrivateNetworksRequest::action() const
{
    Q_D(const PrivateNetworksRequest);
    return d->action;
}

/*!
 * Returns the name of the PrivateNetworks action to be performed by this request.
 */
QString PrivateNetworksRequest::actionString() const
{
    return PrivateNetworksRequestPrivate::toString(action());
}

/*!
 * Returns the PrivateNetworks API version implemented by this request.
 */
QString PrivateNetworksRequest::apiVersion() const
{
    Q_D(const PrivateNetworksRequest);
    return d->apiVersion;
}

/*!
 * Sets the PrivateNetworks action to be performed by this request to \a action.
 */
void PrivateNetworksRequest::setAction(const Action action)
{
    Q_D(PrivateNetworksRequest);
    d->action = action;
}

/*!
 * Sets the PrivateNetworks API version to include in this request to \a version.
 */
void PrivateNetworksRequest::setApiVersion(const QString &version)
{
    Q_D(PrivateNetworksRequest);
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
bool PrivateNetworksRequest::operator==(const PrivateNetworksRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PrivateNetworks queue name.
 *
 * @par From PrivateNetworks FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PrivateNetworks queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PrivateNetworksRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PrivateNetworksRequest::clearParameter(const QString &name)
{
    Q_D(PrivateNetworksRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PrivateNetworksRequest::clearParameters()
{
    Q_D(PrivateNetworksRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PrivateNetworksRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PrivateNetworksRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PrivateNetworksRequest::parameters() const
{
    Q_D(const PrivateNetworksRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PrivateNetworksRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PrivateNetworksRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PrivateNetworksRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PrivateNetworksRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PrivateNetworks request using the given
 * \a endpoint.
 *
 * This PrivateNetworks implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PrivateNetworksRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PrivateNetworksRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PrivateNetworks::PrivateNetworksRequestPrivate
 * \brief The PrivateNetworksRequestPrivate class provides private implementation for PrivateNetworksRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PrivateNetworksRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
PrivateNetworksRequestPrivate::PrivateNetworksRequestPrivate(const PrivateNetworksRequest::Action action, PrivateNetworksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-12-03"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PrivateNetworksRequest class's copy constructor.
 */
PrivateNetworksRequestPrivate::PrivateNetworksRequestPrivate(const PrivateNetworksRequestPrivate &other,
                                     PrivateNetworksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PrivateNetworksRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PrivateNetworks service's Action
 * query parameters.
 */
QString PrivateNetworksRequestPrivate::toString(const PrivateNetworksRequest::Action &action)
{
    #define ActionToString(action) \
        case PrivateNetworksRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcknowledgeOrderReceipt);
        ActionToString(ActivateDeviceIdentifier);
        ActionToString(ActivateNetworkSite);
        ActionToString(ConfigureAccessPoint);
        ActionToString(CreateNetwork);
        ActionToString(CreateNetworkSite);
        ActionToString(DeactivateDeviceIdentifier);
        ActionToString(DeleteNetwork);
        ActionToString(DeleteNetworkSite);
        ActionToString(GetDeviceIdentifier);
        ActionToString(GetNetwork);
        ActionToString(GetNetworkResource);
        ActionToString(GetNetworkSite);
        ActionToString(GetOrder);
        ActionToString(ListDeviceIdentifiers);
        ActionToString(ListNetworkResources);
        ActionToString(ListNetworkSites);
        ActionToString(ListNetworks);
        ActionToString(ListOrders);
        ActionToString(ListTagsForResource);
        ActionToString(Ping);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateNetworkSite);
        ActionToString(UpdateNetworkSitePlan);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PrivateNetworks
} // namespace QtAws
