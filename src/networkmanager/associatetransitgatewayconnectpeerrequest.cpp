// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
