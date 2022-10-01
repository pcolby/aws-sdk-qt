// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoperationsforresourcerequest.h"
#include "getoperationsforresourcerequest_p.h"
#include "getoperationsforresourceresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetOperationsForResourceRequest
 * \brief The GetOperationsForResourceRequest class provides an interface for Lightsail GetOperationsForResource requests.
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
 * \sa LightsailClient::getOperationsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
GetOperationsForResourceRequest::GetOperationsForResourceRequest(const GetOperationsForResourceRequest &other)
    : LightsailRequest(new GetOperationsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOperationsForResourceRequest object.
 */
GetOperationsForResourceRequest::GetOperationsForResourceRequest()
    : LightsailRequest(new GetOperationsForResourceRequestPrivate(LightsailRequest::GetOperationsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetOperationsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOperationsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetOperationsForResourceRequestPrivate
 * \brief The GetOperationsForResourceRequestPrivate class provides private implementation for GetOperationsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetOperationsForResourceRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
GetOperationsForResourceRequestPrivate::GetOperationsForResourceRequestPrivate(
    const LightsailRequest::Action action, GetOperationsForResourceRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOperationsForResourceRequest
 * class' copy constructor.
 */
GetOperationsForResourceRequestPrivate::GetOperationsForResourceRequestPrivate(
    const GetOperationsForResourceRequestPrivate &other, GetOperationsForResourceRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
