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

#include "putscalingpolicyrequest.h"
#include "putscalingpolicyrequest_p.h"
#include "putscalingpolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  PutScalingPolicyRequest
 *
 * @brief  Implements AutoScaling PutScalingPolicy requests.
 *
 * @see    AutoScalingClient::putScalingPolicy
 */

/**
 * @brief  Constructs a new PutScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest(const PutScalingPolicyRequest &other)
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutScalingPolicyRequest object.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest()
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(AutoScalingRequest::PutScalingPolicyAction, this))
{

}

bool PutScalingPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutScalingPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * PutScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutScalingPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for PutScalingPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutScalingPolicyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public PutScalingPolicyRequest instance.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const AutoScalingRequest::Action action, PutScalingPolicyRequest * const q)
    : PutScalingPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutScalingPolicyRequest instance.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const PutScalingPolicyRequestPrivate &other, PutScalingPolicyRequest * const q)
    : PutScalingPolicyPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
