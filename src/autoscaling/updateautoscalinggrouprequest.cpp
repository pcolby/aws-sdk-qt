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

#include "updateautoscalinggrouprequest.h"
#include "updateautoscalinggrouprequest_p.h"
#include "updateautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  UpdateAutoScalingGroupRequest
 *
 * @brief  Implements AutoScaling UpdateAutoScalingGroup requests.
 *
 * @see    AutoScalingClient::updateAutoScalingGroup
 */

/**
 * @brief  Constructs a new UpdateAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAutoScalingGroupResponse::UpdateAutoScalingGroupResponse(

/**
 * @brief  Constructs a new UpdateAutoScalingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAutoScalingGroupRequest::UpdateAutoScalingGroupRequest(const UpdateAutoScalingGroupRequest &other)
    : AutoScalingRequest(new UpdateAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAutoScalingGroupRequest object.
 */
UpdateAutoScalingGroupRequest::UpdateAutoScalingGroupRequest()
    : AutoScalingRequest(new UpdateAutoScalingGroupRequestPrivate(AutoScalingRequest::UpdateAutoScalingGroupAction, this))
{

}

bool UpdateAutoScalingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAutoScalingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAutoScalingGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * UpdateAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAutoScalingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAutoScalingGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateAutoScalingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAutoScalingGroupRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public UpdateAutoScalingGroupRequest instance.
 */
UpdateAutoScalingGroupRequestPrivate::UpdateAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, UpdateAutoScalingGroupRequest * const q)
    : UpdateAutoScalingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAutoScalingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAutoScalingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAutoScalingGroupRequest instance.
 */
UpdateAutoScalingGroupRequestPrivate::UpdateAutoScalingGroupRequestPrivate(
    const UpdateAutoScalingGroupRequestPrivate &other, UpdateAutoScalingGroupRequest * const q)
    : UpdateAutoScalingGroupPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
