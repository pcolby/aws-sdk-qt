// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatehostedconnectionrequest.h"
#include "associatehostedconnectionrequest_p.h"
#include "associatehostedconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateHostedConnectionRequest
 * \brief The AssociateHostedConnectionRequest class provides an interface for DirectConnect AssociateHostedConnection requests.
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
 * \sa DirectConnectClient::associateHostedConnection
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateHostedConnectionRequest::AssociateHostedConnectionRequest(const AssociateHostedConnectionRequest &other)
    : DirectConnectRequest(new AssociateHostedConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateHostedConnectionRequest object.
 */
AssociateHostedConnectionRequest::AssociateHostedConnectionRequest()
    : DirectConnectRequest(new AssociateHostedConnectionRequestPrivate(DirectConnectRequest::AssociateHostedConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateHostedConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateHostedConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateHostedConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AssociateHostedConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AssociateHostedConnectionRequestPrivate
 * \brief The AssociateHostedConnectionRequestPrivate class provides private implementation for AssociateHostedConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateHostedConnectionRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AssociateHostedConnectionRequestPrivate::AssociateHostedConnectionRequestPrivate(
    const DirectConnectRequest::Action action, AssociateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateHostedConnectionRequest
 * class' copy constructor.
 */
AssociateHostedConnectionRequestPrivate::AssociateHostedConnectionRequestPrivate(
    const AssociateHostedConnectionRequestPrivate &other, AssociateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
