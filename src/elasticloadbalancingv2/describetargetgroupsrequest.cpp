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

#include "describetargetgroupsrequest.h"
#include "describetargetgroupsrequest_p.h"
#include "describetargetgroupsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetGroupsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeTargetGroups requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetGroups
 */

/**
 * @brief  Constructs a new DescribeTargetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTargetGroupsRequest::DescribeTargetGroupsRequest(const DescribeTargetGroupsRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTargetGroupsRequest object.
 */
DescribeTargetGroupsRequest::DescribeTargetGroupsRequest()
    : ElasticLoadBalancingv2Request(new DescribeTargetGroupsRequestPrivate(ElasticLoadBalancingv2Request::DescribeTargetGroupsAction, this))
{

}

bool DescribeTargetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTargetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTargetGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTargetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTargetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeTargetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeTargetGroupsRequest instance.
 */
DescribeTargetGroupsRequestPrivate::DescribeTargetGroupsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeTargetGroupsRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTargetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTargetGroupsRequest instance.
 */
DescribeTargetGroupsRequestPrivate::DescribeTargetGroupsRequestPrivate(
    const DescribeTargetGroupsRequestPrivate &other, DescribeTargetGroupsRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
