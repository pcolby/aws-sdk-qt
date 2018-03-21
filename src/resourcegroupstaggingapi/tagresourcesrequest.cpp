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

#include "tagresourcesrequest.h"
#include "tagresourcesrequest_p.h"
#include "tagresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  TagResourcesRequest
 *
 * @brief  Implements ResourceGroupsTaggingAPI TagResources requests.
 *
 * @see    ResourceGroupsTaggingAPIClient::tagResources
 */

/**
 * @brief  Constructs a new TagResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagResourcesResponse::TagResourcesResponse(

/**
 * @brief  Constructs a new TagResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagResourcesRequest::TagResourcesRequest(const TagResourcesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new TagResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagResourcesRequest object.
 */
TagResourcesRequest::TagResourcesRequest()
    : ResourceGroupsTaggingAPIRequest(new TagResourcesRequestPrivate(ResourceGroupsTaggingAPIRequest::TagResourcesAction, this))
{

}

bool TagResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
AwsAbstractResponse * TagResourcesRequest::response(QNetworkReply * const reply) const
{
    return new TagResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagResourcesRequestPrivate
 *
 * @brief  Private implementation for TagResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public TagResourcesRequest instance.
 */
TagResourcesRequestPrivate::TagResourcesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, TagResourcesRequest * const q)
    : TagResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagResourcesRequest instance.
 */
TagResourcesRequestPrivate::TagResourcesRequestPrivate(
    const TagResourcesRequestPrivate &other, TagResourcesRequest * const q)
    : TagResourcesPrivate(other, q)
{

}
