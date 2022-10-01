// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmprivatevirtualinterfacerequest.h"
#include "confirmprivatevirtualinterfacerequest_p.h"
#include "confirmprivatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmPrivateVirtualInterfaceRequest
 * \brief The ConfirmPrivateVirtualInterfaceRequest class provides an interface for DirectConnect ConfirmPrivateVirtualInterface requests.
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
 * \sa DirectConnectClient::confirmPrivateVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmPrivateVirtualInterfaceRequest::ConfirmPrivateVirtualInterfaceRequest(const ConfirmPrivateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new ConfirmPrivateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmPrivateVirtualInterfaceRequest object.
 */
ConfirmPrivateVirtualInterfaceRequest::ConfirmPrivateVirtualInterfaceRequest()
    : DirectConnectRequest(new ConfirmPrivateVirtualInterfaceRequestPrivate(DirectConnectRequest::ConfirmPrivateVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmPrivateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmPrivateVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmPrivateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmPrivateVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ConfirmPrivateVirtualInterfaceRequestPrivate
 * \brief The ConfirmPrivateVirtualInterfaceRequestPrivate class provides private implementation for ConfirmPrivateVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmPrivateVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ConfirmPrivateVirtualInterfaceRequestPrivate::ConfirmPrivateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmPrivateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmPrivateVirtualInterfaceRequest
 * class' copy constructor.
 */
ConfirmPrivateVirtualInterfaceRequestPrivate::ConfirmPrivateVirtualInterfaceRequestPrivate(
    const ConfirmPrivateVirtualInterfaceRequestPrivate &other, ConfirmPrivateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
