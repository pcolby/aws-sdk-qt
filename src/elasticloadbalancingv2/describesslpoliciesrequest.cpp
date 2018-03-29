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

#include "describesslpoliciesrequest.h"
#include "describesslpoliciesrequest_p.h"
#include "describesslpoliciesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeSSLPoliciesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeSSLPolicies requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeSSLPolicies
 */

/**
 * @brief  Constructs a new DescribeSSLPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSSLPoliciesRequest::DescribeSSLPoliciesRequest(const DescribeSSLPoliciesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeSSLPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSSLPoliciesRequest object.
 */
DescribeSSLPoliciesRequest::DescribeSSLPoliciesRequest()
    : ElasticLoadBalancingv2Request(new DescribeSSLPoliciesRequestPrivate(ElasticLoadBalancingv2Request::DescribeSSLPoliciesAction, this))
{

}

bool DescribeSSLPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSSLPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSSLPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeSSLPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSSLPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSSLPoliciesRequestPrivate
 *
 * @brief  Private implementation for DescribeSSLPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSSLPoliciesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeSSLPoliciesRequest instance.
 */
DescribeSSLPoliciesRequestPrivate::DescribeSSLPoliciesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeSSLPoliciesRequest * const q)
    : DescribeSSLPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSSLPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSSLPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSSLPoliciesRequest instance.
 */
DescribeSSLPoliciesRequestPrivate::DescribeSSLPoliciesRequestPrivate(
    const DescribeSSLPoliciesRequestPrivate &other, DescribeSSLPoliciesRequest * const q)
    : DescribeSSLPoliciesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
