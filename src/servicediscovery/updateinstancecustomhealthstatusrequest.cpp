/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateinstancecustomhealthstatusrequest.h"
#include "updateinstancecustomhealthstatusrequest_p.h"
#include "updateinstancecustomhealthstatusresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  UpdateInstanceCustomHealthStatusRequest
 *
 * @brief  Implements ServiceDiscovery UpdateInstanceCustomHealthStatus requests.
 *
 * @see    ServiceDiscoveryClient::updateInstanceCustomHealthStatus
 */

/**
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInstanceCustomHealthStatusResponse::UpdateInstanceCustomHealthStatusResponse(

/**
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateInstanceCustomHealthStatusRequest::UpdateInstanceCustomHealthStatusRequest(const UpdateInstanceCustomHealthStatusRequest &other)
    : ServiceDiscoveryRequest(new UpdateInstanceCustomHealthStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusRequest object.
 */
UpdateInstanceCustomHealthStatusRequest::UpdateInstanceCustomHealthStatusRequest()
    : ServiceDiscoveryRequest(new UpdateInstanceCustomHealthStatusRequestPrivate(ServiceDiscoveryRequest::UpdateInstanceCustomHealthStatusAction, this))
{

}

bool UpdateInstanceCustomHealthStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateInstanceCustomHealthStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateInstanceCustomHealthStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * UpdateInstanceCustomHealthStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceCustomHealthStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateInstanceCustomHealthStatusRequestPrivate
 *
 * @brief  Private implementation for UpdateInstanceCustomHealthStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public UpdateInstanceCustomHealthStatusRequest instance.
 */
UpdateInstanceCustomHealthStatusRequestPrivate::UpdateInstanceCustomHealthStatusRequestPrivate(
    const ServiceDiscoveryRequest::Action action, UpdateInstanceCustomHealthStatusRequest * const q)
    : UpdateInstanceCustomHealthStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceCustomHealthStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceCustomHealthStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateInstanceCustomHealthStatusRequest instance.
 */
UpdateInstanceCustomHealthStatusRequestPrivate::UpdateInstanceCustomHealthStatusRequestPrivate(
    const UpdateInstanceCustomHealthStatusRequestPrivate &other, UpdateInstanceCustomHealthStatusRequest * const q)
    : UpdateInstanceCustomHealthStatusPrivate(other, q)
{

}
