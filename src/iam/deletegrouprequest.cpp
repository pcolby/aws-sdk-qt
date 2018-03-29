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

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteGroupRequest
 *
 * @brief  Implements IAM DeleteGroup requests.
 *
 * @see    IAMClient::deleteGroup
 */

/**
 * @brief  Constructs a new DeleteGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : IAMRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : IAMRequest(new DeleteGroupRequestPrivate(IAMRequest::DeleteGroupAction, this))
{

}

bool DeleteGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const IAMRequest::Action action, DeleteGroupRequest * const q)
    : DeleteGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : DeleteGroupPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
