// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachinstancestoloadbalancerrequest.h"
#include "attachinstancestoloadbalancerrequest_p.h"
#include "attachinstancestoloadbalancerresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::AttachInstancesToLoadBalancerRequest
 * \brief The AttachInstancesToLoadBalancerRequest class provides an interface for Lightsail AttachInstancesToLoadBalancer requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::attachInstancesToLoadBalancer
 */

/*!
 * Constructs a copy of \a other.
 */
AttachInstancesToLoadBalancerRequest::AttachInstancesToLoadBalancerRequest(const AttachInstancesToLoadBalancerRequest &other)
    : LightsailRequest(new AttachInstancesToLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachInstancesToLoadBalancerRequest object.
 */
AttachInstancesToLoadBalancerRequest::AttachInstancesToLoadBalancerRequest()
    : LightsailRequest(new AttachInstancesToLoadBalancerRequestPrivate(LightsailRequest::AttachInstancesToLoadBalancerAction, this))
{

}

/*!
 * \reimp
 */
bool AttachInstancesToLoadBalancerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachInstancesToLoadBalancerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachInstancesToLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new AttachInstancesToLoadBalancerResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::AttachInstancesToLoadBalancerRequestPrivate
 * \brief The AttachInstancesToLoadBalancerRequestPrivate class provides private implementation for AttachInstancesToLoadBalancerRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a AttachInstancesToLoadBalancerRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
AttachInstancesToLoadBalancerRequestPrivate::AttachInstancesToLoadBalancerRequestPrivate(
    const LightsailRequest::Action action, AttachInstancesToLoadBalancerRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachInstancesToLoadBalancerRequest
 * class' copy constructor.
 */
AttachInstancesToLoadBalancerRequestPrivate::AttachInstancesToLoadBalancerRequestPrivate(
    const AttachInstancesToLoadBalancerRequestPrivate &other, AttachInstancesToLoadBalancerRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
