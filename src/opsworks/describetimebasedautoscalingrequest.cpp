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

#include "describetimebasedautoscalingrequest.h"
#include "describetimebasedautoscalingrequest_p.h"
#include "describetimebasedautoscalingresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeTimeBasedAutoScalingRequest
 *
 * @brief  Implements OpsWorks DescribeTimeBasedAutoScaling requests.
 *
 * @see    OpsWorksClient::describeTimeBasedAutoScaling
 */

/**
 * @brief  Constructs a new DescribeTimeBasedAutoScalingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTimeBasedAutoScalingRequest::DescribeTimeBasedAutoScalingRequest(const DescribeTimeBasedAutoScalingRequest &other)
    : OpsWorksRequest(new DescribeTimeBasedAutoScalingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTimeBasedAutoScalingRequest object.
 */
DescribeTimeBasedAutoScalingRequest::DescribeTimeBasedAutoScalingRequest()
    : OpsWorksRequest(new DescribeTimeBasedAutoScalingRequestPrivate(OpsWorksRequest::DescribeTimeBasedAutoScalingAction, this))
{

}

bool DescribeTimeBasedAutoScalingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTimeBasedAutoScalingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTimeBasedAutoScalingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeTimeBasedAutoScalingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTimeBasedAutoScalingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTimeBasedAutoScalingRequestPrivate
 *
 * @brief  Private implementation for DescribeTimeBasedAutoScalingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeBasedAutoScalingRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeTimeBasedAutoScalingRequest instance.
 */
DescribeTimeBasedAutoScalingRequestPrivate::DescribeTimeBasedAutoScalingRequestPrivate(
    const OpsWorksRequest::Action action, DescribeTimeBasedAutoScalingRequest * const q)
    : DescribeTimeBasedAutoScalingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeBasedAutoScalingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTimeBasedAutoScalingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTimeBasedAutoScalingRequest instance.
 */
DescribeTimeBasedAutoScalingRequestPrivate::DescribeTimeBasedAutoScalingRequestPrivate(
    const DescribeTimeBasedAutoScalingRequestPrivate &other, DescribeTimeBasedAutoScalingRequest * const q)
    : DescribeTimeBasedAutoScalingPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
