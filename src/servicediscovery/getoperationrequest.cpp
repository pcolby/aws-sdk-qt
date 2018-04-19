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
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
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
