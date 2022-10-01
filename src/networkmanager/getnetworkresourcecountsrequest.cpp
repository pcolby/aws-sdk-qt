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

#include "getnetworkresourcecountsrequest.h"
#include "getnetworkresourcecountsrequest_p.h"
#include "getnetworkresourcecountsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsRequest
 * \brief The GetNetworkResourceCountsRequest class provides an interface for NetworkManager GetNetworkResourceCounts requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResourceCounts
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourceCountsRequest::GetNetworkResourceCountsRequest(const GetNetworkResourceCountsRequest &other)
    : NetworkManagerRequest(new GetNetworkResourceCountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourceCountsRequest object.
 */
GetNetworkResourceCountsRequest::GetNetworkResourceCountsRequest()
    : NetworkManagerRequest(new GetNetworkResourceCountsRequestPrivate(NetworkManagerRequest::GetNetworkResourceCountsAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourceCountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourceCountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourceCountsRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourceCountsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourceCountsRequestPrivate
 * \brief The GetNetworkResourceCountsRequestPrivate class provides private implementation for GetNetworkResourceCountsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourceCountsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourceCountsRequestPrivate::GetNetworkResourceCountsRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourceCountsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourceCountsRequest
 * class' copy constructor.
 */
GetNetworkResourceCountsRequestPrivate::GetNetworkResourceCountsRequestPrivate(
    const GetNetworkResourceCountsRequestPrivate &other, GetNetworkResourceCountsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
