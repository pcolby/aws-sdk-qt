// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectconnectgatewayrequest.h"
#include "createdirectconnectgatewayrequest_p.h"
#include "createdirectconnectgatewayresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayRequest
 * \brief The CreateDirectConnectGatewayRequest class provides an interface for DirectConnect CreateDirectConnectGateway requests.
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
 * \sa DirectConnectClient::createDirectConnectGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest(const CreateDirectConnectGatewayRequest &other)
    : DirectConnectRequest(new CreateDirectConnectGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDirectConnectGatewayRequest object.
 */
CreateDirectConnectGatewayRequest::CreateDirectConnectGatewayRequest()
    : DirectConnectRequest(new CreateDirectConnectGatewayRequestPrivate(DirectConnectRequest::CreateDirectConnectGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDirectConnectGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDirectConnectGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectConnectGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectConnectGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayRequestPrivate
 * \brief The CreateDirectConnectGatewayRequestPrivate class provides private implementation for CreateDirectConnectGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateDirectConnectGatewayRequestPrivate::CreateDirectConnectGatewayRequestPrivate(
    const DirectConnectRequest::Action action, CreateDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectConnectGatewayRequest
 * class' copy constructor.
 */
CreateDirectConnectGatewayRequestPrivate::CreateDirectConnectGatewayRequestPrivate(
    const CreateDirectConnectGatewayRequestPrivate &other, CreateDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
