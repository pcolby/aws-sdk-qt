/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getservicerequest.h"
#include "getservicerequest_p.h"
#include "getserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetServiceRequest
 * \brief The GetServiceRequest class provides an interface for ServiceDiscovery GetService requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::getService
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceRequest::GetServiceRequest(const GetServiceRequest &other)
    : ServiceDiscoveryRequest(new GetServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceRequest object.
 */
GetServiceRequest::GetServiceRequest()
    : ServiceDiscoveryRequest(new GetServiceRequestPrivate(ServiceDiscoveryRequest::GetServiceAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetServiceRequestPrivate
 * \brief The GetServiceRequestPrivate class provides private implementation for GetServiceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetServiceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetServiceRequestPrivate::GetServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceRequest
 * class' copy constructor.
 */
GetServiceRequestPrivate::GetServiceRequestPrivate(
    const GetServiceRequestPrivate &other, GetServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
