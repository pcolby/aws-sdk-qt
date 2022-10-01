// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectionrequest.h"
#include "createconnectionrequest_p.h"
#include "createconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateConnectionRequest
 * \brief The CreateConnectionRequest class provides an interface for DirectConnect CreateConnection requests.
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
 * \sa DirectConnectClient::createConnection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConnectionRequest::CreateConnectionRequest(const CreateConnectionRequest &other)
    : DirectConnectRequest(new CreateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConnectionRequest object.
 */
CreateConnectionRequest::CreateConnectionRequest()
    : DirectConnectRequest(new CreateConnectionRequestPrivate(DirectConnectRequest::CreateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateConnectionRequestPrivate
 * \brief The CreateConnectionRequestPrivate class provides private implementation for CreateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateConnectionRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const DirectConnectRequest::Action action, CreateConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConnectionRequest
 * class' copy constructor.
 */
CreateConnectionRequestPrivate::CreateConnectionRequestPrivate(
    const CreateConnectionRequestPrivate &other, CreateConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
