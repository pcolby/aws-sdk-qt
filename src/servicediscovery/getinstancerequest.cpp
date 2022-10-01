/*
    Copyright 2013-2021 Paul Colby

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

#include "getinstancerequest.h"
#include "getinstancerequest_p.h"
#include "getinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetInstanceRequest
 * \brief The GetInstanceRequest class provides an interface for ServiceDiscovery GetInstance requests.
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
 * \sa ServiceDiscoveryClient::getInstance
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceRequest::GetInstanceRequest(const GetInstanceRequest &other)
    : ServiceDiscoveryRequest(new GetInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceRequest object.
 */
GetInstanceRequest::GetInstanceRequest()
    : ServiceDiscoveryRequest(new GetInstanceRequestPrivate(ServiceDiscoveryRequest::GetInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetInstanceRequestPrivate
 * \brief The GetInstanceRequestPrivate class provides private implementation for GetInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetInstanceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetInstanceRequestPrivate::GetInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceRequest
 * class' copy constructor.
 */
GetInstanceRequestPrivate::GetInstanceRequestPrivate(
    const GetInstanceRequestPrivate &other, GetInstanceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
