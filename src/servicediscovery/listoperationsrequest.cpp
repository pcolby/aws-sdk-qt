// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoperationsrequest.h"
#include "listoperationsrequest_p.h"
#include "listoperationsresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListOperationsRequest
 * \brief The ListOperationsRequest class provides an interface for ServiceDiscovery ListOperations requests.
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
 * \sa ServiceDiscoveryClient::listOperations
 */

/*!
 * Constructs a copy of \a other.
 */
ListOperationsRequest::ListOperationsRequest(const ListOperationsRequest &other)
    : ServiceDiscoveryRequest(new ListOperationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOperationsRequest object.
 */
ListOperationsRequest::ListOperationsRequest()
    : ServiceDiscoveryRequest(new ListOperationsRequestPrivate(ServiceDiscoveryRequest::ListOperationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOperationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOperationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListOperationsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::ListOperationsRequestPrivate
 * \brief The ListOperationsRequestPrivate class provides private implementation for ListOperationsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListOperationsRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListOperationsRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOperationsRequest
 * class' copy constructor.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const ListOperationsRequestPrivate &other, ListOperationsRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
