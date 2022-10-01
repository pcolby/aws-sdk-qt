// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprivatednsnamespacerequest.h"
#include "createprivatednsnamespacerequest_p.h"
#include "createprivatednsnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreatePrivateDnsNamespaceRequest
 * \brief The CreatePrivateDnsNamespaceRequest class provides an interface for ServiceDiscovery CreatePrivateDnsNamespace requests.
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
 * \sa ServiceDiscoveryClient::createPrivateDnsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePrivateDnsNamespaceRequest::CreatePrivateDnsNamespaceRequest(const CreatePrivateDnsNamespaceRequest &other)
    : ServiceDiscoveryRequest(new CreatePrivateDnsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePrivateDnsNamespaceRequest object.
 */
CreatePrivateDnsNamespaceRequest::CreatePrivateDnsNamespaceRequest()
    : ServiceDiscoveryRequest(new CreatePrivateDnsNamespaceRequestPrivate(ServiceDiscoveryRequest::CreatePrivateDnsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePrivateDnsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePrivateDnsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePrivateDnsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePrivateDnsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::CreatePrivateDnsNamespaceRequestPrivate
 * \brief The CreatePrivateDnsNamespaceRequestPrivate class provides private implementation for CreatePrivateDnsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a CreatePrivateDnsNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
CreatePrivateDnsNamespaceRequestPrivate::CreatePrivateDnsNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, CreatePrivateDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePrivateDnsNamespaceRequest
 * class' copy constructor.
 */
CreatePrivateDnsNamespaceRequestPrivate::CreatePrivateDnsNamespaceRequestPrivate(
    const CreatePrivateDnsNamespaceRequestPrivate &other, CreatePrivateDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
