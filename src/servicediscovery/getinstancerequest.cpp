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

#include "getinstancerequest.h"
#include "getinstancerequest_p.h"
#include "getinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  GetInstanceRequest
 *
 * @brief  Implements ServiceDiscovery GetInstance requests.
 *
 * @see    ServiceDiscoveryClient::getInstance
 */

/**
 * @brief  Constructs a new GetInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceResponse::GetInstanceResponse(

/**
 * @brief  Constructs a new GetInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceRequest::GetInstanceRequest(const GetInstanceRequest &other)
    : ServiceDiscoveryRequest(new GetInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceRequest object.
 */
GetInstanceRequest::GetInstanceRequest()
    : ServiceDiscoveryRequest(new GetInstanceRequestPrivate(ServiceDiscoveryRequest::GetInstanceAction, this))
{

}

bool GetInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * GetInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceRequestPrivate
 *
 * @brief  Private implementation for GetInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public GetInstanceRequest instance.
 */
GetInstanceRequestPrivate::GetInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetInstanceRequest * const q)
    : GetInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceRequest instance.
 */
GetInstanceRequestPrivate::GetInstanceRequestPrivate(
    const GetInstanceRequestPrivate &other, GetInstanceRequest * const q)
    : GetInstancePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
