// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectconnectgatewayassociationrequest.h"
#include "deletedirectconnectgatewayassociationrequest_p.h"
#include "deletedirectconnectgatewayassociationresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationRequest
 * \brief The DeleteDirectConnectGatewayAssociationRequest class provides an interface for DirectConnect DeleteDirectConnectGatewayAssociation requests.
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
 * \sa DirectConnectClient::deleteDirectConnectGatewayAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDirectConnectGatewayAssociationRequest::DeleteDirectConnectGatewayAssociationRequest(const DeleteDirectConnectGatewayAssociationRequest &other)
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationRequest object.
 */
DeleteDirectConnectGatewayAssociationRequest::DeleteDirectConnectGatewayAssociationRequest()
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationRequestPrivate(DirectConnectRequest::DeleteDirectConnectGatewayAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectConnectGatewayAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDirectConnectGatewayAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectConnectGatewayAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectConnectGatewayAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationRequestPrivate
 * \brief The DeleteDirectConnectGatewayAssociationRequestPrivate class provides private implementation for DeleteDirectConnectGatewayAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteDirectConnectGatewayAssociationRequestPrivate::DeleteDirectConnectGatewayAssociationRequestPrivate(
    const DirectConnectRequest::Action action, DeleteDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectConnectGatewayAssociationRequest
 * class' copy constructor.
 */
DeleteDirectConnectGatewayAssociationRequestPrivate::DeleteDirectConnectGatewayAssociationRequestPrivate(
    const DeleteDirectConnectGatewayAssociationRequestPrivate &other, DeleteDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
