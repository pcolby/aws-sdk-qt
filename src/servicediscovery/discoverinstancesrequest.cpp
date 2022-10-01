// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
