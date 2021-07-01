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

#include "networkmanagerrequest.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::NetworkManagerRequest
 * \brief The NetworkManagerRequest class provides an interface for NetworkManager requests.
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * \enum NetworkManagerRequest::Action
 *
 * This enum describes the actions that can be performed as NetworkManager
 * requests.
 *
 * \value AssociateCustomerGatewayAction NetworkManager AssociateCustomerGateway action.
 * \value AssociateLinkAction NetworkManager AssociateLink action.
 * \value AssociateTransitGatewayConnectPeerAction NetworkManager AssociateTransitGatewayConnectPeer action.
 * \value CreateConnectionAction NetworkManager CreateConnection action.
 * \value CreateDeviceAction NetworkManager CreateDevice action.
 * \value CreateGlobalNetworkAction NetworkManager CreateGlobalNetwork action.
 * \value CreateLinkAction NetworkManager CreateLink action.
 * \value CreateSiteAction NetworkManager CreateSite action.
 * \value DeleteConnectionAction NetworkManager DeleteConnection action.
 * \value DeleteDeviceAction NetworkManager DeleteDevice action.
 * \value DeleteGlobalNetworkAction NetworkManager DeleteGlobalNetwork action.
 * \value DeleteLinkAction NetworkManager DeleteLink action.
 * \value DeleteSiteAction NetworkManager DeleteSite action.
 * \value DeregisterTransitGatewayAction NetworkManager DeregisterTransitGateway action.
 * \value DescribeGlobalNetworksAction NetworkManager DescribeGlobalNetworks action.
 * \value DisassociateCustomerGatewayAction NetworkManager DisassociateCustomerGateway action.
 * \value DisassociateLinkAction NetworkManager DisassociateLink action.
 * \value DisassociateTransitGatewayConnectPeerAction NetworkManager DisassociateTransitGatewayConnectPeer action.
 * \value GetConnectionsAction NetworkManager GetConnections action.
 * \value GetCustomerGatewayAssociationsAction NetworkManager GetCustomerGatewayAssociations action.
 * \value GetDevicesAction NetworkManager GetDevices action.
 * \value GetLinkAssociationsAction NetworkManager GetLinkAssociations action.
 * \value GetLinksAction NetworkManager GetLinks action.
 * \value GetSitesAction NetworkManager GetSites action.
 * \value GetTransitGatewayConnectPeerAssociationsAction NetworkManager GetTransitGatewayConnectPeerAssociations action.
 * \value GetTransitGatewayRegistrationsAction NetworkManager GetTransitGatewayRegistrations action.
 * \value ListTagsForResourceAction NetworkManager ListTagsForResource action.
 * \value RegisterTransitGatewayAction NetworkManager RegisterTransitGateway action.
 * \value TagResourceAction NetworkManager TagResource action.
 * \value UntagResourceAction NetworkManager UntagResource action.
 * \value UpdateConnectionAction NetworkManager UpdateConnection action.
 * \value UpdateDeviceAction NetworkManager UpdateDevice action.
 * \value UpdateGlobalNetworkAction NetworkManager UpdateGlobalNetwork action.
 * \value UpdateLinkAction NetworkManager UpdateLink action.
 * \value UpdateSiteAction NetworkManager UpdateSite action.
 */

/*!
 * Constructs a NetworkManagerRequest object for NetworkManager \a action.
 */
