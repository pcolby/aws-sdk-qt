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

#include "deleteuserpolicyrequest.h"
#include "deleteuserpolicyrequest_p.h"
#include "deleteuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteUserPolicyRequest
 *
 * @brief  Implements IAM DeleteUserPolicy requests.
 *
 * @see    IAMClient::deleteUserPolicy
 */

/**
 * @brief  Constructs a new DeleteUserPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserPolicyRequest::DeleteUserPolicyRequest(const DeleteUserPolicyRequest &other)
    : IAMRequest(new DeleteUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserPolicyRequest object.
 */
DeleteUserPolicyRequest::DeleteUserPolicyRequest()
    : IAMRequest(new DeleteUserPolicyRequestPrivate(IAMRequest::DeleteUserPolicyAction, this))
{

}

bool DeleteUserPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteUserPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteUserPolicyRequest instance.
 */
DeleteUserPolicyRequestPrivate::DeleteUserPolicyRequestPrivate(
    const IAMRequest::Action action, DeleteUserPolicyRequest * const q)
    : DeleteUserPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserPolicyRequest instance.
 */
DeleteUserPolicyRequestPrivate::DeleteUserPolicyRequestPrivate(
    const DeleteUserPolicyRequestPrivate &other, DeleteUserPolicyRequest * const q)
    : DeleteUserPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
