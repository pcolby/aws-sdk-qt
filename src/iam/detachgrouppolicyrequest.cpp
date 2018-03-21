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

#include "detachgrouppolicyrequest.h"
#include "detachgrouppolicyrequest_p.h"
#include "detachgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DetachGroupPolicyRequest
 *
 * @brief  Implements IAM DetachGroupPolicy requests.
 *
 * @see    IAMClient::detachGroupPolicy
 */

/**
 * @brief  Constructs a new DetachGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachGroupPolicyRequest::DetachGroupPolicyRequest(const DetachGroupPolicyRequest &other)
    : IAMRequest(new DetachGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachGroupPolicyRequest object.
 */
DetachGroupPolicyRequest::DetachGroupPolicyRequest()
    : IAMRequest(new DetachGroupPolicyRequestPrivate(IAMRequest::DetachGroupPolicyAction, this))
{

}

bool DetachGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachGroupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DetachGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for DetachGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DetachGroupPolicyRequest instance.
 */
DetachGroupPolicyRequestPrivate::DetachGroupPolicyRequestPrivate(
    const IAMRequest::Action action, DetachGroupPolicyRequest * const q)
    : DetachGroupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachGroupPolicyRequest instance.
 */
DetachGroupPolicyRequestPrivate::DetachGroupPolicyRequestPrivate(
    const DetachGroupPolicyRequestPrivate &other, DetachGroupPolicyRequest * const q)
    : DetachGroupPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
