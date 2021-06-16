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

#include "setruleprioritiesrequest.h"
#include "setruleprioritiesrequest_p.h"
#include "setruleprioritiesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::SetRulePrioritiesRequest
 * \brief The SetRulePrioritiesRequest class provides an interface for ElasticLoadBalancingv2 SetRulePriorities requests.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, and Classic Load
 * 
 *  Balancers>
 * 
 *  An Application Load Balancer makes routing and load balancing decisions at the application layer (HTTP/HTTPS). A Network
 *  Load Balancer makes routing and load balancing decisions at the transport layer (TCP/TLS). Both Application Load
 *  Balancers and Network Load Balancers can route requests to one or more ports on each EC2 instance or container instance
 *  in your virtual private cloud
 * 
 *  (VPC)>
 * 
 *  A Classic Load Balancer makes routing and load balancing decisions either at the transport layer (TCP/SSL) or the
 *  application layer (HTTP/HTTPS), and supports either EC2-Classic or a VPC. For more information, see the <a
 *  href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2015-12-01 API, which supports Application Load Balancers and Network Load Balancers. The
 *  2012-06-01 API supports Classic Load
 * 
 *  Balancers>
 * 
 *  To get started, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Create a load balancer using
 * 
 *  <a>CreateLoadBalancer</a>> </li> <li>
 * 
 *  Create a target group using
 * 
 *  <a>CreateTargetGroup</a>> </li> <li>
 * 
 *  Register targets for the target group using
 * 
 *  <a>RegisterTargets</a>> </li> <li>
 * 
 *  Create one or more listeners for your load balancer using
 * 
 *  <a>CreateListener</a>> </li> </ol>
 * 
 *  To delete a load balancer and its related resources, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Delete the load balancer using
 * 
 *  <a>DeleteLoadBalancer</a>> </li> <li>
 * 
 *  Delete the target group using
 * 
 *  <a>DeleteTargetGroup</a>> </li> </ol>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::setRulePriorities
 */

/*!
 * Constructs a copy of \a other.
 */
SetRulePrioritiesRequest::SetRulePrioritiesRequest(const SetRulePrioritiesRequest &other)
    : ElasticLoadBalancingv2Request(new SetRulePrioritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetRulePrioritiesRequest object.
 */
SetRulePrioritiesRequest::SetRulePrioritiesRequest()
    : ElasticLoadBalancingv2Request(new SetRulePrioritiesRequestPrivate(ElasticLoadBalancingv2Request::SetRulePrioritiesAction, this))
{

}

/*!
 * \reimp
 */
bool SetRulePrioritiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetRulePrioritiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetRulePrioritiesRequest::response(QNetworkReply * const reply) const
{
    return new SetRulePrioritiesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::SetRulePrioritiesRequestPrivate
 * \brief The SetRulePrioritiesRequestPrivate class provides private implementation for SetRulePrioritiesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a SetRulePrioritiesRequestPrivate object for ElasticLoadBalancingv2 \a action,
 * with public implementation \a q.
 */
SetRulePrioritiesRequestPrivate::SetRulePrioritiesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, SetRulePrioritiesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetRulePrioritiesRequest
 * class' copy constructor.
 */
SetRulePrioritiesRequestPrivate::SetRulePrioritiesRequestPrivate(
    const SetRulePrioritiesRequestPrivate &other, SetRulePrioritiesRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
