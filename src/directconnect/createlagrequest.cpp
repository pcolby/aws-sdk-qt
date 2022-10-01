// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlagrequest.h"
#include "createlagrequest_p.h"
#include "createlagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateLagRequest
 * \brief The CreateLagRequest class provides an interface for DirectConnect CreateLag requests.
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
 * \sa DirectConnectClient::createLag
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLagRequest::CreateLagRequest(const CreateLagRequest &other)
    : DirectConnectRequest(new CreateLagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLagRequest object.
 */
CreateLagRequest::CreateLagRequest()
    : DirectConnectRequest(new CreateLagRequestPrivate(DirectConnectRequest::CreateLagAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLagRequest::response(QNetworkReply * const reply) const
{
    return new CreateLagResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::CreateLagRequestPrivate
 * \brief The CreateLagRequestPrivate class provides private implementation for CreateLagRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateLagRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
CreateLagRequestPrivate::CreateLagRequestPrivate(
    const DirectConnectRequest::Action action, CreateLagRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLagRequest
 * class' copy constructor.
 */
CreateLagRequestPrivate::CreateLagRequestPrivate(
    const CreateLagRequestPrivate &other, CreateLagRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
