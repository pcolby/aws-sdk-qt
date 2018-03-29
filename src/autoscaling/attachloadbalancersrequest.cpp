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

#include "attachloadbalancersrequest.h"
#include "attachloadbalancersrequest_p.h"
#include "attachloadbalancersresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  AttachLoadBalancersRequest
 *
 * @brief  Implements AutoScaling AttachLoadBalancers requests.
 *
 * @see    AutoScalingClient::attachLoadBalancers
 */

/**
 * @brief  Constructs a new AttachLoadBalancersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachLoadBalancersRequest::AttachLoadBalancersRequest(const AttachLoadBalancersRequest &other)
    : AutoScalingRequest(new AttachLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachLoadBalancersRequest object.
 */
AttachLoadBalancersRequest::AttachLoadBalancersRequest()
    : AutoScalingRequest(new AttachLoadBalancersRequestPrivate(AutoScalingRequest::AttachLoadBalancersAction, this))
{

}

bool AttachLoadBalancersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachLoadBalancersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachLoadBalancersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * AttachLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachLoadBalancersRequestPrivate
 *
 * @brief  Private implementation for AttachLoadBalancersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancersRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public AttachLoadBalancersRequest instance.
 */
AttachLoadBalancersRequestPrivate::AttachLoadBalancersRequestPrivate(
    const AutoScalingRequest::Action action, AttachLoadBalancersRequest * const q)
    : AttachLoadBalancersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachLoadBalancersRequest instance.
 */
AttachLoadBalancersRequestPrivate::AttachLoadBalancersRequestPrivate(
    const AttachLoadBalancersRequestPrivate &other, AttachLoadBalancersRequest * const q)
    : AttachLoadBalancersPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
