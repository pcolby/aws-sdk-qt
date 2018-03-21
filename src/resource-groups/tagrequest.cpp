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

#include "tagrequest.h"
#include "tagrequest_p.h"
#include "tagresponse.h"
#include "resourcegroupsrequest_p.h"

namespace AWS {
namespace ResourceGroups {

/**
 * @class  TagRequest
 *
 * @brief  Implements ResourceGroups Tag requests.
 *
 * @see    ResourceGroupsClient::tag
 */

/**
 * @brief  Constructs a new TagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagResponse::TagResponse(

/**
 * @brief  Constructs a new TagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagRequest::TagRequest(const TagRequest &other)
    : ResourceGroupsRequest(new TagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagRequest object.
 */
TagRequest::TagRequest()
    : ResourceGroupsRequest(new TagRequestPrivate(ResourceGroupsRequest::TagAction, this))
{

}

bool TagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
AwsAbstractResponse * TagRequest::response(QNetworkReply * const reply) const
{
    return new TagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagRequestPrivate
 *
 * @brief  Private implementation for TagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public TagRequest instance.
 */
TagRequestPrivate::TagRequestPrivate(
    const ResourceGroupsRequest::Action action, TagRequest * const q)
    : TagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagRequest instance.
 */
TagRequestPrivate::TagRequestPrivate(
    const TagRequestPrivate &other, TagRequest * const q)
    : TagPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace AWS
