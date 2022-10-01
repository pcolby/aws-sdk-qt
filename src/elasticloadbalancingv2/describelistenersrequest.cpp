// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelistenersrequest.h"
#include "describelistenersrequest_p.h"
#include "describelistenersresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::DescribeListenersRequest
 * \brief The DescribeListenersRequest class provides an interface for ElasticLoadBalancingv2 DescribeListeners requests.
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
 *  Balancers, Gateway Load Balancers, and Classic Load Balancers. This reference covers the following load balancer
 * 
 *  types> <ul> <li>
 * 
 *  Application Load Balancer - Operates at the application layer (layer 7) and supports HTTP and
 * 
 *  HTTPS> </li> <li>
 * 
 *  Network Load Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and
 * 
 *  UDP> </li> <li>
 * 
 *  Gateway Load Balancer - Operates at the network layer (layer
 * 
 *  3)> </li> </ul>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load
 *  Balancing User
 * 
 *  Guide</a>>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 *
 * \sa ElasticLoadBalancingv2Client::describeListeners
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeListenersRequest::DescribeListenersRequest(const DescribeListenersRequest &other)
    : ElasticLoadBalancingv2Request(new DescribeListenersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeListenersRequest object.
 */
DescribeListenersRequest::DescribeListenersRequest()
    : ElasticLoadBalancingv2Request(new DescribeListenersRequestPrivate(ElasticLoadBalancingv2Request::DescribeListenersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeListenersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeListenersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeListenersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeListenersResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::DescribeListenersRequestPrivate
 * \brief The DescribeListenersRequestPrivate class provides private implementation for DescribeListenersRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a DescribeListenersRequestPrivate object for ElasticLoadBalancingv2 \a action,
 * with public implementation \a q.
 */
DescribeListenersRequestPrivate::DescribeListenersRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DescribeListenersRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeListenersRequest
 * class' copy constructor.
 */
DescribeListenersRequestPrivate::DescribeListenersRequestPrivate(
    const DescribeListenersRequestPrivate &other, DescribeListenersRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
