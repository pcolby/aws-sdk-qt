// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterinstancerequest.h"
#include "deregisterinstancerequest_p.h"
#include "deregisterinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceRequest
 * \brief The DeregisterInstanceRequest class provides an interface for ServiceDiscovery DeregisterInstance requests.
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
 * \sa ServiceDiscoveryClient::deregisterInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest(const DeregisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterInstanceRequest object.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest()
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(ServiceDiscoveryRequest::DeregisterInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::DeregisterInstanceRequestPrivate
 * \brief The DeregisterInstanceRequestPrivate class provides private implementation for DeregisterInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeregisterInstanceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeregisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterInstanceRequest
 * class' copy constructor.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const DeregisterInstanceRequestPrivate &other, DeregisterInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
