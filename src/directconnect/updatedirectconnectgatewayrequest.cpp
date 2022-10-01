// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedirectconnectgatewayrequest.h"
#include "updatedirectconnectgatewayrequest_p.h"
#include "updatedirectconnectgatewayresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayRequest
 * \brief The UpdateDirectConnectGatewayRequest class provides an interface for DirectConnect UpdateDirectConnectGateway requests.
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
 * \sa DirectConnectClient::updateDirectConnectGateway
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDirectConnectGatewayRequest::UpdateDirectConnectGatewayRequest(const UpdateDirectConnectGatewayRequest &other)
    : DirectConnectRequest(new UpdateDirectConnectGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDirectConnectGatewayRequest object.
 */
UpdateDirectConnectGatewayRequest::UpdateDirectConnectGatewayRequest()
    : DirectConnectRequest(new UpdateDirectConnectGatewayRequestPrivate(DirectConnectRequest::UpdateDirectConnectGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDirectConnectGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDirectConnectGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDirectConnectGatewayRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDirectConnectGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayRequestPrivate
 * \brief The UpdateDirectConnectGatewayRequestPrivate class provides private implementation for UpdateDirectConnectGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateDirectConnectGatewayRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
UpdateDirectConnectGatewayRequestPrivate::UpdateDirectConnectGatewayRequestPrivate(
    const DirectConnectRequest::Action action, UpdateDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDirectConnectGatewayRequest
 * class' copy constructor.
 */
UpdateDirectConnectGatewayRequestPrivate::UpdateDirectConnectGatewayRequestPrivate(
    const UpdateDirectConnectGatewayRequestPrivate &other, UpdateDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
