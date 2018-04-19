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
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
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
 *
 * Constructs a ListNamespacesRequestPrivate object for ServiceDiscovery \a action with,
 * public implementation \a q.
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
