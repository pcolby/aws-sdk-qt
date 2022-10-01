// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
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
