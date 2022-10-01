// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinterconnectrequest.h"
#include "createinterconnectrequest_p.h"
#include "createinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateInterconnectRequest
 * \brief The CreateInterconnectRequest class provides an interface for DirectConnect CreateInterconnect requests.
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
 * \sa DirectConnectClient::createInterconnect
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInterconnectRequest::CreateInterconnectRequest(const CreateInterconnectRequest &other)
    : DirectConnectRequest(new CreateInterconnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInterconnectRequest object.
 */
CreateInterconnectRequest::CreateInterconnectRequest()
    : DirectConnectRequest(new CreateInterconnectRequestPrivate(DirectConnectRequest::CreateInterconnectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInterconnectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInterconnectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new CreateInterconnectResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateInterconnectRequestPrivate
 * \brief The CreateInterconnectRequestPrivate class provides private implementation for CreateInterconnectRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateInterconnectRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateInterconnectRequestPrivate::CreateInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, CreateInterconnectRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInterconnectRequest
 * class' copy constructor.
 */
CreateInterconnectRequestPrivate::CreateInterconnectRequestPrivate(
    const CreateInterconnectRequestPrivate &other, CreateInterconnectRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
