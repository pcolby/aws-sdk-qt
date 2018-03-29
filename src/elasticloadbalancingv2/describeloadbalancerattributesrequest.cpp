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

#include "describeloadbalancerattributesrequest.h"
#include "describeloadbalancerattributesrequest_p.h"
#include "describeloadbalancerattributesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeLoadBalancerAttributesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeLoadBalancerAttributes requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeLoadBalancerAttributes
 */

/**
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest(const DescribeLoadBalancerAttributesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeLoadBalancerAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest()
    : ElasticLoadBalancingv2Request(new DescribeLoadBalancerAttributesRequestPrivate(ElasticLoadBalancingv2Request::DescribeLoadBalancerAttributesAction, this))
{

}

bool DescribeLoadBalancerAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoadBalancerAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancerAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeLoadBalancerAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancerAttributesRequest instance.
 */
DescribeLoadBalancerAttributesRequestPrivate::DescribeLoadBalancerAttributesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeLoadBalancerAttributesRequest * const q)
    : DescribeLoadBalancerAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBalancerAttributesRequest instance.
 */
DescribeLoadBalancerAttributesRequestPrivate::DescribeLoadBalancerAttributesRequestPrivate(
    const DescribeLoadBalancerAttributesRequestPrivate &other, DescribeLoadBalancerAttributesRequest * const q)
    : DescribeLoadBalancerAttributesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
