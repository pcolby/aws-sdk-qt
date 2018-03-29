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

#include "describescalingpoliciesrequest.h"
#include "describescalingpoliciesrequest_p.h"
#include "describescalingpoliciesresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScalingPoliciesRequest
 *
 * @brief  Implements ApplicationAutoScaling DescribeScalingPolicies requests.
 *
 * @see    ApplicationAutoScalingClient::describeScalingPolicies
 */

/**
 * @brief  Constructs a new DescribeScalingPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalingPoliciesRequest::DescribeScalingPoliciesRequest(const DescribeScalingPoliciesRequest &other)
    : ApplicationAutoScalingRequest(new DescribeScalingPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeScalingPoliciesRequest object.
 */
DescribeScalingPoliciesRequest::DescribeScalingPoliciesRequest()
    : ApplicationAutoScalingRequest(new DescribeScalingPoliciesRequestPrivate(ApplicationAutoScalingRequest::DescribeScalingPoliciesAction, this))
{

}

bool DescribeScalingPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeScalingPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalingPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScalingPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalingPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeScalingPoliciesRequestPrivate
 *
 * @brief  Private implementation for DescribeScalingPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPoliciesRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScalingPoliciesRequest instance.
 */
DescribeScalingPoliciesRequestPrivate::DescribeScalingPoliciesRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DescribeScalingPoliciesRequest * const q)
    : DescribeScalingPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalingPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalingPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalingPoliciesRequest instance.
 */
DescribeScalingPoliciesRequestPrivate::DescribeScalingPoliciesRequestPrivate(
    const DescribeScalingPoliciesRequestPrivate &other, DescribeScalingPoliciesRequest * const q)
    : DescribeScalingPoliciesPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
