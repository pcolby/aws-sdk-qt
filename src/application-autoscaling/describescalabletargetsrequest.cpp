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

#include "describescalabletargetsrequest.h"
#include "describescalabletargetsrequest_p.h"
#include "describescalabletargetsresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  DescribeScalableTargetsRequest
 *
 * @brief  Implements ApplicationAutoScaling DescribeScalableTargets requests.
 *
 * @see    ApplicationAutoScalingClient::describeScalableTargets
 */

/**
 * @brief  Constructs a new DescribeScalableTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScalableTargetsRequest::DescribeScalableTargetsRequest(const DescribeScalableTargetsRequest &other)
    : ApplicationAutoScalingRequest(new DescribeScalableTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeScalableTargetsRequest object.
 */
DescribeScalableTargetsRequest::DescribeScalableTargetsRequest()
    : ApplicationAutoScalingRequest(new DescribeScalableTargetsRequestPrivate(ApplicationAutoScalingRequest::DescribeScalableTargetsAction, this))
{

}

bool DescribeScalableTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeScalableTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScalableTargetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
AwsAbstractResponse * DescribeScalableTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScalableTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeScalableTargetsRequestPrivate
 *
 * @brief  Private implementation for DescribeScalableTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalableTargetsRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeScalableTargetsRequest instance.
 */
DescribeScalableTargetsRequestPrivate::DescribeScalableTargetsRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DescribeScalableTargetsRequest * const q)
    : DescribeScalableTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScalableTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScalableTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScalableTargetsRequest instance.
 */
DescribeScalableTargetsRequestPrivate::DescribeScalableTargetsRequestPrivate(
    const DescribeScalableTargetsRequestPrivate &other, DescribeScalableTargetsRequest * const q)
    : DescribeScalableTargetsPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace AWS
