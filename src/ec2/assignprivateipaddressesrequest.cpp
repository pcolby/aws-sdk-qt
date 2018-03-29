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

namespace AWS {
namespace EC2 {

/**
 * @class  AssignPrivateIpAddressesRequest
 *
 * @brief  Implements EC2 AssignPrivateIpAddresses requests.
 *
 * @see    EC2Client::assignPrivateIpAddresses
 */

/**
 * @brief  Constructs a new AssignPrivateIpAddressesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest(const AssignPrivateIpAddressesRequest &other)
    : EC2Request(new AssignPrivateIpAddressesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssignPrivateIpAddressesRequest object.
 */
AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest()
    : EC2Request(new AssignPrivateIpAddressesRequestPrivate(EC2Request::AssignPrivateIpAddressesAction, this))
{

}

bool AssignPrivateIpAddressesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssignPrivateIpAddressesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssignPrivateIpAddressesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AssignPrivateIpAddressesRequest::response(QNetworkReply * const reply) const
{
    return new AssignPrivateIpAddressesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssignPrivateIpAddressesRequestPrivate
 *
 * @brief  Private implementation for AssignPrivateIpAddressesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignPrivateIpAddressesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AssignPrivateIpAddressesRequest instance.
 */
AssignPrivateIpAddressesRequestPrivate::AssignPrivateIpAddressesRequestPrivate(
    const EC2Request::Action action, AssignPrivateIpAddressesRequest * const q)
    : AssignPrivateIpAddressesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssignPrivateIpAddressesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssignPrivateIpAddressesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssignPrivateIpAddressesRequest instance.
 */
AssignPrivateIpAddressesRequestPrivate::AssignPrivateIpAddressesRequestPrivate(
    const AssignPrivateIpAddressesRequestPrivate &other, AssignPrivateIpAddressesRequest * const q)
    : AssignPrivateIpAddressesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
