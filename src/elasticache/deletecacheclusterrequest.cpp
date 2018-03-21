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

#include "deletecacheclusterrequest.h"
#include "deletecacheclusterrequest_p.h"
#include "deletecacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  DeleteCacheClusterRequest
 *
 * @brief  Implements ElastiCache DeleteCacheCluster requests.
 *
 * @see    ElastiCacheClient::deleteCacheCluster
 */

/**
 * @brief  Constructs a new DeleteCacheClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCacheClusterResponse::DeleteCacheClusterResponse(

/**
 * @brief  Constructs a new DeleteCacheClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCacheClusterRequest::DeleteCacheClusterRequest(const DeleteCacheClusterRequest &other)
    : ElastiCacheRequest(new DeleteCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCacheClusterRequest object.
 */
DeleteCacheClusterRequest::DeleteCacheClusterRequest()
    : ElastiCacheRequest(new DeleteCacheClusterRequestPrivate(ElastiCacheRequest::DeleteCacheClusterAction, this))
{

}

bool DeleteCacheClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCacheClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCacheClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * DeleteCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCacheClusterRequestPrivate
 *
 * @brief  Private implementation for DeleteCacheClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheClusterRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public DeleteCacheClusterRequest instance.
 */
DeleteCacheClusterRequestPrivate::DeleteCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheClusterRequest * const q)
    : DeleteCacheClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCacheClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCacheClusterRequest instance.
 */
DeleteCacheClusterRequestPrivate::DeleteCacheClusterRequestPrivate(
    const DeleteCacheClusterRequestPrivate &other, DeleteCacheClusterRequest * const q)
    : DeleteCacheClusterPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
