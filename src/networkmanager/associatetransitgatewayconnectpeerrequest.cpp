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

#include "associatetransitgatewayconnectpeerrequest.h"
#include "associatetransitgatewayconnectpeerrequest_p.h"
#include "associatetransitgatewayconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateTransitGatewayConnectPeerRequest
 * \brief The AssociateTransitGatewayConnectPeerRequest class provides an interface for NetworkManager AssociateTransitGatewayConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::associateTransitGatewayConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTransitGatewayConnectPeerRequest::AssociateTransitGatewayConnectPeerRequest(const AssociateTransitGatewayConnectPeerRequest &other)
    : NetworkManagerRequest(new AssociateTransitGatewayConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTransitGatewayConnectPeerRequest object.
 */
AssociateTransitGatewayConnectPeerRequest::AssociateTransitGatewayConnectPeerRequest()
    : NetworkManagerRequest(new AssociateTransitGatewayConnectPeerRequestPrivate(NetworkManagerRequest::AssociateTransitGatewayConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTransitGatewayConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTransitGatewayConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTransitGatewayConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTransitGatewayConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateTransitGatewayConnectPeerRequestPrivate
 * \brief The AssociateTransitGatewayConnectPeerRequestPrivate class provides private implementation for AssociateTransitGatewayConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateTransitGatewayConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateTransitGatewayConnectPeerRequestPrivate::AssociateTransitGatewayConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateTransitGatewayConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTransitGatewayConnectPeerRequest
 * class' copy constructor.
 */
AssociateTransitGatewayConnectPeerRequestPrivate::AssociateTransitGatewayConnectPeerRequestPrivate(
    const AssociateTransitGatewayConnectPeerRequestPrivate &other, AssociateTransitGatewayConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
