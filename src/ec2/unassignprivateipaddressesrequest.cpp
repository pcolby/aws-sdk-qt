/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "unassignprivateipaddressesrequest.h"
#include "unassignprivateipaddressesrequest_p.h"
#include "unassignprivateipaddressesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  UnassignPrivateIpAddressesRequest
 *
 * @brief  Implements EC2 UnassignPrivateIpAddresses requests.
 *
 * @see    EC2Client::unassignPrivateIpAddresses
 */

/**
 * @brief  Constructs a new UnassignPrivateIpAddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnassignPrivateIpAddressesRequest::UnassignPrivateIpAddressesRequest(const UnassignPrivateIpAddressesRequest &other)
    : EC2Request(new UnassignPrivateIpAddressesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnassignPrivateIpAddressesRequest object.
 */
UnassignPrivateIpAddressesRequest::UnassignPrivateIpAddressesRequest()
    : EC2Request(new UnassignPrivateIpAddressesRequestPrivate(EC2Request::UnassignPrivateIpAddressesAction, this))
{

}

bool UnassignPrivateIpAddressesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnassignPrivateIpAddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnassignPrivateIpAddressesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * UnassignPrivateIpAddressesRequest::response(QNetworkReply * const reply) const
{
    return new UnassignPrivateIpAddressesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnassignPrivateIpAddressesRequestPrivate
 *
 * @brief  Private implementation for UnassignPrivateIpAddressesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignPrivateIpAddressesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public UnassignPrivateIpAddressesRequest instance.
 */
UnassignPrivateIpAddressesRequestPrivate::UnassignPrivateIpAddressesRequestPrivate(
    const EC2Request::Action action, UnassignPrivateIpAddressesRequest * const q)
    : UnassignPrivateIpAddressesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnassignPrivateIpAddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnassignPrivateIpAddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnassignPrivateIpAddressesRequest instance.
 */
UnassignPrivateIpAddressesRequestPrivate::UnassignPrivateIpAddressesRequestPrivate(
    const UnassignPrivateIpAddressesRequestPrivate &other, UnassignPrivateIpAddressesRequest * const q)
    : UnassignPrivateIpAddressesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
