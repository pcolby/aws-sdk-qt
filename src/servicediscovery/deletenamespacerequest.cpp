// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenamespacerequest.h"
#include "deletenamespacerequest_p.h"
#include "deletenamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::DeleteNamespaceRequest
 * \brief The DeleteNamespaceRequest class provides an interface for ServiceDiscovery DeleteNamespace requests.
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
 * \sa ServiceDiscoveryClient::deleteNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest(const DeleteNamespaceRequest &other)
    : ServiceDiscoveryRequest(new DeleteNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNamespaceRequest object.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest()
    : ServiceDiscoveryRequest(new DeleteNamespaceRequestPrivate(ServiceDiscoveryRequest::DeleteNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::DeleteNamespaceRequestPrivate
 * \brief The DeleteNamespaceRequestPrivate class provides private implementation for DeleteNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a DeleteNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeleteNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNamespaceRequest
 * class' copy constructor.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const DeleteNamespaceRequestPrivate &other, DeleteNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
