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

#include "registerinstancerequest.h"
#include "registerinstancerequest_p.h"
#include "registerinstanceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  RegisterInstanceRequest
 *
 * @brief  Implements ServiceDiscovery RegisterInstance requests.
 *
 * @see    ServiceDiscoveryClient::registerInstance
 */

/**
 * @brief  Constructs a new RegisterInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterInstanceRequest::RegisterInstanceRequest(const RegisterInstanceRequest &other)
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterInstanceRequest object.
 */
RegisterInstanceRequest::RegisterInstanceRequest()
    : ServiceDiscoveryRequest(new RegisterInstanceRequestPrivate(ServiceDiscoveryRequest::RegisterInstanceAction, this))
{

}

bool RegisterInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * RegisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterInstanceRequestPrivate
 *
 * @brief  Private implementation for RegisterInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstanceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public RegisterInstanceRequest instance.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, RegisterInstanceRequest * const q)
    : RegisterInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterInstanceRequest instance.
 */
RegisterInstanceRequestPrivate::RegisterInstanceRequestPrivate(
    const RegisterInstanceRequestPrivate &other, RegisterInstanceRequest * const q)
    : RegisterInstancePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
