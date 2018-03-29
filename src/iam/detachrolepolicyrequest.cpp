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

#include "detachrolepolicyrequest.h"
#include "detachrolepolicyrequest_p.h"
#include "detachrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DetachRolePolicyRequest
 *
 * @brief  Implements IAM DetachRolePolicy requests.
 *
 * @see    IAMClient::detachRolePolicy
 */

/**
 * @brief  Constructs a new DetachRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachRolePolicyRequest::DetachRolePolicyRequest(const DetachRolePolicyRequest &other)
    : IAMRequest(new DetachRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachRolePolicyRequest object.
 */
DetachRolePolicyRequest::DetachRolePolicyRequest()
    : IAMRequest(new DetachRolePolicyRequestPrivate(IAMRequest::DetachRolePolicyAction, this))
{

}

bool DetachRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachRolePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachRolePolicyRequestPrivate
 *
 * @brief  Private implementation for DetachRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DetachRolePolicyRequest instance.
 */
DetachRolePolicyRequestPrivate::DetachRolePolicyRequestPrivate(
    const IAMRequest::Action action, DetachRolePolicyRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachRolePolicyRequest instance.
 */
DetachRolePolicyRequestPrivate::DetachRolePolicyRequestPrivate(
    const DetachRolePolicyRequestPrivate &other, DetachRolePolicyRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
