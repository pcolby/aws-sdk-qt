/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatemacseckeyrequest.h"
#include "disassociatemacseckeyrequest_p.h"
#include "disassociatemacseckeyresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyRequest
 * \brief The DisassociateMacSecKeyRequest class provides an interface for DirectConnect DisassociateMacSecKey requests.
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
 * \sa DirectConnectClient::disassociateMacSecKey
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateMacSecKeyRequest::DisassociateMacSecKeyRequest(const DisassociateMacSecKeyRequest &other)
    : DirectConnectRequest(new DisassociateMacSecKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateMacSecKeyRequest object.
 */
DisassociateMacSecKeyRequest::DisassociateMacSecKeyRequest()
    : DirectConnectRequest(new DisassociateMacSecKeyRequestPrivate(DirectConnectRequest::DisassociateMacSecKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateMacSecKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateMacSecKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateMacSecKeyRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMacSecKeyResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyRequestPrivate
 * \brief The DisassociateMacSecKeyRequestPrivate class provides private implementation for DisassociateMacSecKeyRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DisassociateMacSecKeyRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DisassociateMacSecKeyRequestPrivate::DisassociateMacSecKeyRequestPrivate(
    const DirectConnectRequest::Action action, DisassociateMacSecKeyRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMacSecKeyRequest
 * class' copy constructor.
 */
DisassociateMacSecKeyRequestPrivate::DisassociateMacSecKeyRequestPrivate(
    const DisassociateMacSecKeyRequestPrivate &other, DisassociateMacSecKeyRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
