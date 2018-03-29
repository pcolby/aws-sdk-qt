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

#include "deleterolepolicyrequest.h"
#include "deleterolepolicyrequest_p.h"
#include "deleterolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteRolePolicyRequest
 *
 * @brief  Implements IAM DeleteRolePolicy requests.
 *
 * @see    IAMClient::deleteRolePolicy
 */

/**
 * @brief  Constructs a new DeleteRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRolePolicyRequest::DeleteRolePolicyRequest(const DeleteRolePolicyRequest &other)
    : IAMRequest(new DeleteRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRolePolicyRequest object.
 */
DeleteRolePolicyRequest::DeleteRolePolicyRequest()
    : IAMRequest(new DeleteRolePolicyRequestPrivate(IAMRequest::DeleteRolePolicyAction, this))
{

}

bool DeleteRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRolePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRolePolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteRolePolicyRequest instance.
 */
DeleteRolePolicyRequestPrivate::DeleteRolePolicyRequestPrivate(
    const IAMRequest::Action action, DeleteRolePolicyRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRolePolicyRequest instance.
 */
DeleteRolePolicyRequestPrivate::DeleteRolePolicyRequestPrivate(
    const DeleteRolePolicyRequestPrivate &other, DeleteRolePolicyRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
