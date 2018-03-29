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

#include "describeloadbalancerpolicytypesrequest.h"
#include "describeloadbalancerpolicytypesrequest_p.h"
#include "describeloadbalancerpolicytypesresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeLoadBalancerPolicyTypesRequest
 *
 * @brief  Implements ElasticLoadBalancing DescribeLoadBalancerPolicyTypes requests.
 *
 * @see    ElasticLoadBalancingClient::describeLoadBalancerPolicyTypes
 */

/**
 * @brief  Constructs a new DescribeLoadBalancerPolicyTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancerPolicyTypesRequest::DescribeLoadBalancerPolicyTypesRequest(const DescribeLoadBalancerPolicyTypesRequest &other)
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPolicyTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoadBalancerPolicyTypesRequest object.
 */
DescribeLoadBalancerPolicyTypesRequest::DescribeLoadBalancerPolicyTypesRequest()
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPolicyTypesRequestPrivate(ElasticLoadBalancingRequest::DescribeLoadBalancerPolicyTypesAction, this))
{

}

bool DescribeLoadBalancerPolicyTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoadBalancerPolicyTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancerPolicyTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancerPolicyTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerPolicyTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerPolicyTypesRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerPolicyTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPolicyTypesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancerPolicyTypesRequest instance.
 */
DescribeLoadBalancerPolicyTypesRequestPrivate::DescribeLoadBalancerPolicyTypesRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DescribeLoadBalancerPolicyTypesRequest * const q)
    : DescribeLoadBalancerPolicyTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPolicyTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerPolicyTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoadBalancerPolicyTypesRequest instance.
 */
DescribeLoadBalancerPolicyTypesRequestPrivate::DescribeLoadBalancerPolicyTypesRequestPrivate(
    const DescribeLoadBalancerPolicyTypesRequestPrivate &other, DescribeLoadBalancerPolicyTypesRequest * const q)
    : DescribeLoadBalancerPolicyTypesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
