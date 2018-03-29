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

/**
 * @class  GetInstancesHealthStatusRequest
 *
 * @brief  Implements ServiceDiscovery GetInstancesHealthStatus requests.
 *
 * @see    ServiceDiscoveryClient::getInstancesHealthStatus
 */

/**
 * @brief  Constructs a new GetInstancesHealthStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest(const GetInstancesHealthStatusRequest &other)
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstancesHealthStatusRequest object.
 */
GetInstancesHealthStatusRequest::GetInstancesHealthStatusRequest()
    : ServiceDiscoveryRequest(new GetInstancesHealthStatusRequestPrivate(ServiceDiscoveryRequest::GetInstancesHealthStatusAction, this))
{

}

bool GetInstancesHealthStatusRequest::isValid() const
{
    return false;
}


/**
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

/**
 * @internal
 *
 * @class  GetInstancesHealthStatusRequestPrivate
 *
 * @brief  Private implementation for GetInstancesHealthStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstancesHealthStatusRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public GetInstancesHealthStatusRequest instance.
 */
GetInstancesHealthStatusRequestPrivate::GetInstancesHealthStatusRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetInstancesHealthStatusRequest * const q)
    : GetInstancesHealthStatusPrivate(action, q)
{

}

/**
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
    : GetInstancesHealthStatusPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
