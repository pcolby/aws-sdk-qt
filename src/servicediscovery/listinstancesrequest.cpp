/*
    Copyright 2013-2020 Paul Colby

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

#include "listinstancesrequest.h"
#include "listinstancesrequest_p.h"
#include "listinstancesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListInstancesRequest
 * \brief The ListInstancesRequest class provides an interface for ServiceDiscovery ListInstances requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::listInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstancesRequest::ListInstancesRequest(const ListInstancesRequest &other)
    : ServiceDiscoveryRequest(new ListInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstancesRequest object.
 */
ListInstancesRequest::ListInstancesRequest()
    : ServiceDiscoveryRequest(new ListInstancesRequestPrivate(ServiceDiscoveryRequest::ListInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::ListInstancesRequestPrivate
 * \brief The ListInstancesRequestPrivate class provides private implementation for ListInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListInstancesRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListInstancesRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstancesRequest
 * class' copy constructor.
 */
ListInstancesRequestPrivate::ListInstancesRequestPrivate(
    const ListInstancesRequestPrivate &other, ListInstancesRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
