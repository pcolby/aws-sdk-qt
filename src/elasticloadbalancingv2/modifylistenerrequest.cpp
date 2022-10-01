// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifylistenerrequest.h"
#include "modifylistenerrequest_p.h"
#include "modifylistenerresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyListenerRequest
 * \brief The ModifyListenerRequest class provides an interface for ElasticLoadBalancingv2 ModifyListener requests.
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
 * \sa ElasticLoadBalancingv2Client::modifyListener
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyListenerRequest::ModifyListenerRequest(const ModifyListenerRequest &other)
    : ElasticLoadBalancingv2Request(new ModifyListenerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyListenerRequest object.
 */
ModifyListenerRequest::ModifyListenerRequest()
    : ElasticLoadBalancingv2Request(new ModifyListenerRequestPrivate(ElasticLoadBalancingv2Request::ModifyListenerAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyListenerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyListenerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyListenerRequest::response(QNetworkReply * const reply) const
{
    return new ModifyListenerResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::ModifyListenerRequestPrivate
 * \brief The ModifyListenerRequestPrivate class provides private implementation for ModifyListenerRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ModifyListenerRequestPrivate object for ElasticLoadBalancingv2 \a action,
 * with public implementation \a q.
 */
ModifyListenerRequestPrivate::ModifyListenerRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, ModifyListenerRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyListenerRequest
 * class' copy constructor.
 */
ModifyListenerRequestPrivate::ModifyListenerRequestPrivate(
    const ModifyListenerRequestPrivate &other, ModifyListenerRequest * const q)
    : ElasticLoadBalancingv2RequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
