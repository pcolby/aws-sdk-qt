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

#include "createtransitgatewaypeeringrequest.h"
#include "createtransitgatewaypeeringrequest_p.h"
#include "createtransitgatewaypeeringresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayPeeringRequest
 * \brief The CreateTransitGatewayPeeringRequest class provides an interface for NetworkManager CreateTransitGatewayPeering requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createTransitGatewayPeering
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTransitGatewayPeeringRequest::CreateTransitGatewayPeeringRequest(const CreateTransitGatewayPeeringRequest &other)
    : NetworkManagerRequest(new CreateTransitGatewayPeeringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTransitGatewayPeeringRequest object.
 */
CreateTransitGatewayPeeringRequest::CreateTransitGatewayPeeringRequest()
    : NetworkManagerRequest(new CreateTransitGatewayPeeringRequestPrivate(NetworkManagerRequest::CreateTransitGatewayPeeringAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTransitGatewayPeeringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTransitGatewayPeeringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTransitGatewayPeeringRequest::response(QNetworkReply * const reply) const
{
    return new CreateTransitGatewayPeeringResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayPeeringRequestPrivate
 * \brief The CreateTransitGatewayPeeringRequestPrivate class provides private implementation for CreateTransitGatewayPeeringRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateTransitGatewayPeeringRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateTransitGatewayPeeringRequestPrivate::CreateTransitGatewayPeeringRequestPrivate(
    const NetworkManagerRequest::Action action, CreateTransitGatewayPeeringRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTransitGatewayPeeringRequest
 * class' copy constructor.
 */
CreateTransitGatewayPeeringRequestPrivate::CreateTransitGatewayPeeringRequestPrivate(
    const CreateTransitGatewayPeeringRequestPrivate &other, CreateTransitGatewayPeeringRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
