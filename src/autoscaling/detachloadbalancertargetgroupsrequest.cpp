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

#include "detachloadbalancertargetgroupsrequest.h"
#include "detachloadbalancertargetgroupsrequest_p.h"
#include "detachloadbalancertargetgroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DetachLoadBalancerTargetGroupsRequest
 *
 * @brief  Implements AutoScaling DetachLoadBalancerTargetGroups requests.
 *
 * @see    AutoScalingClient::detachLoadBalancerTargetGroups
 */

/**
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachLoadBalancerTargetGroupsRequest::DetachLoadBalancerTargetGroupsRequest(const DetachLoadBalancerTargetGroupsRequest &other)
    : AutoScalingRequest(new DetachLoadBalancerTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsRequest object.
 */
DetachLoadBalancerTargetGroupsRequest::DetachLoadBalancerTargetGroupsRequest()
    : AutoScalingRequest(new DetachLoadBalancerTargetGroupsRequestPrivate(AutoScalingRequest::DetachLoadBalancerTargetGroupsAction, this))
{

}

bool DetachLoadBalancerTargetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachLoadBalancerTargetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachLoadBalancerTargetGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DetachLoadBalancerTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DetachLoadBalancerTargetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachLoadBalancerTargetGroupsRequestPrivate
 *
 * @brief  Private implementation for DetachLoadBalancerTargetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DetachLoadBalancerTargetGroupsRequest instance.
 */
DetachLoadBalancerTargetGroupsRequestPrivate::DetachLoadBalancerTargetGroupsRequestPrivate(
    const AutoScalingRequest::Action action, DetachLoadBalancerTargetGroupsRequest * const q)
    : DetachLoadBalancerTargetGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerTargetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachLoadBalancerTargetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachLoadBalancerTargetGroupsRequest instance.
 */
DetachLoadBalancerTargetGroupsRequestPrivate::DetachLoadBalancerTargetGroupsRequestPrivate(
    const DetachLoadBalancerTargetGroupsRequestPrivate &other, DetachLoadBalancerTargetGroupsRequest * const q)
    : DetachLoadBalancerTargetGroupsPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
