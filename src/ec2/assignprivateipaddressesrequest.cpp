/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "assignprivateipaddressesrequest.h"
#include "assignprivateipaddressesrequest_p.h"
#include "assignprivateipaddressesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssignPrivateIpAddressesRequest
 * \brief The AssignPrivateIpAddressesRequest class provides an interface for EC2 AssignPrivateIpAddresses requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::assignPrivateIpAddresses
 */

/*!
 * Constructs a copy of \a other.
 */
AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest(const AssignPrivateIpAddressesRequest &other)
    : EC2Request(new AssignPrivateIpAddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssignPrivateIpAddressesRequest object.
 */
AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest()
    : EC2Request(new AssignPrivateIpAddressesRequestPrivate(EC2Request::AssignPrivateIpAddressesAction, this))
{

}

/*!
 * \reimp
 */
bool AssignPrivateIpAddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssignPrivateIpAddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssignPrivateIpAddressesRequest::response(QNetworkReply * const reply) const
{
    return new AssignPrivateIpAddressesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AssignPrivateIpAddressesRequestPrivate
 * \brief The AssignPrivateIpAddressesRequestPrivate class provides private implementation for AssignPrivateIpAddressesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a AssignPrivateIpAddressesRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
AssignPrivateIpAddressesRequestPrivate::AssignPrivateIpAddressesRequestPrivate(
    const EC2Request::Action action, AssignPrivateIpAddressesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssignPrivateIpAddressesRequest
 * class' copy constructor.
 */
AssignPrivateIpAddressesRequestPrivate::AssignPrivateIpAddressesRequestPrivate(
    const AssignPrivateIpAddressesRequestPrivate &other, AssignPrivateIpAddressesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
