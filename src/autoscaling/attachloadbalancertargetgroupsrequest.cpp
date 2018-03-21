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

#include "attachloadbalancertargetgroupsrequest.h"
#include "attachloadbalancertargetgroupsrequest_p.h"
#include "attachloadbalancertargetgroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  AttachLoadBalancerTargetGroupsRequest
 *
 * @brief  Implements AutoScaling AttachLoadBalancerTargetGroups requests.
 *
 * @see    AutoScalingClient::attachLoadBalancerTargetGroups
 */

/**
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachLoadBalancerTargetGroupsResponse::AttachLoadBalancerTargetGroupsResponse(

/**
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachLoadBalancerTargetGroupsRequest::AttachLoadBalancerTargetGroupsRequest(const AttachLoadBalancerTargetGroupsRequest &other)
    : AutoScalingRequest(new AttachLoadBalancerTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsRequest object.
 */
AttachLoadBalancerTargetGroupsRequest::AttachLoadBalancerTargetGroupsRequest()
    : AutoScalingRequest(new AttachLoadBalancerTargetGroupsRequestPrivate(AutoScalingRequest::AttachLoadBalancerTargetGroupsAction, this))
{

}

bool AttachLoadBalancerTargetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachLoadBalancerTargetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachLoadBalancerTargetGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * AttachLoadBalancerTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancerTargetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerTargetGroupsRequestPrivate
 *
 * @brief  Private implementation for AttachLoadBalancerTargetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public AttachLoadBalancerTargetGroupsRequest instance.
 */
AttachLoadBalancerTargetGroupsRequestPrivate::AttachLoadBalancerTargetGroupsRequestPrivate(
    const AutoScalingRequest::Action action, AttachLoadBalancerTargetGroupsRequest * const q)
    : AttachLoadBalancerTargetGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerTargetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancerTargetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachLoadBalancerTargetGroupsRequest instance.
 */
AttachLoadBalancerTargetGroupsRequestPrivate::AttachLoadBalancerTargetGroupsRequestPrivate(
    const AttachLoadBalancerTargetGroupsRequestPrivate &other, AttachLoadBalancerTargetGroupsRequest * const q)
    : AttachLoadBalancerTargetGroupsPrivate(other, q)
{

}
