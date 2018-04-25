/*
    Copyright 2013-2018 Paul Colby

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
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
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
