// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateconnectionwithlagrequest.h"
#include "associateconnectionwithlagrequest_p.h"
#include "associateconnectionwithlagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateConnectionWithLagRequest
 * \brief The AssociateConnectionWithLagRequest class provides an interface for DirectConnect AssociateConnectionWithLag requests.
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
 * \sa DirectConnectClient::associateConnectionWithLag
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest(const AssociateConnectionWithLagRequest &other)
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateConnectionWithLagRequest object.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest()
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(DirectConnectRequest::AssociateConnectionWithLagAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateConnectionWithLagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateConnectionWithLagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateConnectionWithLagRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConnectionWithLagResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AssociateConnectionWithLagRequestPrivate
 * \brief The AssociateConnectionWithLagRequestPrivate class provides private implementation for AssociateConnectionWithLagRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateConnectionWithLagRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const DirectConnectRequest::Action action, AssociateConnectionWithLagRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateConnectionWithLagRequest
 * class' copy constructor.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const AssociateConnectionWithLagRequestPrivate &other, AssociateConnectionWithLagRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
