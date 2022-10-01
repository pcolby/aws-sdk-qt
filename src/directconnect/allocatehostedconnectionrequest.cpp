// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocatehostedconnectionrequest.h"
#include "allocatehostedconnectionrequest_p.h"
#include "allocatehostedconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocateHostedConnectionRequest
 * \brief The AllocateHostedConnectionRequest class provides an interface for DirectConnect AllocateHostedConnection requests.
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
 * \sa DirectConnectClient::allocateHostedConnection
 */

/*!
 * Constructs a copy of \a other.
 */
AllocateHostedConnectionRequest::AllocateHostedConnectionRequest(const AllocateHostedConnectionRequest &other)
    : DirectConnectRequest(new AllocateHostedConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AllocateHostedConnectionRequest object.
 */
AllocateHostedConnectionRequest::AllocateHostedConnectionRequest()
    : DirectConnectRequest(new AllocateHostedConnectionRequestPrivate(DirectConnectRequest::AllocateHostedConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool AllocateHostedConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AllocateHostedConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocateHostedConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AllocateHostedConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AllocateHostedConnectionRequestPrivate
 * \brief The AllocateHostedConnectionRequestPrivate class provides private implementation for AllocateHostedConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocateHostedConnectionRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AllocateHostedConnectionRequestPrivate::AllocateHostedConnectionRequestPrivate(
    const DirectConnectRequest::Action action, AllocateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AllocateHostedConnectionRequest
 * class' copy constructor.
 */
AllocateHostedConnectionRequestPrivate::AllocateHostedConnectionRequestPrivate(
    const AllocateHostedConnectionRequestPrivate &other, AllocateHostedConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
