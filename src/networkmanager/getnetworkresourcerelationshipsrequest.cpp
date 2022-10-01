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

#include "getnetworkresourcerelationshipsrequest.h"
#include "getnetworkresourcerelationshipsrequest_p.h"
#include "getnetworkresourcerelationshipsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsRequest
 * \brief The GetNetworkResourceRelationshipsRequest class provides an interface for NetworkManager GetNetworkResourceRelationships requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceRelationships
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourceRelationshipsRequest::GetNetworkResourceRelationshipsRequest(const GetNetworkResourceRelationshipsRequest &other)
    : NetworkManagerRequest(new GetNetworkResourceRelationshipsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourceRelationshipsRequest object.
 */
GetNetworkResourceRelationshipsRequest::GetNetworkResourceRelationshipsRequest()
    : NetworkManagerRequest(new GetNetworkResourceRelationshipsRequestPrivate(NetworkManagerRequest::GetNetworkResourceRelationshipsAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourceRelationshipsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourceRelationshipsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourceRelationshipsRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourceRelationshipsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceRelationshipsRequestPrivate
 * \brief The GetNetworkResourceRelationshipsRequestPrivate class provides private implementation for GetNetworkResourceRelationshipsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceRelationshipsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourceRelationshipsRequestPrivate::GetNetworkResourceRelationshipsRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourceRelationshipsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourceRelationshipsRequest
 * class' copy constructor.
 */
GetNetworkResourceRelationshipsRequestPrivate::GetNetworkResourceRelationshipsRequestPrivate(
    const GetNetworkResourceRelationshipsRequestPrivate &other, GetNetworkResourceRelationshipsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