NetworkManagerRequest::NetworkManagerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new NetworkManagerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
NetworkManagerRequest::NetworkManagerRequest(const NetworkManagerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new NetworkManagerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the NetworkManagerRequest object to be equal to \a other.
 */
NetworkManagerRequest& NetworkManagerRequest::operator=(const NetworkManagerRequest &other)
{
    Q_D(NetworkManagerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa NetworkManagerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NetworkManagerRequestPrivate.
 */
NetworkManagerRequest::NetworkManagerRequest(NetworkManagerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the NetworkManager action to be performed by this request.
 */
NetworkManagerRequest::Action NetworkManagerRequest::action() const
{
    Q_D(const NetworkManagerRequest);
    return d->action;
}

/*!
 * Returns the name of the NetworkManager action to be performed by this request.
 */
QString NetworkManagerRequest::actionString() const
{
    return NetworkManagerRequestPrivate::toString(action());
}

/*!
 * Returns the NetworkManager API version implemented by this request.
 */
QString NetworkManagerRequest::apiVersion() const
{
    Q_D(const NetworkManagerRequest);
    return d->apiVersion;
}

/*!
 * Sets the NetworkManager action to be performed by this request to \a action.
 */
void NetworkManagerRequest::setAction(const Action action)
{
    Q_D(NetworkManagerRequest);
    d->action = action;
}

/*!
 * Sets the NetworkManager API version to include in this request to \a version.
 */
void NetworkManagerRequest::setApiVersion(const QString &version)
{
    Q_D(NetworkManagerRequest);
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
bool NetworkManagerRequest::operator==(const NetworkManagerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid NetworkManager queue name.
 *
 * @par From NetworkManager FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid NetworkManager queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool NetworkManagerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int NetworkManagerRequest::clearParameter(const QString &name)
{
    Q_D(NetworkManagerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void NetworkManagerRequest::clearParameters()
{
    Q_D(NetworkManagerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant NetworkManagerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const NetworkManagerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &NetworkManagerRequest::parameters() const
{
    Q_D(const NetworkManagerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void NetworkManagerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(NetworkManagerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void NetworkManagerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(NetworkManagerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the NetworkManager request using the given
 * \a endpoint.
 *
 * This NetworkManager implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest NetworkManagerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const NetworkManagerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::NetworkManager::NetworkManagerRequestPrivate
 * \brief The NetworkManagerRequestPrivate class provides private implementation for NetworkManagerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a NetworkManagerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
NetworkManagerRequestPrivate::NetworkManagerRequestPrivate(const NetworkManagerRequest::Action action, NetworkManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the NetworkManagerRequest class's copy constructor.
 */
NetworkManagerRequestPrivate::NetworkManagerRequestPrivate(const NetworkManagerRequestPrivate &other,
                                     NetworkManagerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts NetworkManagerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the NetworkManager service's Action
 * query parameters.
 */
QString NetworkManagerRequestPrivate::toString(const NetworkManagerRequest::Action &action)
{
    #define ActionToString(action) \
        case NetworkManagerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateCustomerGateway);
        ActionToString(AssociateLink);
        ActionToString(AssociateTransitGatewayConnectPeer);
        ActionToString(CreateConnection);
        ActionToString(CreateDevice);
        ActionToString(CreateGlobalNetwork);
        ActionToString(CreateLink);
        ActionToString(CreateSite);
        ActionToString(DeleteConnection);
        ActionToString(DeleteDevice);
        ActionToString(DeleteGlobalNetwork);
        ActionToString(DeleteLink);
        ActionToString(DeleteSite);
        ActionToString(DeregisterTransitGateway);
        ActionToString(DescribeGlobalNetworks);
        ActionToString(DisassociateCustomerGateway);
        ActionToString(DisassociateLink);
        ActionToString(DisassociateTransitGatewayConnectPeer);
        ActionToString(GetConnections);
        ActionToString(GetCustomerGatewayAssociations);
        ActionToString(GetDevices);
        ActionToString(GetLinkAssociations);
        ActionToString(GetLinks);
        ActionToString(GetSites);
        ActionToString(GetTransitGatewayConnectPeerAssociations);
        ActionToString(GetTransitGatewayRegistrations);
        ActionToString(ListTagsForResource);
        ActionToString(RegisterTransitGateway);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateConnection);
        ActionToString(UpdateDevice);
        ActionToString(UpdateGlobalNetwork);
        ActionToString(UpdateLink);
        ActionToString(UpdateSite);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace NetworkManager
} // namespace QtAws
