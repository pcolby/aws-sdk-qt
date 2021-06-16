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

#include "enableavailabilityzonesforloadbalancerrequest.h"
#include "enableavailabilityzonesforloadbalancerrequest_p.h"
#include "enableavailabilityzonesforloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::EnableAvailabilityZonesForLoadBalancerRequest
 * \brief The EnableAvailabilityZonesForLoadBalancerRequest class provides an interface for ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer requests.
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
 * \sa ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer
 */

/*!
 * Constructs a copy of \a other.
 */
EnableAvailabilityZonesForLoadBalancerRequest::EnableAvailabilityZonesForLoadBalancerRequest(const EnableAvailabilityZonesForLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new EnableAvailabilityZonesForLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableAvailabilityZonesForLoadBalancerRequest object.
 */
EnableAvailabilityZonesForLoadBalancerRequest::EnableAvailabilityZonesForLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new EnableAvailabilityZonesForLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::EnableAvailabilityZonesForLoadBalancerAction, this))
{

}

/*!
 * \reimp
 */
bool EnableAvailabilityZonesForLoadBalancerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableAvailabilityZonesForLoadBalancerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableAvailabilityZonesForLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new EnableAvailabilityZonesForLoadBalancerResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancing::EnableAvailabilityZonesForLoadBalancerRequestPrivate
 * \brief The EnableAvailabilityZonesForLoadBalancerRequestPrivate class provides private implementation for EnableAvailabilityZonesForLoadBalancerRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a EnableAvailabilityZonesForLoadBalancerRequestPrivate object for ElasticLoadBalancing \a action,
 * with public implementation \a q.
 */
EnableAvailabilityZonesForLoadBalancerRequestPrivate::EnableAvailabilityZonesForLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, EnableAvailabilityZonesForLoadBalancerRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableAvailabilityZonesForLoadBalancerRequest
 * class' copy constructor.
 */
EnableAvailabilityZonesForLoadBalancerRequestPrivate::EnableAvailabilityZonesForLoadBalancerRequestPrivate(
    const EnableAvailabilityZonesForLoadBalancerRequestPrivate &other, EnableAvailabilityZonesForLoadBalancerRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
