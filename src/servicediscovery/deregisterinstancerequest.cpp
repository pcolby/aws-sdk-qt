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

#include "deregisterinstancerequest.h"
#include "deregisterinstancerequest_p.h"
#include "deregisterinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  DeregisterInstanceRequest
 *
 * @brief  Implements ServiceDiscovery DeregisterInstance requests.
 *
 * @see    ServiceDiscoveryClient::deregisterInstance
 */

/**
 * @brief  Constructs a new DeregisterInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest(const DeregisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterInstanceRequest object.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest()
    : ServiceDiscoveryRequest(new DeregisterInstanceRequestPrivate(ServiceDiscoveryRequest::DeregisterInstanceAction, this))
{

}

bool DeregisterInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * DeregisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstanceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public DeregisterInstanceRequest instance.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeregisterInstanceRequest * const q)
    : DeregisterInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterInstanceRequest instance.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const DeregisterInstanceRequestPrivate &other, DeregisterInstanceRequest * const q)
    : DeregisterInstancePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
