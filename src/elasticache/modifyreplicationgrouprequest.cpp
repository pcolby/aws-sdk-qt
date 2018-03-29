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

#include "modifyreplicationgrouprequest.h"
#include "modifyreplicationgrouprequest_p.h"
#include "modifyreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyReplicationGroupRequest
 *
 * @brief  Implements ElastiCache ModifyReplicationGroup requests.
 *
 * @see    ElastiCacheClient::modifyReplicationGroup
 */

/**
 * @brief  Constructs a new ModifyReplicationGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyReplicationGroupRequest::ModifyReplicationGroupRequest(const ModifyReplicationGroupRequest &other)
    : ElastiCacheRequest(new ModifyReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyReplicationGroupRequest object.
 */
ModifyReplicationGroupRequest::ModifyReplicationGroupRequest()
    : ElastiCacheRequest(new ModifyReplicationGroupRequestPrivate(ElastiCacheRequest::ModifyReplicationGroupAction, this))
{

}

bool ModifyReplicationGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyReplicationGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyReplicationGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * ModifyReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyReplicationGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyReplicationGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ModifyReplicationGroupRequest instance.
 */
ModifyReplicationGroupRequestPrivate::ModifyReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyReplicationGroupRequest * const q)
    : ModifyReplicationGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyReplicationGroupRequest instance.
 */
ModifyReplicationGroupRequestPrivate::ModifyReplicationGroupRequestPrivate(
    const ModifyReplicationGroupRequestPrivate &other, ModifyReplicationGroupRequest * const q)
    : ModifyReplicationGroupPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
