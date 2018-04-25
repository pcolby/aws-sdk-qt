/*
    Copyright 2013-2018 Paul Colby

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

#include "deletevpnconnectionrequest.h"
#include "deletevpnconnectionrequest_p.h"
#include "deletevpnconnectionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpnConnectionRequest
 * \brief The DeleteVpnConnectionRequest class provides an interface for EC2 DeleteVpnConnection requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteVpnConnection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVpnConnectionRequest::DeleteVpnConnectionRequest(const DeleteVpnConnectionRequest &other)
    : Ec2Request(new DeleteVpnConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVpnConnectionRequest object.
 */
DeleteVpnConnectionRequest::DeleteVpnConnectionRequest()
    : Ec2Request(new DeleteVpnConnectionRequestPrivate(Ec2Request::DeleteVpnConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVpnConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVpnConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVpnConnectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpnConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteVpnConnectionRequestPrivate
 * \brief The DeleteVpnConnectionRequestPrivate class provides private implementation for DeleteVpnConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteVpnConnectionRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteVpnConnectionRequestPrivate::DeleteVpnConnectionRequestPrivate(
    const Ec2Request::Action action, DeleteVpnConnectionRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpnConnectionRequest
 * class' copy constructor.
 */
DeleteVpnConnectionRequestPrivate::DeleteVpnConnectionRequestPrivate(
    const DeleteVpnConnectionRequestPrivate &other, DeleteVpnConnectionRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
