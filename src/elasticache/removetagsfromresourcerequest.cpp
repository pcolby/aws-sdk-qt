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

#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourcerequest_p.h"
#include "removetagsfromresourceresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  RemoveTagsFromResourceRequest
 *
 * @brief  Implements ElastiCache RemoveTagsFromResource requests.
 *
 * @see    ElastiCacheClient::removeTagsFromResource
 */

/**
 * @brief  Constructs a new RemoveTagsFromResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other)
    : ElastiCacheRequest(new RemoveTagsFromResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromResourceRequest object.
 */
RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest()
    : ElastiCacheRequest(new RemoveTagsFromResourceRequestPrivate(ElastiCacheRequest::RemoveTagsFromResourceAction, this))
{

}

bool RemoveTagsFromResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * RemoveTagsFromResourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromResourceRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromResourceRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromResourceRequest instance.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const ElastiCacheRequest::Action action, RemoveTagsFromResourceRequest * const q)
    : RemoveTagsFromResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromResourceRequest instance.
 */
RemoveTagsFromResourceRequestPrivate::RemoveTagsFromResourceRequestPrivate(
    const RemoveTagsFromResourceRequestPrivate &other, RemoveTagsFromResourceRequest * const q)
    : RemoveTagsFromResourcePrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
