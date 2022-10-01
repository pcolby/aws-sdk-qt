// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ListServicesRequest
 * \brief The ListServicesRequest class provides an interface for ServiceDiscovery ListServices requests.
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
 * \sa ServiceDiscoveryClient::listServices
 */

/*!
 * Constructs a copy of \a other.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(ServiceDiscoveryRequest::ListServicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::ListServicesRequestPrivate
 * \brief The ListServicesRequestPrivate class provides private implementation for ListServicesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ListServicesRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListServicesRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
