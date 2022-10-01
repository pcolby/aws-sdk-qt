// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatemacseckeyrequest.h"
#include "associatemacseckeyrequest_p.h"
#include "associatemacseckeyresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AssociateMacSecKeyRequest
 * \brief The AssociateMacSecKeyRequest class provides an interface for DirectConnect AssociateMacSecKey requests.
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
 * \sa DirectConnectClient::associateMacSecKey
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateMacSecKeyRequest::AssociateMacSecKeyRequest(const AssociateMacSecKeyRequest &other)
    : DirectConnectRequest(new AssociateMacSecKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateMacSecKeyRequest object.
 */
AssociateMacSecKeyRequest::AssociateMacSecKeyRequest()
    : DirectConnectRequest(new AssociateMacSecKeyRequestPrivate(DirectConnectRequest::AssociateMacSecKeyAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateMacSecKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateMacSecKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateMacSecKeyRequest::response(QNetworkReply * const reply) const
{
    return new AssociateMacSecKeyResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::AssociateMacSecKeyRequestPrivate
 * \brief The AssociateMacSecKeyRequestPrivate class provides private implementation for AssociateMacSecKeyRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AssociateMacSecKeyRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
AssociateMacSecKeyRequestPrivate::AssociateMacSecKeyRequestPrivate(
    const DirectConnectRequest::Action action, AssociateMacSecKeyRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateMacSecKeyRequest
 * class' copy constructor.
 */
AssociateMacSecKeyRequestPrivate::AssociateMacSecKeyRequestPrivate(
    const AssociateMacSecKeyRequestPrivate &other, AssociateMacSecKeyRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
