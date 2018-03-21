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

#include "modifycacheparametergrouprequest.h"
#include "modifycacheparametergrouprequest_p.h"
#include "modifycacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyCacheParameterGroupRequest
 *
 * @brief  Implements ElastiCache ModifyCacheParameterGroup requests.
 *
 * @see    ElastiCacheClient::modifyCacheParameterGroup
 */

/**
 * @brief  Constructs a new ModifyCacheParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyCacheParameterGroupResponse::ModifyCacheParameterGroupResponse(

/**
 * @brief  Constructs a new ModifyCacheParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest(const ModifyCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new ModifyCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyCacheParameterGroupRequest object.
 */
ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest()
    : ElastiCacheRequest(new ModifyCacheParameterGroupRequestPrivate(ElastiCacheRequest::ModifyCacheParameterGroupAction, this))
{

}

bool ModifyCacheParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyCacheParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyCacheParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * ModifyCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyCacheParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyCacheParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyCacheParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheParameterGroupRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ModifyCacheParameterGroupRequest instance.
 */
ModifyCacheParameterGroupRequestPrivate::ModifyCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyCacheParameterGroupRequest * const q)
    : ModifyCacheParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyCacheParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyCacheParameterGroupRequest instance.
 */
ModifyCacheParameterGroupRequestPrivate::ModifyCacheParameterGroupRequestPrivate(
    const ModifyCacheParameterGroupRequestPrivate &other, ModifyCacheParameterGroupRequest * const q)
    : ModifyCacheParameterGroupPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
