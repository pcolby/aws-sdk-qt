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

#include "removeautoscalingpolicyrequest.h"
#include "removeautoscalingpolicyrequest_p.h"
#include "removeautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  RemoveAutoScalingPolicyRequest
 *
 * @brief  Implements EMR RemoveAutoScalingPolicy requests.
 *
 * @see    EMRClient::removeAutoScalingPolicy
 */

/**
 * @brief  Constructs a new RemoveAutoScalingPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveAutoScalingPolicyResponse::RemoveAutoScalingPolicyResponse(

/**
 * @brief  Constructs a new RemoveAutoScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest(const RemoveAutoScalingPolicyRequest &other)
    : EMRRequest(new RemoveAutoScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveAutoScalingPolicyRequest object.
 */
RemoveAutoScalingPolicyRequest::RemoveAutoScalingPolicyRequest()
    : EMRRequest(new RemoveAutoScalingPolicyRequestPrivate(EMRRequest::RemoveAutoScalingPolicyAction, this))
{

}

bool RemoveAutoScalingPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveAutoScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveAutoScalingPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * RemoveAutoScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAutoScalingPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveAutoScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for RemoveAutoScalingPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAutoScalingPolicyRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public RemoveAutoScalingPolicyRequest instance.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const EMRRequest::Action action, RemoveAutoScalingPolicyRequest * const q)
    : RemoveAutoScalingPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAutoScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveAutoScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveAutoScalingPolicyRequest instance.
 */
RemoveAutoScalingPolicyRequestPrivate::RemoveAutoScalingPolicyRequestPrivate(
    const RemoveAutoScalingPolicyRequestPrivate &other, RemoveAutoScalingPolicyRequest * const q)
    : RemoveAutoScalingPolicyPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
