// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateconnectpeerrequest.h"
#include "disassociateconnectpeerrequest_p.h"
#include "disassociateconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerRequest
 * \brief The DisassociateConnectPeerRequest class provides an interface for NetworkManager DisassociateConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::disassociateConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateConnectPeerRequest::DisassociateConnectPeerRequest(const DisassociateConnectPeerRequest &other)
    : NetworkManagerRequest(new DisassociateConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateConnectPeerRequest object.
 */
DisassociateConnectPeerRequest::DisassociateConnectPeerRequest()
    : NetworkManagerRequest(new DisassociateConnectPeerRequestPrivate(NetworkManagerRequest::DisassociateConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DisassociateConnectPeerRequestPrivate
 * \brief The DisassociateConnectPeerRequestPrivate class provides private implementation for DisassociateConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DisassociateConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DisassociateConnectPeerRequestPrivate::DisassociateConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, DisassociateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConnectPeerRequest
 * class' copy constructor.
 */
DisassociateConnectPeerRequestPrivate::DisassociateConnectPeerRequestPrivate(
    const DisassociateConnectPeerRequestPrivate &other, DisassociateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
