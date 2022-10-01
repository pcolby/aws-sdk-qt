// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloadbalancerlistenersrequest.h"
#include "deleteloadbalancerlistenersrequest_p.h"
#include "deleteloadbalancerlistenersresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerListenersRequest
 * \brief The DeleteLoadBalancerListenersRequest class provides an interface for ElasticLoadBalancing DeleteLoadBalancerListeners requests.
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
 * \sa ElasticLoadBalancingClient::deleteLoadBalancerListeners
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoadBalancerListenersRequest::DeleteLoadBalancerListenersRequest(const DeleteLoadBalancerListenersRequest &other)
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerListenersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoadBalancerListenersRequest object.
 */
DeleteLoadBalancerListenersRequest::DeleteLoadBalancerListenersRequest()
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerListenersRequestPrivate(ElasticLoadBalancingRequest::DeleteLoadBalancerListenersAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoadBalancerListenersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoadBalancerListenersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoadBalancerListenersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerListenersResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancing::DeleteLoadBalancerListenersRequestPrivate
 * \brief The DeleteLoadBalancerListenersRequestPrivate class provides private implementation for DeleteLoadBalancerListenersRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a DeleteLoadBalancerListenersRequestPrivate object for ElasticLoadBalancing \a action,
 * with public implementation \a q.
 */
DeleteLoadBalancerListenersRequestPrivate::DeleteLoadBalancerListenersRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DeleteLoadBalancerListenersRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerListenersRequest
 * class' copy constructor.
 */
DeleteLoadBalancerListenersRequestPrivate::DeleteLoadBalancerListenersRequestPrivate(
    const DeleteLoadBalancerListenersRequestPrivate &other, DeleteLoadBalancerListenersRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
