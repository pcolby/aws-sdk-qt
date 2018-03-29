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

#include "attachrolepolicyrequest.h"
#include "attachrolepolicyrequest_p.h"
#include "attachrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  AttachRolePolicyRequest
 *
 * @brief  Implements IAM AttachRolePolicy requests.
 *
 * @see    IAMClient::attachRolePolicy
 */

/**
 * @brief  Constructs a new AttachRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachRolePolicyRequest::AttachRolePolicyRequest(const AttachRolePolicyRequest &other)
    : IAMRequest(new AttachRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachRolePolicyRequest object.
 */
AttachRolePolicyRequest::AttachRolePolicyRequest()
    : IAMRequest(new AttachRolePolicyRequestPrivate(IAMRequest::AttachRolePolicyAction, this))
{

}

bool AttachRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachRolePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachRolePolicyRequestPrivate
 *
 * @brief  Private implementation for AttachRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AttachRolePolicyRequest instance.
 */
AttachRolePolicyRequestPrivate::AttachRolePolicyRequestPrivate(
    const IAMRequest::Action action, AttachRolePolicyRequest * const q)
    : AttachRolePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachRolePolicyRequest instance.
 */
AttachRolePolicyRequestPrivate::AttachRolePolicyRequestPrivate(
    const AttachRolePolicyRequestPrivate &other, AttachRolePolicyRequest * const q)
    : AttachRolePolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
