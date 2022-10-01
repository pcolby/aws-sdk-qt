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

#include "getconnectpeerassociationsrequest.h"
#include "getconnectpeerassociationsrequest_p.h"
#include "getconnectpeerassociationsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectPeerAssociationsRequest
 * \brief The GetConnectPeerAssociationsRequest class provides an interface for NetworkManager GetConnectPeerAssociations requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getConnectPeerAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectPeerAssociationsRequest::GetConnectPeerAssociationsRequest(const GetConnectPeerAssociationsRequest &other)
    : NetworkManagerRequest(new GetConnectPeerAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectPeerAssociationsRequest object.
 */
GetConnectPeerAssociationsRequest::GetConnectPeerAssociationsRequest()
    : NetworkManagerRequest(new GetConnectPeerAssociationsRequestPrivate(NetworkManagerRequest::GetConnectPeerAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectPeerAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectPeerAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectPeerAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectPeerAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectPeerAssociationsRequestPrivate
 * \brief The GetConnectPeerAssociationsRequestPrivate class provides private implementation for GetConnectPeerAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectPeerAssociationsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectPeerAssociationsRequestPrivate::GetConnectPeerAssociationsRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectPeerAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectPeerAssociationsRequest
 * class' copy constructor.
 */
GetConnectPeerAssociationsRequestPrivate::GetConnectPeerAssociationsRequestPrivate(
    const GetConnectPeerAssociationsRequestPrivate &other, GetConnectPeerAssociationsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
