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

#include "describeloadbalancerpoliciesrequest.h"
#include "describeloadbalancerpoliciesrequest_p.h"
#include "describeloadbalancerpoliciesresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeLoadBalancerPoliciesRequest
 *
 * @brief  Implements ElasticLoadBalancing DescribeLoadBalancerPolicies requests.
 *
 * @see    ElasticLoadBalancingClient::describeLoadBalancerPolicies
 */

/**
 * @brief  Constructs a new DescribeLoadBalancerPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancerPoliciesRequest::DescribeLoadBalancerPoliciesRequest(const DescribeLoadBalancerPoliciesRequest &other)
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoadBalancerPoliciesRequest object.
 */
DescribeLoadBalancerPoliciesRequest::DescribeLoadBalancerPoliciesRequest()
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPoliciesRequestPrivate(ElasticLoadBalancingRequest::DescribeLoadBalancerPoliciesAction, this))
{

}

bool DescribeLoadBalancerPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoadBalancerPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancerPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DescribeLoadBalancerPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerPoliciesRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPoliciesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancerPoliciesRequest instance.
 */
DescribeLoadBalancerPoliciesRequestPrivate::DescribeLoadBalancerPoliciesRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DescribeLoadBalancerPoliciesRequest * const q)
    : DescribeLoadBalancerPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBalancerPoliciesRequest instance.
 */
DescribeLoadBalancerPoliciesRequestPrivate::DescribeLoadBalancerPoliciesRequestPrivate(
    const DescribeLoadBalancerPoliciesRequestPrivate &other, DescribeLoadBalancerPoliciesRequest * const q)
    : DescribeLoadBalancerPoliciesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS
