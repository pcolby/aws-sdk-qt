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

#include "describetagsrequest.h"
#include "describetagsrequest_p.h"
#include "describetagsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTagsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeTags requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeTags
 */

/**
 * @brief  Constructs a new DescribeTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTagsResponse::DescribeTagsResponse(

/**
 * @brief  Constructs a new DescribeTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTagsRequest::DescribeTagsRequest(const DescribeTagsRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTagsRequest object.
 */
DescribeTagsRequest::DescribeTagsRequest()
    : ElasticLoadBalancingv2Request(new DescribeTagsRequestPrivate(ElasticLoadBalancingv2Request::DescribeTagsAction, this))
{

}

bool DescribeTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeTagsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTagsRequestPrivate
 *
 * @brief  Private implementation for DescribeTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeTagsRequest * const q)
    : DescribeTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTagsRequest instance.
 */
DescribeTagsRequestPrivate::DescribeTagsRequestPrivate(
    const DescribeTagsRequestPrivate &other, DescribeTagsRequest * const q)
    : DescribeTagsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
