// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnamespacerequest.h"
#include "getnamespacerequest_p.h"
#include "getnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetNamespaceRequest
 * \brief The GetNamespaceRequest class provides an interface for ServiceDiscovery GetNamespace requests.
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
 * \sa ServiceDiscoveryClient::getNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
GetNamespaceRequest::GetNamespaceRequest(const GetNamespaceRequest &other)
    : ServiceDiscoveryRequest(new GetNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNamespaceRequest object.
 */
GetNamespaceRequest::GetNamespaceRequest()
    : ServiceDiscoveryRequest(new GetNamespaceRequestPrivate(ServiceDiscoveryRequest::GetNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool GetNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new GetNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetNamespaceRequestPrivate
 * \brief The GetNamespaceRequestPrivate class provides private implementation for GetNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNamespaceRequest
 * class' copy constructor.
 */
GetNamespaceRequestPrivate::GetNamespaceRequestPrivate(
    const GetNamespaceRequestPrivate &other, GetNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
