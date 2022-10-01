// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerrequest_p.h"
#include "deleteloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerRequest
 * \brief The DeleteLoadBalancerRequest class provides an interface for ElasticLoadBalancing DeleteLoadBalancer requests.
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
 *  href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
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
 * \sa ElasticLoadBalancingClient::deleteLoadBalancer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest(const DeleteLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoadBalancerRequest object.
 */
DeleteLoadBalancerRequest::DeleteLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::DeleteLoadBalancerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoadBalancerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoadBalancerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerRequestPrivate
 * \brief The DeleteLoadBalancerRequestPrivate class provides private implementation for DeleteLoadBalancerRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DeleteLoadBalancerRequestPrivate object for ElasticLoadBalancing \a action,
 * with public implementation \a q.
 */
DeleteLoadBalancerRequestPrivate::DeleteLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DeleteLoadBalancerRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerRequest
 * class' copy constructor.
 */
DeleteLoadBalancerRequestPrivate::DeleteLoadBalancerRequestPrivate(
    const DeleteLoadBalancerRequestPrivate &other, DeleteLoadBalancerRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
