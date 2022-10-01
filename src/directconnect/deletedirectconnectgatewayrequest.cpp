// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectconnectgatewayrequest.h"
#include "deletedirectconnectgatewayrequest_p.h"
#include "deletedirectconnectgatewayresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayRequest
 * \brief The DeleteDirectConnectGatewayRequest class provides an interface for DirectConnect DeleteDirectConnectGateway requests.
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
 * \sa DirectConnectClient::deleteDirectConnectGateway
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDirectConnectGatewayRequest::DeleteDirectConnectGatewayRequest(const DeleteDirectConnectGatewayRequest &other)
    : DirectConnectRequest(new DeleteDirectConnectGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDirectConnectGatewayRequest object.
 */
DeleteDirectConnectGatewayRequest::DeleteDirectConnectGatewayRequest()
    : DirectConnectRequest(new DeleteDirectConnectGatewayRequestPrivate(DirectConnectRequest::DeleteDirectConnectGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectConnectGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDirectConnectGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectConnectGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectConnectGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayRequestPrivate
 * \brief The DeleteDirectConnectGatewayRequestPrivate class provides private implementation for DeleteDirectConnectGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteDirectConnectGatewayRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteDirectConnectGatewayRequestPrivate::DeleteDirectConnectGatewayRequestPrivate(
    const DirectConnectRequest::Action action, DeleteDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectConnectGatewayRequest
 * class' copy constructor.
 */
DeleteDirectConnectGatewayRequestPrivate::DeleteDirectConnectGatewayRequestPrivate(
    const DeleteDirectConnectGatewayRequestPrivate &other, DeleteDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
