// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmtransitvirtualinterfacerequest.h"
#include "confirmtransitvirtualinterfacerequest_p.h"
#include "confirmtransitvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmTransitVirtualInterfaceRequest
 * \brief The ConfirmTransitVirtualInterfaceRequest class provides an interface for DirectConnect ConfirmTransitVirtualInterface requests.
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
 * \sa DirectConnectClient::confirmTransitVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmTransitVirtualInterfaceRequest::ConfirmTransitVirtualInterfaceRequest(const ConfirmTransitVirtualInterfaceRequest &other)
    : DirectConnectRequest(new ConfirmTransitVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmTransitVirtualInterfaceRequest object.
 */
ConfirmTransitVirtualInterfaceRequest::ConfirmTransitVirtualInterfaceRequest()
    : DirectConnectRequest(new ConfirmTransitVirtualInterfaceRequestPrivate(DirectConnectRequest::ConfirmTransitVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmTransitVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmTransitVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmTransitVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmTransitVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ConfirmTransitVirtualInterfaceRequestPrivate
 * \brief The ConfirmTransitVirtualInterfaceRequestPrivate class provides private implementation for ConfirmTransitVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmTransitVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ConfirmTransitVirtualInterfaceRequestPrivate::ConfirmTransitVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmTransitVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmTransitVirtualInterfaceRequest
 * class' copy constructor.
 */
ConfirmTransitVirtualInterfaceRequestPrivate::ConfirmTransitVirtualInterfaceRequestPrivate(
    const ConfirmTransitVirtualInterfaceRequestPrivate &other, ConfirmTransitVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
