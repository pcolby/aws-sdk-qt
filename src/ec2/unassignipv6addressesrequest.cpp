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

#include "unassignipv6addressesrequest.h"
#include "unassignipv6addressesrequest_p.h"
#include "unassignipv6addressesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::UnassignIpv6AddressesRequest
 * \brief The UnassignIpv6AddressesRequest class provides an interface for EC2 UnassignIpv6Addresses requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::unassignIpv6Addresses
 */

/*!
 * Constructs a copy of \a other.
 */
UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest(const UnassignIpv6AddressesRequest &other)
    : EC2Request(new UnassignIpv6AddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UnassignIpv6AddressesRequest object.
 */
UnassignIpv6AddressesRequest::UnassignIpv6AddressesRequest()
    : EC2Request(new UnassignIpv6AddressesRequestPrivate(EC2Request::UnassignIpv6AddressesAction, this))
{

}

/*!
 * \reimp
 */
bool UnassignIpv6AddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UnassignIpv6AddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UnassignIpv6AddressesRequest::response(QNetworkReply * const reply) const
{
    return new UnassignIpv6AddressesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::UnassignIpv6AddressesRequestPrivate
 * \brief The UnassignIpv6AddressesRequestPrivate class provides private implementation for UnassignIpv6AddressesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a UnassignIpv6AddressesRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
UnassignIpv6AddressesRequestPrivate::UnassignIpv6AddressesRequestPrivate(
    const EC2Request::Action action, UnassignIpv6AddressesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UnassignIpv6AddressesRequest
 * class' copy constructor.
 */
UnassignIpv6AddressesRequestPrivate::UnassignIpv6AddressesRequestPrivate(
    const UnassignIpv6AddressesRequestPrivate &other, UnassignIpv6AddressesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
