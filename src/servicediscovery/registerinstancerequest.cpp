// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerinstancerequest.h"
#include "registerinstancerequest_p.h"
#include "registerinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceRequest
 * \brief The RegisterInstanceRequest class provides an interface for ServiceDiscovery RegisterInstance requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
 *
 * \sa ServiceDiscoveryClient::registerInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterInstanceRequest::RegisterInstanceRequest(const RegisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterInstanceRequest object.
 */
RegisterInstanceRequest::RegisterInstanceRequest()
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(ServiceDiscoveryRequest::RegisterInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::RegisterInstanceRequestPrivate
 * \brief The RegisterInstanceRequestPrivate class provides private implementation for RegisterInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a RegisterInstanceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, RegisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterInstanceRequest
 * class' copy constructor.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const RegisterInstanceRequestPrivate &other, RegisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
