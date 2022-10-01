// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
