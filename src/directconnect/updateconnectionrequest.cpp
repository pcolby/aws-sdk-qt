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

#include "updateconnectionrequest.h"
#include "updateconnectionrequest_p.h"
#include "updateconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateConnectionRequest
 * \brief The UpdateConnectionRequest class provides an interface for DirectConnect UpdateConnection requests.
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
 * \sa DirectConnectClient::updateConnection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectionRequest::UpdateConnectionRequest(const UpdateConnectionRequest &other)
    : DirectConnectRequest(new UpdateConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectionRequest object.
 */
UpdateConnectionRequest::UpdateConnectionRequest()
    : DirectConnectRequest(new UpdateConnectionRequestPrivate(DirectConnectRequest::UpdateConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::UpdateConnectionRequestPrivate
 * \brief The UpdateConnectionRequestPrivate class provides private implementation for UpdateConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateConnectionRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const DirectConnectRequest::Action action, UpdateConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectionRequest
 * class' copy constructor.
 */
UpdateConnectionRequestPrivate::UpdateConnectionRequestPrivate(
    const UpdateConnectionRequestPrivate &other, UpdateConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
