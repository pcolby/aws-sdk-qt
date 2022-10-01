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

#include "getnetworkresourcesrequest.h"
#include "getnetworkresourcesrequest_p.h"
#include "getnetworkresourcesresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesRequest
 * \brief The GetNetworkResourcesRequest class provides an interface for NetworkManager GetNetworkResources requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getNetworkResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkResourcesRequest::GetNetworkResourcesRequest(const GetNetworkResourcesRequest &other)
    : NetworkManagerRequest(new GetNetworkResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkResourcesRequest object.
 */
GetNetworkResourcesRequest::GetNetworkResourcesRequest()
    : NetworkManagerRequest(new GetNetworkResourcesRequestPrivate(NetworkManagerRequest::GetNetworkResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNetworkResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetNetworkResourcesRequestPrivate
 * \brief The GetNetworkResourcesRequestPrivate class provides private implementation for GetNetworkResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetNetworkResourcesRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetNetworkResourcesRequestPrivate::GetNetworkResourcesRequestPrivate(
    const NetworkManagerRequest::Action action, GetNetworkResourcesRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkResourcesRequest
 * class' copy constructor.
 */
GetNetworkResourcesRequestPrivate::GetNetworkResourcesRequestPrivate(
    const GetNetworkResourcesRequestPrivate &other, GetNetworkResourcesRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
