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

#include "terminateinstanceinautoscalinggrouprequest.h"
#include "terminateinstanceinautoscalinggrouprequest_p.h"
#include "terminateinstanceinautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  TerminateInstanceInAutoScalingGroupRequest
 *
 * @brief  Implements AutoScaling TerminateInstanceInAutoScalingGroup requests.
 *
 * @see    AutoScalingClient::terminateInstanceInAutoScalingGroup
 */

/**
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateInstanceInAutoScalingGroupRequest::TerminateInstanceInAutoScalingGroupRequest(const TerminateInstanceInAutoScalingGroupRequest &other)
    : AutoScalingRequest(new TerminateInstanceInAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupRequest object.
 */
TerminateInstanceInAutoScalingGroupRequest::TerminateInstanceInAutoScalingGroupRequest()
    : AutoScalingRequest(new TerminateInstanceInAutoScalingGroupRequestPrivate(AutoScalingRequest::TerminateInstanceInAutoScalingGroupAction, this))
{

}

bool TerminateInstanceInAutoScalingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateInstanceInAutoScalingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateInstanceInAutoScalingGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateInstanceInAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new TerminateInstanceInAutoScalingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateInstanceInAutoScalingGroupRequestPrivate
 *
 * @brief  Private implementation for TerminateInstanceInAutoScalingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public TerminateInstanceInAutoScalingGroupRequest instance.
 */
TerminateInstanceInAutoScalingGroupRequestPrivate::TerminateInstanceInAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, TerminateInstanceInAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateInstanceInAutoScalingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateInstanceInAutoScalingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateInstanceInAutoScalingGroupRequest instance.
 */
TerminateInstanceInAutoScalingGroupRequestPrivate::TerminateInstanceInAutoScalingGroupRequestPrivate(
    const TerminateInstanceInAutoScalingGroupRequestPrivate &other, TerminateInstanceInAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
