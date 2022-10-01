// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinstancecustomhealthstatusrequest.h"
#include "updateinstancecustomhealthstatusrequest_p.h"
#include "updateinstancecustomhealthstatusresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusRequest
 * \brief The UpdateInstanceCustomHealthStatusRequest class provides an interface for ServiceDiscovery UpdateInstanceCustomHealthStatus requests.
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
 * \sa ServiceDiscoveryClient::updateInstanceCustomHealthStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInstanceCustomHealthStatusRequest::UpdateInstanceCustomHealthStatusRequest(const UpdateInstanceCustomHealthStatusRequest &other)
    : ServiceDiscoveryRequest(new UpdateInstanceCustomHealthStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInstanceCustomHealthStatusRequest object.
 */
UpdateInstanceCustomHealthStatusRequest::UpdateInstanceCustomHealthStatusRequest()
    : ServiceDiscoveryRequest(new UpdateInstanceCustomHealthStatusRequestPrivate(ServiceDiscoveryRequest::UpdateInstanceCustomHealthStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInstanceCustomHealthStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInstanceCustomHealthStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInstanceCustomHealthStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceCustomHealthStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::UpdateInstanceCustomHealthStatusRequestPrivate
 * \brief The UpdateInstanceCustomHealthStatusRequestPrivate class provides private implementation for UpdateInstanceCustomHealthStatusRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdateInstanceCustomHealthStatusRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
UpdateInstanceCustomHealthStatusRequestPrivate::UpdateInstanceCustomHealthStatusRequestPrivate(
    const ServiceDiscoveryRequest::Action action, UpdateInstanceCustomHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceCustomHealthStatusRequest
 * class' copy constructor.
 */
UpdateInstanceCustomHealthStatusRequestPrivate::UpdateInstanceCustomHealthStatusRequestPrivate(
    const UpdateInstanceCustomHealthStatusRequestPrivate &other, UpdateInstanceCustomHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
