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

#include "describelistenercertificatesrequest.h"
#include "describelistenercertificatesrequest_p.h"
#include "describelistenercertificatesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeListenerCertificatesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DescribeListenerCertificates requests.
 *
 * @see    ElasticLoadBalancingv2Client::describeListenerCertificates
 */

/**
 * @brief  Constructs a new DescribeListenerCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeListenerCertificatesRequest::DescribeListenerCertificatesRequest(const DescribeListenerCertificatesRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeListenerCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeListenerCertificatesRequest object.
 */
DescribeListenerCertificatesRequest::DescribeListenerCertificatesRequest()
    : ElasticLoadBalancingv2Request(new DescribeListenerCertificatesRequestPrivate(ElasticLoadBalancingv2Request::DescribeListenerCertificatesAction, this))
{

}

bool DescribeListenerCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeListenerCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeListenerCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DescribeListenerCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeListenerCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeListenerCertificatesRequestPrivate
 *
 * @brief  Private implementation for DescribeListenerCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenerCertificatesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DescribeListenerCertificatesRequest instance.
 */
DescribeListenerCertificatesRequestPrivate::DescribeListenerCertificatesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeListenerCertificatesRequest * const q)
    : DescribeListenerCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeListenerCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeListenerCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeListenerCertificatesRequest instance.
 */
DescribeListenerCertificatesRequestPrivate::DescribeListenerCertificatesRequestPrivate(
    const DescribeListenerCertificatesRequestPrivate &other, DescribeListenerCertificatesRequest * const q)
    : DescribeListenerCertificatesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
