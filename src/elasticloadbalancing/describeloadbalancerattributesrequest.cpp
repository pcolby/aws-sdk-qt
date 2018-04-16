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
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerAttributesRequest
 *
 * \brief The DescribeLoadBalancerAttributesRequest class provides an interface for ElasticLoadBalancing DescribeLoadBalancerAttributes requests.
 *
 * \ingroup ElasticLoadBalancing
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 *  of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 *  traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 *  listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 *  protocol and port number for connections from the load balancer to the
 * 
 *  instances>
 * 
 *  Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 *  Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 *  href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 *  Load Balancers and Network Load
 * 
 *  Balancers>
 * 
 *  To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 *  instances with the load balancer using
 * 
 *  <a>RegisterInstancesWithLoadBalancer</a>>
 * 
 *  All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 *  repeat an operation, it succeeds with a 200 OK response
 *
 * \sa ElasticLoadBalancingClient::describeLoadBalancerAttributes
 */

/*!
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest(const DescribeLoadBalancerAttributesRequest &other)
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequest object.
 */
DescribeLoadBalancerAttributesRequest::DescribeLoadBalancerAttributesRequest()
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerAttributesRequestPrivate(ElasticLoadBalancingRequest::DescribeLoadBalancerAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoadBalancerAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeLoadBalancerAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoadBalancerAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancerAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeLoadBalancerAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DescribeLoadBalancerAttributesRequest instance.
 */
DescribeLoadBalancerAttributesRequestPrivate::DescribeLoadBalancerAttributesRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DescribeLoadBalancerAttributesRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
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
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
