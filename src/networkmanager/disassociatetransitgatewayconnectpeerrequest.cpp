// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetransitgatewayconnectpeerrequest.h"
#include "disassociatetransitgatewayconnectpeerrequest_p.h"
#include "disassociatetransitgatewayconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateTransitGatewayConnectPeerRequest
 * \brief The DisassociateTransitGatewayConnectPeerRequest class provides an interface for NetworkManager DisassociateTransitGatewayConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateTransitGatewayConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateTransitGatewayConnectPeerRequest::DisassociateTransitGatewayConnectPeerRequest(const DisassociateTransitGatewayConnectPeerRequest &other)
    : NetworkManagerRequest(new DisassociateTransitGatewayConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateTransitGatewayConnectPeerRequest object.
 */
DisassociateTransitGatewayConnectPeerRequest::DisassociateTransitGatewayConnectPeerRequest()
    : NetworkManagerRequest(new DisassociateTransitGatewayConnectPeerRequestPrivate(NetworkManagerRequest::DisassociateTransitGatewayConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateTransitGatewayConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateTransitGatewayConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateTransitGatewayConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTransitGatewayConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DisassociateTransitGatewayConnectPeerRequestPrivate
 * \brief The DisassociateTransitGatewayConnectPeerRequestPrivate class provides private implementation for DisassociateTransitGatewayConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateTransitGatewayConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DisassociateTransitGatewayConnectPeerRequestPrivate::DisassociateTransitGatewayConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, DisassociateTransitGatewayConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTransitGatewayConnectPeerRequest
 * class' copy constructor.
 */
DisassociateTransitGatewayConnectPeerRequestPrivate::DisassociateTransitGatewayConnectPeerRequestPrivate(
    const DisassociateTransitGatewayConnectPeerRequestPrivate &other, DisassociateTransitGatewayConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
