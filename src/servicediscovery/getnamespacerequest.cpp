/*
    Copyright 2013-2020 Paul Colby

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
 *  AWS Cloud Map lets you configure public DNS, private DNS, or HTTP namespaces that your microservice applications run in.
 *  When an instance of the service becomes available, you can call the AWS Cloud Map API to register the instance with AWS
 *  Cloud Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health
 *  check. Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that
 *  contains up to eight healthy records.
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
