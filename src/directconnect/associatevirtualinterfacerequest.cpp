// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatevirtualinterfacerequest.h"
#include "associatevirtualinterfacerequest_p.h"
#include "associatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateVirtualInterfaceRequest
 * \brief The AssociateVirtualInterfaceRequest class provides an interface for DirectConnect AssociateVirtualInterface requests.
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
 * \sa DirectConnectClient::associateVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateVirtualInterfaceRequest::AssociateVirtualInterfaceRequest(const AssociateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new AssociateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateVirtualInterfaceRequest object.
 */
AssociateVirtualInterfaceRequest::AssociateVirtualInterfaceRequest()
    : DirectConnectRequest(new AssociateVirtualInterfaceRequestPrivate(DirectConnectRequest::AssociateVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AssociateVirtualInterfaceRequestPrivate
 * \brief The AssociateVirtualInterfaceRequestPrivate class provides private implementation for AssociateVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AssociateVirtualInterfaceRequestPrivate::AssociateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, AssociateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateVirtualInterfaceRequest
 * class' copy constructor.
 */
AssociateVirtualInterfaceRequestPrivate::AssociateVirtualInterfaceRequestPrivate(
    const AssociateVirtualInterfaceRequestPrivate &other, AssociateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
