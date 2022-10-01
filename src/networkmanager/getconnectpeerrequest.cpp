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

#include "getconnectpeerrequest.h"
#include "getconnectpeerrequest_p.h"
#include "getconnectpeerresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerRequest
 * \brief The GetConnectPeerRequest class provides an interface for NetworkManager GetConnectPeer requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeer
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectPeerRequest::GetConnectPeerRequest(const GetConnectPeerRequest &other)
    : NetworkManagerRequest(new GetConnectPeerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectPeerRequest object.
 */
GetConnectPeerRequest::GetConnectPeerRequest()
    : NetworkManagerRequest(new GetConnectPeerRequestPrivate(NetworkManagerRequest::GetConnectPeerAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectPeerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectPeerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectPeerRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectPeerResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerRequestPrivate
 * \brief The GetConnectPeerRequestPrivate class provides private implementation for GetConnectPeerRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectPeerRequestPrivate::GetConnectPeerRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectPeerRequest
 * class' copy constructor.
 */
GetConnectPeerRequestPrivate::GetConnectPeerRequestPrivate(
    const GetConnectPeerRequestPrivate &other, GetConnectPeerRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
