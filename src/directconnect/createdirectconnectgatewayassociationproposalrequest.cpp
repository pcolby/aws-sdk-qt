// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectconnectgatewayassociationproposalrequest.h"
#include "createdirectconnectgatewayassociationproposalrequest_p.h"
#include "createdirectconnectgatewayassociationproposalresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationProposalRequest
 * \brief The CreateDirectConnectGatewayAssociationProposalRequest class provides an interface for DirectConnect CreateDirectConnectGatewayAssociationProposal requests.
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
 * \sa DirectConnectClient::createDirectConnectGatewayAssociationProposal
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDirectConnectGatewayAssociationProposalRequest::CreateDirectConnectGatewayAssociationProposalRequest(const CreateDirectConnectGatewayAssociationProposalRequest &other)
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDirectConnectGatewayAssociationProposalRequest object.
 */
CreateDirectConnectGatewayAssociationProposalRequest::CreateDirectConnectGatewayAssociationProposalRequest()
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationProposalRequestPrivate(DirectConnectRequest::CreateDirectConnectGatewayAssociationProposalAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDirectConnectGatewayAssociationProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDirectConnectGatewayAssociationProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectConnectGatewayAssociationProposalRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectConnectGatewayAssociationProposalResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationProposalRequestPrivate
 * \brief The CreateDirectConnectGatewayAssociationProposalRequestPrivate class provides private implementation for CreateDirectConnectGatewayAssociationProposalRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationProposalRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateDirectConnectGatewayAssociationProposalRequestPrivate::CreateDirectConnectGatewayAssociationProposalRequestPrivate(
    const DirectConnectRequest::Action action, CreateDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectConnectGatewayAssociationProposalRequest
 * class' copy constructor.
 */
CreateDirectConnectGatewayAssociationProposalRequestPrivate::CreateDirectConnectGatewayAssociationProposalRequestPrivate(
    const CreateDirectConnectGatewayAssociationProposalRequestPrivate &other, CreateDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
