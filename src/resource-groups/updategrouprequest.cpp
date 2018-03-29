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

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  UpdateGroupRequest
 *
 * @brief  Implements ResourceGroups UpdateGroup requests.
 *
 * @see    ResourceGroupsClient::updateGroup
 */

/**
 * @brief  Constructs a new UpdateGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : ResourceGroupsRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : ResourceGroupsRequest(new UpdateGroupRequestPrivate(ResourceGroupsRequest::UpdateGroupAction, this))
{

}

bool UpdateGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const ResourceGroupsRequest::Action action, UpdateGroupRequest * const q)
    : ResourceGroupsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGroupRequest instance.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : ResourceGroupsRequestPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
