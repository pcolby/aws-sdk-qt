// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
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
