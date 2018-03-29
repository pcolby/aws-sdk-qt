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

#include "describelistenersrequest.h"
#include "describelistenersrequest_p.h"
#include "describelistenersresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeListenersRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeListeners requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeListeners
 */

/**
 * @brief  Constructs a new DescribeListenersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeListenersRequest::DescribeListenersRequest(const DescribeListenersRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeListenersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeListenersRequest object.
 */
DescribeListenersRequest::DescribeListenersRequest()
    : ElasticLoadBalancingv2Request(new DescribeListenersRequestPrivate(ElasticLoadBalancingv2Request::DescribeListenersAction, this))
{

}

bool DescribeListenersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeListenersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeListenersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeListenersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeListenersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeListenersRequestPrivate
 *
 * @brief  Private implementation for DescribeListenersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenersRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeListenersRequest instance.
 */
DescribeListenersRequestPrivate::DescribeListenersRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeListenersRequest * const q)
    : DescribeListenersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeListenersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeListenersRequest instance.
 */
DescribeListenersRequestPrivate::DescribeListenersRequestPrivate(
    const DescribeListenersRequestPrivate &other, DescribeListenersRequest * const q)
    : DescribeListenersPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
