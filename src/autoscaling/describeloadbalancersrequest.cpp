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

#include "describeloadbalancersrequest.h"
#include "describeloadbalancersrequest_p.h"
#include "describeloadbalancersresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeLoadBalancersRequest
 *
 * @brief  Implements AutoScaling DescribeLoadBalancers requests.
 *
 * @see    AutoScalingClient::describeLoadBalancers
 */

/**
 * @brief  Constructs a new DescribeLoadBalancersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancersRequest::DescribeLoadBalancersRequest(const DescribeLoadBalancersRequest &other)
    : AutoScalingRequest(new DescribeLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoadBalancersRequest object.
 */
DescribeLoadBalancersRequest::DescribeLoadBalancersRequest()
    : AutoScalingRequest(new DescribeLoadBalancersRequestPrivate(AutoScalingRequest::DescribeLoadBalancersAction, this))
{

}

bool DescribeLoadBalancersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoadBalancersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancersRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancersRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancersRequest instance.
 */
DescribeLoadBalancersRequestPrivate::DescribeLoadBalancersRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLoadBalancersRequest * const q)
    : DescribeLoadBalancersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBalancersRequest instance.
 */
DescribeLoadBalancersRequestPrivate::DescribeLoadBalancersRequestPrivate(
    const DescribeLoadBalancersRequestPrivate &other, DescribeLoadBalancersRequest * const q)
    : DescribeLoadBalancersPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
