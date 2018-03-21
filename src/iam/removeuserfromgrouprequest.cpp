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

#include "removeuserfromgrouprequest.h"
#include "removeuserfromgrouprequest_p.h"
#include "removeuserfromgroupresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  RemoveUserFromGroupRequest
 *
 * @brief  Implements IAM RemoveUserFromGroup requests.
 *
 * @see    IAMClient::removeUserFromGroup
 */

/**
 * @brief  Constructs a new RemoveUserFromGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveUserFromGroupRequest::RemoveUserFromGroupRequest(const RemoveUserFromGroupRequest &other)
    : IAMRequest(new RemoveUserFromGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveUserFromGroupRequest object.
 */
RemoveUserFromGroupRequest::RemoveUserFromGroupRequest()
    : IAMRequest(new RemoveUserFromGroupRequestPrivate(IAMRequest::RemoveUserFromGroupAction, this))
{

}

bool RemoveUserFromGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveUserFromGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveUserFromGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * RemoveUserFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new RemoveUserFromGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveUserFromGroupRequestPrivate
 *
 * @brief  Private implementation for RemoveUserFromGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveUserFromGroupRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public RemoveUserFromGroupRequest instance.
 */
RemoveUserFromGroupRequestPrivate::RemoveUserFromGroupRequestPrivate(
    const IAMRequest::Action action, RemoveUserFromGroupRequest * const q)
    : RemoveUserFromGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveUserFromGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveUserFromGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveUserFromGroupRequest instance.
 */
RemoveUserFromGroupRequestPrivate::RemoveUserFromGroupRequestPrivate(
    const RemoveUserFromGroupRequestPrivate &other, RemoveUserFromGroupRequest * const q)
    : RemoveUserFromGroupPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
