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

#include "confirmpublicvirtualinterfacerequest.h"
#include "confirmpublicvirtualinterfacerequest_p.h"
#include "confirmpublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmPublicVirtualInterfaceRequest
 * \brief The ConfirmPublicVirtualInterfaceRequest class provides an interface for DirectConnect ConfirmPublicVirtualInterface requests.
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
 * \sa DirectConnectClient::confirmPublicVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmPublicVirtualInterfaceRequest::ConfirmPublicVirtualInterfaceRequest(const ConfirmPublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new ConfirmPublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmPublicVirtualInterfaceRequest object.
 */
ConfirmPublicVirtualInterfaceRequest::ConfirmPublicVirtualInterfaceRequest()
    : DirectConnectRequest(new ConfirmPublicVirtualInterfaceRequestPrivate(DirectConnectRequest::ConfirmPublicVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmPublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmPublicVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmPublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmPublicVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ConfirmPublicVirtualInterfaceRequestPrivate
 * \brief The ConfirmPublicVirtualInterfaceRequestPrivate class provides private implementation for ConfirmPublicVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmPublicVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ConfirmPublicVirtualInterfaceRequestPrivate::ConfirmPublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmPublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmPublicVirtualInterfaceRequest
 * class' copy constructor.
 */
ConfirmPublicVirtualInterfaceRequestPrivate::ConfirmPublicVirtualInterfaceRequestPrivate(
    const ConfirmPublicVirtualInterfaceRequestPrivate &other, ConfirmPublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
