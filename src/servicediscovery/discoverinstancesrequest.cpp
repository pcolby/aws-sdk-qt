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

#include "discoverinstancesrequest.h"
#include "discoverinstancesrequest_p.h"
#include "discoverinstancesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DiscoverInstancesRequest
 * \brief The DiscoverInstancesRequest class provides an interface for ServiceDiscovery DiscoverInstances requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::discoverInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DiscoverInstancesRequest::DiscoverInstancesRequest(const DiscoverInstancesRequest &other)
    : ServiceDiscoveryRequest(new DiscoverInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DiscoverInstancesRequest object.
 */
DiscoverInstancesRequest::DiscoverInstancesRequest()
    : ServiceDiscoveryRequest(new DiscoverInstancesRequestPrivate(ServiceDiscoveryRequest::DiscoverInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DiscoverInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DiscoverInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DiscoverInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DiscoverInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::DiscoverInstancesRequestPrivate
 * \brief The DiscoverInstancesRequestPrivate class provides private implementation for DiscoverInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DiscoverInstancesRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
DiscoverInstancesRequestPrivate::DiscoverInstancesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DiscoverInstancesRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DiscoverInstancesRequest
 * class' copy constructor.
 */
DiscoverInstancesRequestPrivate::DiscoverInstancesRequestPrivate(
    const DiscoverInstancesRequestPrivate &other, DiscoverInstancesRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
