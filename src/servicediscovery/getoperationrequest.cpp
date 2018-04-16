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
 *
 * \brief The GetOperationRequest class provides an interface for ServiceDiscovery GetOperation requests.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::getOperation
 */

/*!
 * @brief  Constructs a new GetOperationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOperationRequest::GetOperationRequest(const GetOperationRequest &other)
    : ServiceDiscoveryRequest(new GetOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetOperationRequest object.
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
 * @brief  Construct an GetOperationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOperationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetOperationRequestPrivate
 *
 * @brief  Private implementation for GetOperationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetOperationRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public GetOperationRequest instance.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetOperationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOperationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOperationRequest instance.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const GetOperationRequestPrivate &other, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
