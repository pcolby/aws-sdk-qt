/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "allocatepublicvirtualinterfacerequest.h"
#include "allocatepublicvirtualinterfacerequest_p.h"
#include "allocatepublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocatePublicVirtualInterfaceRequest
 * \brief The AllocatePublicVirtualInterfaceRequest class provides an interface for DirectConnect AllocatePublicVirtualInterface requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::allocatePublicVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
AllocatePublicVirtualInterfaceRequest::AllocatePublicVirtualInterfaceRequest(const AllocatePublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new AllocatePublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AllocatePublicVirtualInterfaceRequest object.
 */
AllocatePublicVirtualInterfaceRequest::AllocatePublicVirtualInterfaceRequest()
    : DirectConnectRequest(new AllocatePublicVirtualInterfaceRequestPrivate(DirectConnectRequest::AllocatePublicVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool AllocatePublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AllocatePublicVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocatePublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AllocatePublicVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AllocatePublicVirtualInterfaceRequestPrivate
 * \brief The AllocatePublicVirtualInterfaceRequestPrivate class provides private implementation for AllocatePublicVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocatePublicVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AllocatePublicVirtualInterfaceRequestPrivate::AllocatePublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, AllocatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AllocatePublicVirtualInterfaceRequest
 * class' copy constructor.
 */
AllocatePublicVirtualInterfaceRequestPrivate::AllocatePublicVirtualInterfaceRequestPrivate(
    const AllocatePublicVirtualInterfaceRequestPrivate &other, AllocatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
