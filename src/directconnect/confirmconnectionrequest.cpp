// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmconnectionrequest.h"
#include "confirmconnectionrequest_p.h"
#include "confirmconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::ConfirmConnectionRequest
 * \brief The ConfirmConnectionRequest class provides an interface for DirectConnect ConfirmConnection requests.
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
 * \sa DirectConnectClient::confirmConnection
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmConnectionRequest::ConfirmConnectionRequest(const ConfirmConnectionRequest &other)
    : DirectConnectRequest(new ConfirmConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmConnectionRequest object.
 */
ConfirmConnectionRequest::ConfirmConnectionRequest()
    : DirectConnectRequest(new ConfirmConnectionRequestPrivate(DirectConnectRequest::ConfirmConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmConnectionRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::ConfirmConnectionRequestPrivate
 * \brief The ConfirmConnectionRequestPrivate class provides private implementation for ConfirmConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a ConfirmConnectionRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
ConfirmConnectionRequestPrivate::ConfirmConnectionRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmConnectionRequest
 * class' copy constructor.
 */
ConfirmConnectionRequestPrivate::ConfirmConnectionRequestPrivate(
    const ConfirmConnectionRequestPrivate &other, ConfirmConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
