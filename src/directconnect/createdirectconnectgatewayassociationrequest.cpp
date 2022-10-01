// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectconnectgatewayassociationrequest.h"
#include "createdirectconnectgatewayassociationrequest_p.h"
#include "createdirectconnectgatewayassociationresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationRequest
 * \brief The CreateDirectConnectGatewayAssociationRequest class provides an interface for DirectConnect CreateDirectConnectGatewayAssociation requests.
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
 * \sa DirectConnectClient::createDirectConnectGatewayAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDirectConnectGatewayAssociationRequest::CreateDirectConnectGatewayAssociationRequest(const CreateDirectConnectGatewayAssociationRequest &other)
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDirectConnectGatewayAssociationRequest object.
 */
CreateDirectConnectGatewayAssociationRequest::CreateDirectConnectGatewayAssociationRequest()
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationRequestPrivate(DirectConnectRequest::CreateDirectConnectGatewayAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDirectConnectGatewayAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDirectConnectGatewayAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectConnectGatewayAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectConnectGatewayAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationRequestPrivate
 * \brief The CreateDirectConnectGatewayAssociationRequestPrivate class provides private implementation for CreateDirectConnectGatewayAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateDirectConnectGatewayAssociationRequestPrivate::CreateDirectConnectGatewayAssociationRequestPrivate(
    const DirectConnectRequest::Action action, CreateDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectConnectGatewayAssociationRequest
 * class' copy constructor.
 */
CreateDirectConnectGatewayAssociationRequestPrivate::CreateDirectConnectGatewayAssociationRequestPrivate(
    const CreateDirectConnectGatewayAssociationRequestPrivate &other, CreateDirectConnectGatewayAssociationRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
