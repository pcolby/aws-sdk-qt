/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeloadbalancerpoliciesrequest.h"
#include "describeloadbalancerpoliciesrequest_p.h"
#include "describeloadbalancerpoliciesresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPoliciesRequest
 * \brief The DescribeLoadBalancerPoliciesRequest class provides an interface for ElasticLoadBalancing DescribeLoadBalancerPolicies requests.
 *
 * \inmodule QtAwsElasticLoadBalancing
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
 * \sa ElasticLoadBalancingClient::describeLoadBalancerPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoadBalancerPoliciesRequest::DescribeLoadBalancerPoliciesRequest(const DescribeLoadBalancerPoliciesRequest &other)
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoadBalancerPoliciesRequest object.
 */
DescribeLoadBalancerPoliciesRequest::DescribeLoadBalancerPoliciesRequest()
    : ElasticLoadBalancingRequest(new DescribeLoadBalancerPoliciesRequestPrivate(ElasticLoadBalancingRequest::DescribeLoadBalancerPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoadBalancerPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoadBalancerPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancerPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancing::DescribeLoadBalancerPoliciesRequestPrivate
 * \brief The DescribeLoadBalancerPoliciesRequestPrivate class provides private implementation for DescribeLoadBalancerPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DescribeLoadBalancerPoliciesRequestPrivate object for ElasticLoadBalancing \a action,
 * with public implementation \a q.
 */
DescribeLoadBalancerPoliciesRequestPrivate::DescribeLoadBalancerPoliciesRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DescribeLoadBalancerPoliciesRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerPoliciesRequest
 * class' copy constructor.
 */
DescribeLoadBalancerPoliciesRequestPrivate::DescribeLoadBalancerPoliciesRequestPrivate(
    const DescribeLoadBalancerPoliciesRequestPrivate &other, DescribeLoadBalancerPoliciesRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
