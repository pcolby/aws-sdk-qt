// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedirectconnectgatewayassociationrequest.h"
#include "updatedirectconnectgatewayassociationrequest_p.h"
#include "updatedirectconnectgatewayassociationresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayAssociationRequest
 * \brief The UpdateDirectConnectGatewayAssociationRequest class provides an interface for DirectConnect UpdateDirectConnectGatewayAssociation requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::updateDirectConnectGatewayAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDirectConnectGatewayAssociationRequest::UpdateDirectConnectGatewayAssociationRequest(const UpdateDirectConnectGatewayAssociationRequest &other)
    : DirectConnectRequest(new UpdateDirectConnectGatewayAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDirectConnectGatewayAssociationRequest object.
 */
UpdateDirectConnectGatewayAssociationRequest::UpdateDirectConnectGatewayAssociationRequest()
    : DirectConnectRequest(new UpdateDirectConnectGatewayAssociationRequestPrivate(DirectConnectRequest::UpdateDirectConnectGatewayAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDirectConnectGatewayAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDirectConnectGatewayAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDirectConnectGatewayAssociationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDirectConnectGatewayAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayAssociationRequestPrivate
 * \brief The UpdateDirectConnectGatewayAssociationRequestPrivate class provides private implementation for UpdateDirectConnectGatewayAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateDirectConnectGatewayAssociationRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
UpdateDirectConnectGatewayAssociationRequestPrivate::UpdateDirectConnectGatewayAssociationRequestPrivate(
    const DirectConnectRequest::Action action, UpdateDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDirectConnectGatewayAssociationRequest
 * class' copy constructor.
 */
UpdateDirectConnectGatewayAssociationRequestPrivate::UpdateDirectConnectGatewayAssociationRequestPrivate(
    const UpdateDirectConnectGatewayAssociationRequestPrivate &other, UpdateDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
