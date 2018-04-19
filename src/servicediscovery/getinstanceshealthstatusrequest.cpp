/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
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
 *
 * Constructs a GetInstancesHealthStatusRequestPrivate object for ServiceDiscovery \a action with,
 * public implementation \a q.
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
