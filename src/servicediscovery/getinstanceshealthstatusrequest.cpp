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

#include "getinstanceshealthstatusrequest.h"
#include "getinstanceshealthstatusrequest_p.h"
#include "getinstanceshealthstatusresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetInstancesHealthStatusRequest
 *
 * \brief The GetInstancesHealthStatusRequest class encapsulates ServiceDiscovery GetInstancesHealthStatus requests.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::getInstancesHealthStatus
 */

/*!
 * @brief  Constructs a new GetInstancesHealthStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest(const GetInstancesHealthStatusRequest &other)
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetInstancesHealthStatusRequest object.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest()
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(ServiceDiscoveryRequest::GetInstancesHealthStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstancesHealthStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetInstancesHealthStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstancesHealthStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstancesHealthStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetInstancesHealthStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetInstancesHealthStatusRequestPrivate
 *
 * @brief  Private implementation for GetInstancesHealthStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetInstancesHealthStatusRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public GetInstancesHealthStatusRequest instance.
 */
GetInstancesHealthStatusRequestPrivate::GetInstancesHealthStatusRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetInstancesHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetInstancesHealthStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstancesHealthStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstancesHealthStatusRequest instance.
 */
GetInstancesHealthStatusRequestPrivate::GetInstancesHealthStatusRequestPrivate(
    const GetInstancesHealthStatusRequestPrivate &other, GetInstancesHealthStatusRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
