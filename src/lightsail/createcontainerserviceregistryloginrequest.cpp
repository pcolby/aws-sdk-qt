// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontainerserviceregistryloginrequest.h"
#include "createcontainerserviceregistryloginrequest_p.h"
#include "createcontainerserviceregistryloginresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CreateContainerServiceRegistryLoginRequest
 * \brief The CreateContainerServiceRegistryLoginRequest class provides an interface for Lightsail CreateContainerServiceRegistryLogin requests.
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
 * \sa LightsailClient::createContainerServiceRegistryLogin
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContainerServiceRegistryLoginRequest::CreateContainerServiceRegistryLoginRequest(const CreateContainerServiceRegistryLoginRequest &other)
    : LightsailRequest(new CreateContainerServiceRegistryLoginRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContainerServiceRegistryLoginRequest object.
 */
CreateContainerServiceRegistryLoginRequest::CreateContainerServiceRegistryLoginRequest()
    : LightsailRequest(new CreateContainerServiceRegistryLoginRequestPrivate(LightsailRequest::CreateContainerServiceRegistryLoginAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContainerServiceRegistryLoginRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContainerServiceRegistryLoginResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContainerServiceRegistryLoginRequest::response(QNetworkReply * const reply) const
{
    return new CreateContainerServiceRegistryLoginResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::CreateContainerServiceRegistryLoginRequestPrivate
 * \brief The CreateContainerServiceRegistryLoginRequestPrivate class provides private implementation for CreateContainerServiceRegistryLoginRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a CreateContainerServiceRegistryLoginRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
CreateContainerServiceRegistryLoginRequestPrivate::CreateContainerServiceRegistryLoginRequestPrivate(
    const LightsailRequest::Action action, CreateContainerServiceRegistryLoginRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContainerServiceRegistryLoginRequest
 * class' copy constructor.
 */
CreateContainerServiceRegistryLoginRequestPrivate::CreateContainerServiceRegistryLoginRequestPrivate(
    const CreateContainerServiceRegistryLoginRequestPrivate &other, CreateContainerServiceRegistryLoginRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
