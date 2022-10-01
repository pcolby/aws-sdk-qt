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

#include "gettransitgatewaypeeringrequest.h"
#include "gettransitgatewaypeeringrequest_p.h"
#include "gettransitgatewaypeeringresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayPeeringRequest
 * \brief The GetTransitGatewayPeeringRequest class provides an interface for NetworkManager GetTransitGatewayPeering requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayPeering
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayPeeringRequest::GetTransitGatewayPeeringRequest(const GetTransitGatewayPeeringRequest &other)
    : NetworkManagerRequest(new GetTransitGatewayPeeringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayPeeringRequest object.
 */
GetTransitGatewayPeeringRequest::GetTransitGatewayPeeringRequest()
    : NetworkManagerRequest(new GetTransitGatewayPeeringRequestPrivate(NetworkManagerRequest::GetTransitGatewayPeeringAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayPeeringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayPeeringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayPeeringRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayPeeringResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayPeeringRequestPrivate
 * \brief The GetTransitGatewayPeeringRequestPrivate class provides private implementation for GetTransitGatewayPeeringRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayPeeringRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetTransitGatewayPeeringRequestPrivate::GetTransitGatewayPeeringRequestPrivate(
    const NetworkManagerRequest::Action action, GetTransitGatewayPeeringRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayPeeringRequest
 * class' copy constructor.
 */
GetTransitGatewayPeeringRequestPrivate::GetTransitGatewayPeeringRequestPrivate(
    const GetTransitGatewayPeeringRequestPrivate &other, GetTransitGatewayPeeringRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
