// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectconnectgatewayassociationproposalrequest.h"
#include "deletedirectconnectgatewayassociationproposalrequest_p.h"
#include "deletedirectconnectgatewayassociationproposalresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationProposalRequest
 * \brief The DeleteDirectConnectGatewayAssociationProposalRequest class provides an interface for DirectConnect DeleteDirectConnectGatewayAssociationProposal requests.
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
 * \sa DirectConnectClient::deleteDirectConnectGatewayAssociationProposal
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDirectConnectGatewayAssociationProposalRequest::DeleteDirectConnectGatewayAssociationProposalRequest(const DeleteDirectConnectGatewayAssociationProposalRequest &other)
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationProposalRequest object.
 */
DeleteDirectConnectGatewayAssociationProposalRequest::DeleteDirectConnectGatewayAssociationProposalRequest()
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationProposalRequestPrivate(DirectConnectRequest::DeleteDirectConnectGatewayAssociationProposalAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectConnectGatewayAssociationProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDirectConnectGatewayAssociationProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectConnectGatewayAssociationProposalRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectConnectGatewayAssociationProposalResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationProposalRequestPrivate
 * \brief The DeleteDirectConnectGatewayAssociationProposalRequestPrivate class provides private implementation for DeleteDirectConnectGatewayAssociationProposalRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationProposalRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteDirectConnectGatewayAssociationProposalRequestPrivate::DeleteDirectConnectGatewayAssociationProposalRequestPrivate(
    const DirectConnectRequest::Action action, DeleteDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectConnectGatewayAssociationProposalRequest
 * class' copy constructor.
 */
DeleteDirectConnectGatewayAssociationProposalRequestPrivate::DeleteDirectConnectGatewayAssociationProposalRequestPrivate(
    const DeleteDirectConnectGatewayAssociationProposalRequestPrivate &other, DeleteDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
