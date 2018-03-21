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
#include "applicationautoscalingrequest_p.h"

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  PutScalingPolicyRequest
 *
 * @brief  Implements ApplicationAutoScaling PutScalingPolicy requests.
 *
 * @see    ApplicationAutoScalingClient::putScalingPolicy
 */

/**
 * @brief  Constructs a new PutScalingPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutScalingPolicyResponse::PutScalingPolicyResponse(

/**
 * @brief  Constructs a new PutScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest(const PutScalingPolicyRequest &other)
    : ApplicationAutoScalingRequest(new PutScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutScalingPolicyRequest object.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest()
    : ApplicationAutoScalingRequest(new PutScalingPolicyRequestPrivate(ApplicationAutoScalingRequest::PutScalingPolicyAction, this))
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
 * @see  ApplicationAutoScalingClient::send
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
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public PutScalingPolicyRequest instance.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, PutScalingPolicyRequest * const q)
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
