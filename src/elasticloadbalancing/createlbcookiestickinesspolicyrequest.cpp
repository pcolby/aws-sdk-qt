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

#include "createlbcookiestickinesspolicyrequest.h"
#include "createlbcookiestickinesspolicyrequest_p.h"
#include "createlbcookiestickinesspolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::CreateLBCookieStickinessPolicyRequest
 *
 * \brief The CreateLBCookieStickinessPolicyRequest class provides an interface for ElasticLoadBalancing CreateLBCookieStickinessPolicy requests.
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
 * \sa ElasticLoadBalancingClient::createLBCookieStickinessPolicy
 */

/*!
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLBCookieStickinessPolicyRequest::CreateLBCookieStickinessPolicyRequest(const CreateLBCookieStickinessPolicyRequest &other)
    : ElasticLoadBalancingRequest(new CreateLBCookieStickinessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequest object.
 */
CreateLBCookieStickinessPolicyRequest::CreateLBCookieStickinessPolicyRequest()
    : ElasticLoadBalancingRequest(new CreateLBCookieStickinessPolicyRequestPrivate(ElasticLoadBalancingRequest::CreateLBCookieStickinessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLBCookieStickinessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateLBCookieStickinessPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLBCookieStickinessPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLBCookieStickinessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateLBCookieStickinessPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateLBCookieStickinessPolicyRequestPrivate
 *
 * @brief  Private implementation for CreateLBCookieStickinessPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public CreateLBCookieStickinessPolicyRequest instance.
 */
CreateLBCookieStickinessPolicyRequestPrivate::CreateLBCookieStickinessPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateLBCookieStickinessPolicyRequest * const q)
    : ElasticLoadBalancingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateLBCookieStickinessPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLBCookieStickinessPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLBCookieStickinessPolicyRequest instance.
 */
CreateLBCookieStickinessPolicyRequestPrivate::CreateLBCookieStickinessPolicyRequestPrivate(
    const CreateLBCookieStickinessPolicyRequestPrivate &other, CreateLBCookieStickinessPolicyRequest * const q)
    : ElasticLoadBalancingRequestPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws
