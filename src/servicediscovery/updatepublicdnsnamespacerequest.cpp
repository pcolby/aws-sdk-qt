// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepublicdnsnamespacerequest.h"
#include "updatepublicdnsnamespacerequest_p.h"
#include "updatepublicdnsnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdatePublicDnsNamespaceRequest
 * \brief The UpdatePublicDnsNamespaceRequest class provides an interface for ServiceDiscovery UpdatePublicDnsNamespace requests.
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
 * \sa ServiceDiscoveryClient::updatePublicDnsNamespace
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePublicDnsNamespaceRequest::UpdatePublicDnsNamespaceRequest(const UpdatePublicDnsNamespaceRequest &other)
    : ServiceDiscoveryRequest(new UpdatePublicDnsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePublicDnsNamespaceRequest object.
 */
UpdatePublicDnsNamespaceRequest::UpdatePublicDnsNamespaceRequest()
    : ServiceDiscoveryRequest(new UpdatePublicDnsNamespaceRequestPrivate(ServiceDiscoveryRequest::UpdatePublicDnsNamespaceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePublicDnsNamespaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePublicDnsNamespaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePublicDnsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePublicDnsNamespaceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::UpdatePublicDnsNamespaceRequestPrivate
 * \brief The UpdatePublicDnsNamespaceRequestPrivate class provides private implementation for UpdatePublicDnsNamespaceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a UpdatePublicDnsNamespaceRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
UpdatePublicDnsNamespaceRequestPrivate::UpdatePublicDnsNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, UpdatePublicDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePublicDnsNamespaceRequest
 * class' copy constructor.
 */
UpdatePublicDnsNamespaceRequestPrivate::UpdatePublicDnsNamespaceRequestPrivate(
    const UpdatePublicDnsNamespaceRequestPrivate &other, UpdatePublicDnsNamespaceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
