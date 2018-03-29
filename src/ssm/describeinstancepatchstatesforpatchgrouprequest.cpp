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

#include "describeinstancepatchstatesforpatchgrouprequest.h"
#include "describeinstancepatchstatesforpatchgrouprequest_p.h"
#include "describeinstancepatchstatesforpatchgroupresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeInstancePatchStatesForPatchGroupRequest
 *
 * @brief  Implements SSM DescribeInstancePatchStatesForPatchGroup requests.
 *
 * @see    SSMClient::describeInstancePatchStatesForPatchGroup
 */

/**
 * @brief  Constructs a new DescribeInstancePatchStatesForPatchGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstancePatchStatesForPatchGroupRequest::DescribeInstancePatchStatesForPatchGroupRequest(const DescribeInstancePatchStatesForPatchGroupRequest &other)
    : SSMRequest(new DescribeInstancePatchStatesForPatchGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstancePatchStatesForPatchGroupRequest object.
 */
DescribeInstancePatchStatesForPatchGroupRequest::DescribeInstancePatchStatesForPatchGroupRequest()
    : SSMRequest(new DescribeInstancePatchStatesForPatchGroupRequestPrivate(SSMRequest::DescribeInstancePatchStatesForPatchGroupAction, this))
{

}

bool DescribeInstancePatchStatesForPatchGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstancePatchStatesForPatchGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstancePatchStatesForPatchGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeInstancePatchStatesForPatchGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstancePatchStatesForPatchGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstancePatchStatesForPatchGroupRequestPrivate
 *
 * @brief  Private implementation for DescribeInstancePatchStatesForPatchGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchStatesForPatchGroupRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeInstancePatchStatesForPatchGroupRequest instance.
 */
DescribeInstancePatchStatesForPatchGroupRequestPrivate::DescribeInstancePatchStatesForPatchGroupRequestPrivate(
    const SSMRequest::Action action, DescribeInstancePatchStatesForPatchGroupRequest * const q)
    : DescribeInstancePatchStatesForPatchGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchStatesForPatchGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstancePatchStatesForPatchGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstancePatchStatesForPatchGroupRequest instance.
 */
DescribeInstancePatchStatesForPatchGroupRequestPrivate::DescribeInstancePatchStatesForPatchGroupRequestPrivate(
    const DescribeInstancePatchStatesForPatchGroupRequestPrivate &other, DescribeInstancePatchStatesForPatchGroupRequest * const q)
    : DescribeInstancePatchStatesForPatchGroupPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
