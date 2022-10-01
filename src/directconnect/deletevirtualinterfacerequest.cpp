// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevirtualinterfacerequest.h"
#include "deletevirtualinterfacerequest_p.h"
#include "deletevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteVirtualInterfaceRequest
 * \brief The DeleteVirtualInterfaceRequest class provides an interface for DirectConnect DeleteVirtualInterface requests.
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
 * \sa DirectConnectClient::deleteVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVirtualInterfaceRequest::DeleteVirtualInterfaceRequest(const DeleteVirtualInterfaceRequest &other)
    : DirectConnectRequest(new DeleteVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVirtualInterfaceRequest object.
 */
DeleteVirtualInterfaceRequest::DeleteVirtualInterfaceRequest()
    : DirectConnectRequest(new DeleteVirtualInterfaceRequestPrivate(DirectConnectRequest::DeleteVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteVirtualInterfaceRequestPrivate
 * \brief The DeleteVirtualInterfaceRequestPrivate class provides private implementation for DeleteVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteVirtualInterfaceRequestPrivate::DeleteVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, DeleteVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVirtualInterfaceRequest
 * class' copy constructor.
 */
DeleteVirtualInterfaceRequestPrivate::DeleteVirtualInterfaceRequestPrivate(
    const DeleteVirtualInterfaceRequestPrivate &other, DeleteVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
