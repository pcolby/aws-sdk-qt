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

#include "describerulesrequest.h"
#include "describerulesrequest_p.h"
#include "describerulesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeRulesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeRules requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeRules
 */

/**
 * @brief  Constructs a new DescribeRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRulesResponse::DescribeRulesResponse(

/**
 * @brief  Constructs a new DescribeRulesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRulesRequest::DescribeRulesRequest(const DescribeRulesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeRulesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRulesRequest object.
 */
DescribeRulesRequest::DescribeRulesRequest()
    : ElasticLoadBalancingv2Request(new DescribeRulesRequestPrivate(ElasticLoadBalancingv2Request::DescribeRulesAction, this))
{

}

bool DescribeRulesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRulesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRulesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeRulesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRulesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRulesRequestPrivate
 *
 * @brief  Private implementation for DescribeRulesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeRulesRequest instance.
 */
DescribeRulesRequestPrivate::DescribeRulesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeRulesRequest * const q)
    : DescribeRulesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRulesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRulesRequest instance.
 */
DescribeRulesRequestPrivate::DescribeRulesRequestPrivate(
    const DescribeRulesRequestPrivate &other, DescribeRulesRequest * const q)
    : DescribeRulesPrivate(other, q)
{

}
