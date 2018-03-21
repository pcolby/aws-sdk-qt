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

#include "createreplicationgrouprequest.h"
#include "createreplicationgrouprequest_p.h"
#include "createreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  CreateReplicationGroupRequest
 *
 * @brief  Implements ElastiCache CreateReplicationGroup requests.
 *
 * @see    ElastiCacheClient::createReplicationGroup
 */

/**
 * @brief  Constructs a new CreateReplicationGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReplicationGroupRequest::CreateReplicationGroupRequest(const CreateReplicationGroupRequest &other)
    : ElastiCacheRequest(new CreateReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReplicationGroupRequest object.
 */
CreateReplicationGroupRequest::CreateReplicationGroupRequest()
    : ElastiCacheRequest(new CreateReplicationGroupRequestPrivate(ElastiCacheRequest::CreateReplicationGroupAction, this))
{

}

bool CreateReplicationGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReplicationGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReplicationGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * CreateReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReplicationGroupRequestPrivate
 *
 * @brief  Private implementation for CreateReplicationGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public CreateReplicationGroupRequest instance.
 */
CreateReplicationGroupRequestPrivate::CreateReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateReplicationGroupRequest * const q)
    : CreateReplicationGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReplicationGroupRequest instance.
 */
CreateReplicationGroupRequestPrivate::CreateReplicationGroupRequestPrivate(
    const CreateReplicationGroupRequestPrivate &other, CreateReplicationGroupRequest * const q)
    : CreateReplicationGroupPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
