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

#include "modifycacheclusterrequest.h"
#include "modifycacheclusterrequest_p.h"
#include "modifycacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  ModifyCacheClusterRequest
 *
 * @brief  Implements ElastiCache ModifyCacheCluster requests.
 *
 * @see    ElastiCacheClient::modifyCacheCluster
 */

/**
 * @brief  Constructs a new ModifyCacheClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyCacheClusterRequest::ModifyCacheClusterRequest(const ModifyCacheClusterRequest &other)
    : ElastiCacheRequest(new ModifyCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyCacheClusterRequest object.
 */
ModifyCacheClusterRequest::ModifyCacheClusterRequest()
    : ElastiCacheRequest(new ModifyCacheClusterRequestPrivate(ElastiCacheRequest::ModifyCacheClusterAction, this))
{

}

bool ModifyCacheClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyCacheClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyCacheClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * ModifyCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyCacheClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyCacheClusterRequestPrivate
 *
 * @brief  Private implementation for ModifyCacheClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheClusterRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public ModifyCacheClusterRequest instance.
 */
ModifyCacheClusterRequestPrivate::ModifyCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyCacheClusterRequest * const q)
    : ModifyCacheClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyCacheClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyCacheClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyCacheClusterRequest instance.
 */
ModifyCacheClusterRequestPrivate::ModifyCacheClusterRequestPrivate(
    const ModifyCacheClusterRequestPrivate &other, ModifyCacheClusterRequest * const q)
    : ModifyCacheClusterPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
