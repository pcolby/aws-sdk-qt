// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpublicvirtualinterfacerequest.h"
#include "createpublicvirtualinterfacerequest_p.h"
#include "createpublicvirtualinterfaceresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceRequest
 * \brief The CreatePublicVirtualInterfaceRequest class provides an interface for DirectConnect CreatePublicVirtualInterface requests.
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
 * \sa DirectConnectClient::createPublicVirtualInterface
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest(const CreatePublicVirtualInterfaceRequest &other)
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePublicVirtualInterfaceRequest object.
 */
CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest()
    : DirectConnectRequest(new CreatePublicVirtualInterfaceRequestPrivate(DirectConnectRequest::CreatePublicVirtualInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePublicVirtualInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePublicVirtualInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicVirtualInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicVirtualInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreatePublicVirtualInterfaceRequestPrivate
 * \brief The CreatePublicVirtualInterfaceRequestPrivate class provides private implementation for CreatePublicVirtualInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreatePublicVirtualInterfaceRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const DirectConnectRequest::Action action, CreatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicVirtualInterfaceRequest
 * class' copy constructor.
 */
CreatePublicVirtualInterfaceRequestPrivate::CreatePublicVirtualInterfaceRequestPrivate(
    const CreatePublicVirtualInterfaceRequestPrivate &other, CreatePublicVirtualInterfaceRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
