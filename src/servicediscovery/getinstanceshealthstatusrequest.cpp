// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinstanceshealthstatusrequest.h"
#include "getinstanceshealthstatusrequest_p.h"
#include "getinstanceshealthstatusresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetInstancesHealthStatusRequest
 * \brief The GetInstancesHealthStatusRequest class provides an interface for ServiceDiscovery GetInstancesHealthStatus requests.
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
 * \sa ServiceDiscoveryClient::getInstancesHealthStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest(const GetInstancesHealthStatusRequest &other)
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstancesHealthStatusRequest object.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest()
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(ServiceDiscoveryRequest::GetInstancesHealthStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstancesHealthStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstancesHealthStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstancesHealthStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetInstancesHealthStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetInstancesHealthStatusRequestPrivate
 * \brief The GetInstancesHealthStatusRequestPrivate class provides private implementation for GetInstancesHealthStatusRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetInstancesHealthStatusRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetInstancesHealthStatusRequestPrivate::GetInstancesHealthStatusRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetInstancesHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstancesHealthStatusRequest
 * class' copy constructor.
 */
GetInstancesHealthStatusRequestPrivate::GetInstancesHealthStatusRequestPrivate(
    const GetInstancesHealthStatusRequestPrivate &other, GetInstancesHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
