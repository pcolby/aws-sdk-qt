// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloadbalancertlscertificaterequest.h"
#include "deleteloadbalancertlscertificaterequest_p.h"
#include "deleteloadbalancertlscertificateresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteLoadBalancerTlsCertificateRequest
 * \brief The DeleteLoadBalancerTlsCertificateRequest class provides an interface for Lightsail DeleteLoadBalancerTlsCertificate requests.
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
 * \sa LightsailClient::deleteLoadBalancerTlsCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoadBalancerTlsCertificateRequest::DeleteLoadBalancerTlsCertificateRequest(const DeleteLoadBalancerTlsCertificateRequest &other)
    : LightsailRequest(new DeleteLoadBalancerTlsCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoadBalancerTlsCertificateRequest object.
 */
DeleteLoadBalancerTlsCertificateRequest::DeleteLoadBalancerTlsCertificateRequest()
    : LightsailRequest(new DeleteLoadBalancerTlsCertificateRequestPrivate(LightsailRequest::DeleteLoadBalancerTlsCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoadBalancerTlsCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoadBalancerTlsCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoadBalancerTlsCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerTlsCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::DeleteLoadBalancerTlsCertificateRequestPrivate
 * \brief The DeleteLoadBalancerTlsCertificateRequestPrivate class provides private implementation for DeleteLoadBalancerTlsCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteLoadBalancerTlsCertificateRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
DeleteLoadBalancerTlsCertificateRequestPrivate::DeleteLoadBalancerTlsCertificateRequestPrivate(
    const LightsailRequest::Action action, DeleteLoadBalancerTlsCertificateRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerTlsCertificateRequest
 * class' copy constructor.
 */
DeleteLoadBalancerTlsCertificateRequestPrivate::DeleteLoadBalancerTlsCertificateRequestPrivate(
    const DeleteLoadBalancerTlsCertificateRequestPrivate &other, DeleteLoadBalancerTlsCertificateRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
