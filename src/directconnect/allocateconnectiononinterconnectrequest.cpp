// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "allocateconnectiononinterconnectrequest.h"
#include "allocateconnectiononinterconnectrequest_p.h"
#include "allocateconnectiononinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocateConnectionOnInterconnectRequest
 * \brief The AllocateConnectionOnInterconnectRequest class provides an interface for DirectConnect AllocateConnectionOnInterconnect requests.
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
 * \sa DirectConnectClient::allocateConnectionOnInterconnect
 */

/*!
 * Constructs a copy of \a other.
 */
AllocateConnectionOnInterconnectRequest::AllocateConnectionOnInterconnectRequest(const AllocateConnectionOnInterconnectRequest &other)
    : DirectConnectRequest(new AllocateConnectionOnInterconnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AllocateConnectionOnInterconnectRequest object.
 */
AllocateConnectionOnInterconnectRequest::AllocateConnectionOnInterconnectRequest()
    : DirectConnectRequest(new AllocateConnectionOnInterconnectRequestPrivate(DirectConnectRequest::AllocateConnectionOnInterconnectAction, this))
{

}

/*!
 * \reimp
 */
bool AllocateConnectionOnInterconnectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AllocateConnectionOnInterconnectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocateConnectionOnInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new AllocateConnectionOnInterconnectResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AllocateConnectionOnInterconnectRequestPrivate
 * \brief The AllocateConnectionOnInterconnectRequestPrivate class provides private implementation for AllocateConnectionOnInterconnectRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocateConnectionOnInterconnectRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AllocateConnectionOnInterconnectRequestPrivate::AllocateConnectionOnInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, AllocateConnectionOnInterconnectRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AllocateConnectionOnInterconnectRequest
 * class' copy constructor.
 */
AllocateConnectionOnInterconnectRequestPrivate::AllocateConnectionOnInterconnectRequestPrivate(
    const AllocateConnectionOnInterconnectRequestPrivate &other, AllocateConnectionOnInterconnectRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
