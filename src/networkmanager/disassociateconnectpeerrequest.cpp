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
