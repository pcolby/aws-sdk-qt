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

#include "describelifecyclehooksrequest.h"
#include "describelifecyclehooksrequest_p.h"
#include "describelifecyclehooksresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeLifecycleHooksRequest
 *
 * @brief  Implements AutoScaling DescribeLifecycleHooks requests.
 *
 * @see    AutoScalingClient::describeLifecycleHooks
 */

/**
 * @brief  Constructs a new DescribeLifecycleHooksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLifecycleHooksResponse::DescribeLifecycleHooksResponse(

/**
 * @brief  Constructs a new DescribeLifecycleHooksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest(const DescribeLifecycleHooksRequest &other)
    : AutoScalingRequest(new DescribeLifecycleHooksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLifecycleHooksRequest object.
 */
DescribeLifecycleHooksRequest::DescribeLifecycleHooksRequest()
    : AutoScalingRequest(new DescribeLifecycleHooksRequestPrivate(AutoScalingRequest::DescribeLifecycleHooksAction, this))
{

}

bool DescribeLifecycleHooksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLifecycleHooksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLifecycleHooksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DescribeLifecycleHooksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLifecycleHooksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLifecycleHooksRequestPrivate
 *
 * @brief  Private implementation for DescribeLifecycleHooksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLifecycleHooksRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DescribeLifecycleHooksRequest instance.
 */
DescribeLifecycleHooksRequestPrivate::DescribeLifecycleHooksRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLifecycleHooksRequest * const q)
    : DescribeLifecycleHooksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLifecycleHooksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLifecycleHooksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLifecycleHooksRequest instance.
 */
DescribeLifecycleHooksRequestPrivate::DescribeLifecycleHooksRequestPrivate(
    const DescribeLifecycleHooksRequestPrivate &other, DescribeLifecycleHooksRequest * const q)
    : DescribeLifecycleHooksPrivate(other, q)
{

}
