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

#include "createtransitgatewayroutetableattachmentrequest.h"
#include "createtransitgatewayroutetableattachmentrequest_p.h"
#include "createtransitgatewayroutetableattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayRouteTableAttachmentRequest
 * \brief The CreateTransitGatewayRouteTableAttachmentRequest class provides an interface for NetworkManager CreateTransitGatewayRouteTableAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createTransitGatewayRouteTableAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTransitGatewayRouteTableAttachmentRequest::CreateTransitGatewayRouteTableAttachmentRequest(const CreateTransitGatewayRouteTableAttachmentRequest &other)
    : NetworkManagerRequest(new CreateTransitGatewayRouteTableAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTransitGatewayRouteTableAttachmentRequest object.
 */
CreateTransitGatewayRouteTableAttachmentRequest::CreateTransitGatewayRouteTableAttachmentRequest()
    : NetworkManagerRequest(new CreateTransitGatewayRouteTableAttachmentRequestPrivate(NetworkManagerRequest::CreateTransitGatewayRouteTableAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTransitGatewayRouteTableAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTransitGatewayRouteTableAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTransitGatewayRouteTableAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateTransitGatewayRouteTableAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::CreateTransitGatewayRouteTableAttachmentRequestPrivate
 * \brief The CreateTransitGatewayRouteTableAttachmentRequestPrivate class provides private implementation for CreateTransitGatewayRouteTableAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateTransitGatewayRouteTableAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
CreateTransitGatewayRouteTableAttachmentRequestPrivate::CreateTransitGatewayRouteTableAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, CreateTransitGatewayRouteTableAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTransitGatewayRouteTableAttachmentRequest
 * class' copy constructor.
 */
CreateTransitGatewayRouteTableAttachmentRequestPrivate::CreateTransitGatewayRouteTableAttachmentRequestPrivate(
    const CreateTransitGatewayRouteTableAttachmentRequestPrivate &other, CreateTransitGatewayRouteTableAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
