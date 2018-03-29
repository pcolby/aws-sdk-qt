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

#include "describeautoscalinggroupsrequest.h"
#include "describeautoscalinggroupsrequest_p.h"
#include "describeautoscalinggroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeAutoScalingGroupsRequest
 *
 * @brief  Implements AutoScaling DescribeAutoScalingGroups requests.
 *
 * @see    AutoScalingClient::describeAutoScalingGroups
 */

/**
 * @brief  Constructs a new DescribeAutoScalingGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAutoScalingGroupsRequest::DescribeAutoScalingGroupsRequest(const DescribeAutoScalingGroupsRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAutoScalingGroupsRequest object.
 */
DescribeAutoScalingGroupsRequest::DescribeAutoScalingGroupsRequest()
    : AutoScalingRequest(new DescribeAutoScalingGroupsRequestPrivate(AutoScalingRequest::DescribeAutoScalingGroupsAction, this))
{

}

bool DescribeAutoScalingGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAutoScalingGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAutoScalingGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoScalingGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAutoScalingGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeAutoScalingGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingGroupsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeAutoScalingGroupsRequest instance.
 */
DescribeAutoScalingGroupsRequestPrivate::DescribeAutoScalingGroupsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingGroupsRequest * const q)
    : DescribeAutoScalingGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAutoScalingGroupsRequest instance.
 */
DescribeAutoScalingGroupsRequestPrivate::DescribeAutoScalingGroupsRequestPrivate(
    const DescribeAutoScalingGroupsRequestPrivate &other, DescribeAutoScalingGroupsRequest * const q)
    : DescribeAutoScalingGroupsPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
