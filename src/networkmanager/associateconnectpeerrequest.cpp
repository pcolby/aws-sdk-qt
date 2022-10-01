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

#include "associateconnectpeerrequest.h"
#include "associateconnectpeerrequest_p.h"
#include "associateconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerRequest
 * \brief The AssociateConnectPeerRequest class provides an interface for NetworkManager AssociateConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::associateConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateConnectPeerRequest::AssociateConnectPeerRequest(const AssociateConnectPeerRequest &other)
    : NetworkManagerRequest(new AssociateConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateConnectPeerRequest object.
 */
AssociateConnectPeerRequest::AssociateConnectPeerRequest()
    : NetworkManagerRequest(new AssociateConnectPeerRequestPrivate(NetworkManagerRequest::AssociateConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::AssociateConnectPeerRequestPrivate
 * \brief The AssociateConnectPeerRequestPrivate class provides private implementation for AssociateConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a AssociateConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
AssociateConnectPeerRequestPrivate::AssociateConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, AssociateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateConnectPeerRequest
 * class' copy constructor.
 */
AssociateConnectPeerRequestPrivate::AssociateConnectPeerRequestPrivate(
    const AssociateConnectPeerRequestPrivate &other, AssociateConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
