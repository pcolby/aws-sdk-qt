// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservicerequest.h"
#include "updateservicerequest_p.h"
#include "updateserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceRequest
 * \brief The UpdateServiceRequest class provides an interface for ServiceDiscovery UpdateService requests.
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
 * \sa ServiceDiscoveryClient::updateService
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceRequest::UpdateServiceRequest(const UpdateServiceRequest &other)
    : ServiceDiscoveryRequest(new UpdateServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceRequest object.
 */
UpdateServiceRequest::UpdateServiceRequest()
    : ServiceDiscoveryRequest(new UpdateServiceRequestPrivate(ServiceDiscoveryRequest::UpdateServiceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceRequestPrivate
 * \brief The UpdateServiceRequestPrivate class provides private implementation for UpdateServiceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateServiceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, UpdateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceRequest
 * class' copy constructor.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const UpdateServiceRequestPrivate &other, UpdateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
