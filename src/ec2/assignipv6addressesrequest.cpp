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

#include "assignipv6addressesrequest.h"
#include "assignipv6addressesrequest_p.h"
#include "assignipv6addressesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AssignIpv6AddressesRequest
 *
 * \brief The AssignIpv6AddressesRequest class provides an interface for EC2 AssignIpv6Addresses requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::assignIpv6Addresses
 */

/*!
 * @brief  Constructs a new AssignIpv6AddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssignIpv6AddressesRequest::AssignIpv6AddressesRequest(const AssignIpv6AddressesRequest &other)
    : EC2Request(new AssignIpv6AddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssignIpv6AddressesRequest object.
 */
AssignIpv6AddressesRequest::AssignIpv6AddressesRequest()
    : EC2Request(new AssignIpv6AddressesRequestPrivate(EC2Request::AssignIpv6AddressesAction, this))
{

}

/*!
 * \reimp
 */
bool AssignIpv6AddressesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AssignIpv6AddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssignIpv6AddressesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * AssignIpv6AddressesRequest::response(QNetworkReply * const reply) const
{
    return new AssignIpv6AddressesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssignIpv6AddressesRequestPrivate
 *
 * @brief  Private implementation for AssignIpv6AddressesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssignIpv6AddressesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssignIpv6AddressesRequest instance.
 */
AssignIpv6AddressesRequestPrivate::AssignIpv6AddressesRequestPrivate(
    const EC2Request::Action action, AssignIpv6AddressesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssignIpv6AddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssignIpv6AddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssignIpv6AddressesRequest instance.
 */
AssignIpv6AddressesRequestPrivate::AssignIpv6AddressesRequestPrivate(
    const AssignIpv6AddressesRequestPrivate &other, AssignIpv6AddressesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
