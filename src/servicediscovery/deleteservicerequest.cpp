// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicerequest.h"
#include "deleteservicerequest_p.h"
#include "deleteserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeleteServiceRequest
 * \brief The DeleteServiceRequest class provides an interface for ServiceDiscovery DeleteService requests.
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
 * \sa ServiceDiscoveryClient::deleteService
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceRequest::DeleteServiceRequest(const DeleteServiceRequest &other)
    : ServiceDiscoveryRequest(new DeleteServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceRequest object.
 */
DeleteServiceRequest::DeleteServiceRequest()
    : ServiceDiscoveryRequest(new DeleteServiceRequestPrivate(ServiceDiscoveryRequest::DeleteServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::DeleteServiceRequestPrivate
 * \brief The DeleteServiceRequestPrivate class provides private implementation for DeleteServiceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeleteServiceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeleteServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceRequest
 * class' copy constructor.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const DeleteServiceRequestPrivate &other, DeleteServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
