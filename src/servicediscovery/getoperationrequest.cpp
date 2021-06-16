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

#include "getoperationrequest.h"
#include "getoperationrequest_p.h"
#include "getoperationresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetOperationRequest
 * \brief The GetOperationRequest class provides an interface for ServiceDiscovery GetOperation requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  With AWS Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications
 *  run in. When an instance becomes available, you can call the AWS Cloud Map API to register the instance with AWS Cloud
 *  Map. For public or private DNS namespaces, AWS Cloud Map automatically creates DNS records and an optional health check.
 *  Clients that submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up
 *  to eight healthy records.
 *
 * \sa ServiceDiscoveryClient::getOperation
 */

/*!
 * Constructs a copy of \a other.
 */
GetOperationRequest::GetOperationRequest(const GetOperationRequest &other)
    : ServiceDiscoveryRequest(new GetOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOperationRequest object.
 */
GetOperationRequest::GetOperationRequest()
    : ServiceDiscoveryRequest(new GetOperationRequestPrivate(ServiceDiscoveryRequest::GetOperationAction, this))
{

}

/*!
 * \reimp
 */
bool GetOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetOperationRequestPrivate
 * \brief The GetOperationRequestPrivate class provides private implementation for GetOperationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetOperationRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOperationRequest
 * class' copy constructor.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const GetOperationRequestPrivate &other, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
