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

#include "describetargethealthrequest.h"
#include "describetargethealthrequest_p.h"
#include "describetargethealthresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetHealthRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeTargetHealth requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetHealth
 */

/**
 * @brief  Constructs a new DescribeTargetHealthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTargetHealthRequest::DescribeTargetHealthRequest(const DescribeTargetHealthRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeTargetHealthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTargetHealthRequest object.
 */
DescribeTargetHealthRequest::DescribeTargetHealthRequest()
    : ElasticLoadBalancingv2Request(new DescribeTargetHealthRequestPrivate(ElasticLoadBalancingv2Request::DescribeTargetHealthAction, this))
{

}

bool DescribeTargetHealthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTargetHealthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTargetHealthResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeTargetHealthRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTargetHealthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTargetHealthRequestPrivate
 *
 * @brief  Private implementation for DescribeTargetHealthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetHealthRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeTargetHealthRequest instance.
 */
DescribeTargetHealthRequestPrivate::DescribeTargetHealthRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeTargetHealthRequest * const q)
    : DescribeTargetHealthPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetHealthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTargetHealthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTargetHealthRequest instance.
 */
DescribeTargetHealthRequestPrivate::DescribeTargetHealthRequestPrivate(
    const DescribeTargetHealthRequestPrivate &other, DescribeTargetHealthRequest * const q)
    : DescribeTargetHealthPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
