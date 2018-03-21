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

#include "modifyreservedinstancesrequest.h"
#include "modifyreservedinstancesrequest_p.h"
#include "modifyreservedinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ModifyReservedInstancesRequest
 *
 * @brief  Implements EC2 ModifyReservedInstances requests.
 *
 * @see    EC2Client::modifyReservedInstances
 */

/**
 * @brief  Constructs a new ModifyReservedInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReservedInstancesRequest::ModifyReservedInstancesRequest(const ModifyReservedInstancesRequest &other)
    : EC2Request(new ModifyReservedInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReservedInstancesRequest object.
 */
ModifyReservedInstancesRequest::ModifyReservedInstancesRequest()
    : EC2Request(new ModifyReservedInstancesRequestPrivate(EC2Request::ModifyReservedInstancesAction, this))
{

}

bool ModifyReservedInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReservedInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReservedInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ModifyReservedInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReservedInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReservedInstancesRequestPrivate
 *
 * @brief  Private implementation for ModifyReservedInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReservedInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyReservedInstancesRequest instance.
 */
ModifyReservedInstancesRequestPrivate::ModifyReservedInstancesRequestPrivate(
    const EC2Request::Action action, ModifyReservedInstancesRequest * const q)
    : ModifyReservedInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReservedInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReservedInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReservedInstancesRequest instance.
 */
ModifyReservedInstancesRequestPrivate::ModifyReservedInstancesRequestPrivate(
    const ModifyReservedInstancesRequestPrivate &other, ModifyReservedInstancesRequest * const q)
    : ModifyReservedInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
