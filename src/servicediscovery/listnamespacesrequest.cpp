// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnamespacesrequest.h"
#include "listnamespacesrequest_p.h"
#include "listnamespacesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListNamespacesRequest
 * \brief The ListNamespacesRequest class provides an interface for ServiceDiscovery ListNamespaces requests.
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
 * \sa ServiceDiscoveryClient::listNamespaces
 */

/*!
 * Constructs a copy of \a other.
 */
ListNamespacesRequest::ListNamespacesRequest(const ListNamespacesRequest &other)
    : ServiceDiscoveryRequest(new ListNamespacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNamespacesRequest object.
 */
ListNamespacesRequest::ListNamespacesRequest()
    : ServiceDiscoveryRequest(new ListNamespacesRequestPrivate(ServiceDiscoveryRequest::ListNamespacesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNamespacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNamespacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamespacesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamespacesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::ListNamespacesRequestPrivate
 * \brief The ListNamespacesRequestPrivate class provides private implementation for ListNamespacesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListNamespacesRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListNamespacesRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNamespacesRequest
 * class' copy constructor.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ListNamespacesRequestPrivate &other, ListNamespacesRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
