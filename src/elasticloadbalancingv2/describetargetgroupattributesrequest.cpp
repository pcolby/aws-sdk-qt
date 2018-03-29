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

#include "describetargetgroupattributesrequest.h"
#include "describetargetgroupattributesrequest_p.h"
#include "describetargetgroupattributesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetGroupAttributesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeTargetGroupAttributes requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetGroupAttributes
 */

/**
 * @brief  Constructs a new DescribeTargetGroupAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTargetGroupAttributesRequest::DescribeTargetGroupAttributesRequest(const DescribeTargetGroupAttributesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeTargetGroupAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTargetGroupAttributesRequest object.
 */
DescribeTargetGroupAttributesRequest::DescribeTargetGroupAttributesRequest()
    : ElasticLoadBalancingv2Request(new DescribeTargetGroupAttributesRequestPrivate(ElasticLoadBalancingv2Request::DescribeTargetGroupAttributesAction, this))
{

}

bool DescribeTargetGroupAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTargetGroupAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTargetGroupAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeTargetGroupAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTargetGroupAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTargetGroupAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeTargetGroupAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeTargetGroupAttributesRequest instance.
 */
DescribeTargetGroupAttributesRequestPrivate::DescribeTargetGroupAttributesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeTargetGroupAttributesRequest * const q)
    : DescribeTargetGroupAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTargetGroupAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTargetGroupAttributesRequest instance.
 */
DescribeTargetGroupAttributesRequestPrivate::DescribeTargetGroupAttributesRequestPrivate(
    const DescribeTargetGroupAttributesRequestPrivate &other, DescribeTargetGroupAttributesRequest * const q)
    : DescribeTargetGroupAttributesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
