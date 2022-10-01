// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteknownhostkeysrequest.h"
#include "deleteknownhostkeysrequest_p.h"
#include "deleteknownhostkeysresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::DeleteKnownHostKeysRequest
 * \brief The DeleteKnownHostKeysRequest class provides an interface for Lightsail DeleteKnownHostKeys requests.
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
 * \sa LightsailClient::deleteKnownHostKeys
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKnownHostKeysRequest::DeleteKnownHostKeysRequest(const DeleteKnownHostKeysRequest &other)
    : LightsailRequest(new DeleteKnownHostKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKnownHostKeysRequest object.
 */
DeleteKnownHostKeysRequest::DeleteKnownHostKeysRequest()
    : LightsailRequest(new DeleteKnownHostKeysRequestPrivate(LightsailRequest::DeleteKnownHostKeysAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKnownHostKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKnownHostKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKnownHostKeysRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKnownHostKeysResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::DeleteKnownHostKeysRequestPrivate
 * \brief The DeleteKnownHostKeysRequestPrivate class provides private implementation for DeleteKnownHostKeysRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a DeleteKnownHostKeysRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
DeleteKnownHostKeysRequestPrivate::DeleteKnownHostKeysRequestPrivate(
    const LightsailRequest::Action action, DeleteKnownHostKeysRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKnownHostKeysRequest
 * class' copy constructor.
 */
DeleteKnownHostKeysRequestPrivate::DeleteKnownHostKeysRequestPrivate(
    const DeleteKnownHostKeysRequestPrivate &other, DeleteKnownHostKeysRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
