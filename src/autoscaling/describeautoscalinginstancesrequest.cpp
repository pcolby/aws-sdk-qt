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

#include "describeautoscalinginstancesrequest.h"
#include "describeautoscalinginstancesrequest_p.h"
#include "describeautoscalinginstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeAutoScalingInstancesRequest
 *
 * @brief  Implements AutoScaling DescribeAutoScalingInstances requests.
 *
 * @see    AutoScalingClient::describeAutoScalingInstances
 */

/**
 * @brief  Constructs a new DescribeAutoScalingInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest(const DescribeAutoScalingInstancesRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAutoScalingInstancesRequest object.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest()
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(AutoScalingRequest::DescribeAutoScalingInstancesAction, this))
{

}

bool DescribeAutoScalingInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAutoScalingInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAutoScalingInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeAutoScalingInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAutoScalingInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeAutoScalingInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingInstancesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeAutoScalingInstancesRequest instance.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingInstancesRequest * const q)
    : DescribeAutoScalingInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAutoScalingInstancesRequest instance.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const DescribeAutoScalingInstancesRequestPrivate &other, DescribeAutoScalingInstancesRequest * const q)
    : DescribeAutoScalingInstancesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
