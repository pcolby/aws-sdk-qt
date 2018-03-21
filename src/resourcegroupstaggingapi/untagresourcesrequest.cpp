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

#include "untagresourcesrequest.h"
#include "untagresourcesrequest_p.h"
#include "untagresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  UntagResourcesRequest
 *
 * @brief  Implements ResourceGroupsTaggingAPI UntagResources requests.
 *
 * @see    ResourceGroupsTaggingAPIClient::untagResources
 */

/**
 * @brief  Constructs a new UntagResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagResourcesResponse::UntagResourcesResponse(

/**
 * @brief  Constructs a new UntagResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourcesRequest::UntagResourcesRequest(const UntagResourcesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new UntagResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagResourcesRequest object.
 */
UntagResourcesRequest::UntagResourcesRequest()
    : ResourceGroupsTaggingAPIRequest(new UntagResourcesRequestPrivate(ResourceGroupsTaggingAPIRequest::UntagResourcesAction, this))
{

}

bool UntagResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
AwsAbstractResponse * UntagResourcesRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagResourcesRequestPrivate
 *
 * @brief  Private implementation for UntagResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public UntagResourcesRequest instance.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, UntagResourcesRequest * const q)
    : UntagResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourcesRequest instance.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const UntagResourcesRequestPrivate &other, UntagResourcesRequest * const q)
    : UntagResourcesPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS
