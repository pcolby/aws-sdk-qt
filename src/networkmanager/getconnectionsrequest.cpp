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

#include "getconnectionsrequest.h"
#include "getconnectionsrequest_p.h"
#include "getconnectionsresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetConnectionsRequest
 * \brief The GetConnectionsRequest class provides an interface for NetworkManager GetConnections requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 *
 * \sa NetworkManagerClient::getConnections
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionsRequest::GetConnectionsRequest(const GetConnectionsRequest &other)
    : NetworkManagerRequest(new GetConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionsRequest object.
 */
GetConnectionsRequest::GetConnectionsRequest()
    : NetworkManagerRequest(new GetConnectionsRequestPrivate(NetworkManagerRequest::GetConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetConnectionsRequestPrivate
 * \brief The GetConnectionsRequestPrivate class provides private implementation for GetConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetConnectionsRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const NetworkManagerRequest::Action action, GetConnectionsRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionsRequest
 * class' copy constructor.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GetConnectionsRequestPrivate &other, GetConnectionsRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
