// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprivatevirtualinterfacerequest.h"
#include "createprivatevirtualinterfacerequest_p.h"
#include "createprivatevirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreatePrivateVirtualInterfaceRequest
 * \brief The CreatePrivateVirtualInterfaceRequest class provides an interface for DirectConnect CreatePrivateVirtualInterface requests.
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
 * \sa DirectConnectClient::createPrivateVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePrivateVirtualInterfaceRequest::CreatePrivateVirtualInterfaceRequest(const CreatePrivateVirtualInterfaceRequest &other)
    : DirectConnectRequest(new CreatePrivateVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePrivateVirtualInterfaceRequest object.
 */
CreatePrivateVirtualInterfaceRequest::CreatePrivateVirtualInterfaceRequest()
    : DirectConnectRequest(new CreatePrivateVirtualInterfaceRequestPrivate(DirectConnectRequest::CreatePrivateVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePrivateVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePrivateVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePrivateVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePrivateVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreatePrivateVirtualInterfaceRequestPrivate
 * \brief The CreatePrivateVirtualInterfaceRequestPrivate class provides private implementation for CreatePrivateVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreatePrivateVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreatePrivateVirtualInterfaceRequestPrivate::CreatePrivateVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, CreatePrivateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePrivateVirtualInterfaceRequest
 * class' copy constructor.
 */
CreatePrivateVirtualInterfaceRequestPrivate::CreatePrivateVirtualInterfaceRequestPrivate(
    const CreatePrivateVirtualInterfaceRequestPrivate &other, CreatePrivateVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
