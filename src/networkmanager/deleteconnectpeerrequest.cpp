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

#include "deleteconnectpeerrequest.h"
#include "deleteconnectpeerrequest_p.h"
#include "deleteconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerRequest
 * \brief The DeleteConnectPeerRequest class provides an interface for NetworkManager DeleteConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectPeerRequest::DeleteConnectPeerRequest(const DeleteConnectPeerRequest &other)
    : NetworkManagerRequest(new DeleteConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectPeerRequest object.
 */
DeleteConnectPeerRequest::DeleteConnectPeerRequest()
    : NetworkManagerRequest(new DeleteConnectPeerRequestPrivate(NetworkManagerRequest::DeleteConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::DeleteConnectPeerRequestPrivate
 * \brief The DeleteConnectPeerRequestPrivate class provides private implementation for DeleteConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
DeleteConnectPeerRequestPrivate::DeleteConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, DeleteConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectPeerRequest
 * class' copy constructor.
 */
DeleteConnectPeerRequestPrivate::DeleteConnectPeerRequestPrivate(
    const DeleteConnectPeerRequestPrivate &other, DeleteConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
