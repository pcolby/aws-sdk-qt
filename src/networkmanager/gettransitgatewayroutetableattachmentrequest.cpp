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

#include "gettransitgatewayroutetableattachmentrequest.h"
#include "gettransitgatewayroutetableattachmentrequest_p.h"
#include "gettransitgatewayroutetableattachmentresponse.h"
#include "networkmanagerrequest_p.h"

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRouteTableAttachmentRequest
 * \brief The GetTransitGatewayRouteTableAttachmentRequest class provides an interface for NetworkManager GetTransitGatewayRouteTableAttachment requests.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getTransitGatewayRouteTableAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayRouteTableAttachmentRequest::GetTransitGatewayRouteTableAttachmentRequest(const GetTransitGatewayRouteTableAttachmentRequest &other)
    : NetworkManagerRequest(new GetTransitGatewayRouteTableAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayRouteTableAttachmentRequest object.
 */
GetTransitGatewayRouteTableAttachmentRequest::GetTransitGatewayRouteTableAttachmentRequest()
    : NetworkManagerRequest(new GetTransitGatewayRouteTableAttachmentRequestPrivate(NetworkManagerRequest::GetTransitGatewayRouteTableAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayRouteTableAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayRouteTableAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayRouteTableAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayRouteTableAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::NetworkManager::GetTransitGatewayRouteTableAttachmentRequestPrivate
 * \brief The GetTransitGatewayRouteTableAttachmentRequestPrivate class provides private implementation for GetTransitGatewayRouteTableAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetTransitGatewayRouteTableAttachmentRequestPrivate object for NetworkManager \a action,
 * with public implementation \a q.
 */
GetTransitGatewayRouteTableAttachmentRequestPrivate::GetTransitGatewayRouteTableAttachmentRequestPrivate(
    const NetworkManagerRequest::Action action, GetTransitGatewayRouteTableAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayRouteTableAttachmentRequest
 * class' copy constructor.
 */
GetTransitGatewayRouteTableAttachmentRequestPrivate::GetTransitGatewayRouteTableAttachmentRequestPrivate(
    const GetTransitGatewayRouteTableAttachmentRequestPrivate &other, GetTransitGatewayRouteTableAttachmentRequest * const q)
    : NetworkManagerRequestPrivate(other, q)
{

}

} // namespace NetworkManager
} // namespace QtAws
