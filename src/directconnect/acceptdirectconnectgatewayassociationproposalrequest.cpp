// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "acceptdirectconnectgatewayassociationproposalrequest.h"
#include "acceptdirectconnectgatewayassociationproposalrequest_p.h"
#include "acceptdirectconnectgatewayassociationproposalresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AcceptDirectConnectGatewayAssociationProposalRequest
 * \brief The AcceptDirectConnectGatewayAssociationProposalRequest class provides an interface for DirectConnect AcceptDirectConnectGatewayAssociationProposal requests.
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
 * \sa DirectConnectClient::acceptDirectConnectGatewayAssociationProposal
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptDirectConnectGatewayAssociationProposalRequest::AcceptDirectConnectGatewayAssociationProposalRequest(const AcceptDirectConnectGatewayAssociationProposalRequest &other)
    : DirectConnectRequest(new AcceptDirectConnectGatewayAssociationProposalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptDirectConnectGatewayAssociationProposalRequest object.
 */
AcceptDirectConnectGatewayAssociationProposalRequest::AcceptDirectConnectGatewayAssociationProposalRequest()
    : DirectConnectRequest(new AcceptDirectConnectGatewayAssociationProposalRequestPrivate(DirectConnectRequest::AcceptDirectConnectGatewayAssociationProposalAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptDirectConnectGatewayAssociationProposalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptDirectConnectGatewayAssociationProposalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptDirectConnectGatewayAssociationProposalRequest::response(QNetworkReply * const reply) const
{
    return new AcceptDirectConnectGatewayAssociationProposalResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AcceptDirectConnectGatewayAssociationProposalRequestPrivate
 * \brief The AcceptDirectConnectGatewayAssociationProposalRequestPrivate class provides private implementation for AcceptDirectConnectGatewayAssociationProposalRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AcceptDirectConnectGatewayAssociationProposalRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AcceptDirectConnectGatewayAssociationProposalRequestPrivate::AcceptDirectConnectGatewayAssociationProposalRequestPrivate(
    const DirectConnectRequest::Action action, AcceptDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptDirectConnectGatewayAssociationProposalRequest
 * class' copy constructor.
 */
AcceptDirectConnectGatewayAssociationProposalRequestPrivate::AcceptDirectConnectGatewayAssociationProposalRequestPrivate(
    const AcceptDirectConnectGatewayAssociationProposalRequestPrivate &other, AcceptDirectConnectGatewayAssociationProposalRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
