// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelagrequest.h"
#include "deletelagrequest_p.h"
#include "deletelagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteLagRequest
 * \brief The DeleteLagRequest class provides an interface for DirectConnect DeleteLag requests.
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
 * \sa DirectConnectClient::deleteLag
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLagRequest::DeleteLagRequest(const DeleteLagRequest &other)
    : DirectConnectRequest(new DeleteLagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLagRequest object.
 */
DeleteLagRequest::DeleteLagRequest()
    : DirectConnectRequest(new DeleteLagRequestPrivate(DirectConnectRequest::DeleteLagAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLagRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLagResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DeleteLagRequestPrivate
 * \brief The DeleteLagRequestPrivate class provides private implementation for DeleteLagRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteLagRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DeleteLagRequestPrivate::DeleteLagRequestPrivate(
    const DirectConnectRequest::Action action, DeleteLagRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLagRequest
 * class' copy constructor.
 */
DeleteLagRequestPrivate::DeleteLagRequestPrivate(
    const DeleteLagRequestPrivate &other, DeleteLagRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
