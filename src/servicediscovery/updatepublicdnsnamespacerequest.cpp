/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
