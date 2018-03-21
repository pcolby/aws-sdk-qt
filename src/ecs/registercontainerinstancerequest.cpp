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

#include "registercontainerinstancerequest.h"
#include "registercontainerinstancerequest_p.h"
#include "registercontainerinstanceresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  RegisterContainerInstanceRequest
 *
 * @brief  Implements ECS RegisterContainerInstance requests.
 *
 * @see    ECSClient::registerContainerInstance
 */

/**
 * @brief  Constructs a new RegisterContainerInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterContainerInstanceRequest::RegisterContainerInstanceRequest(const RegisterContainerInstanceRequest &other)
    : ECSRequest(new RegisterContainerInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterContainerInstanceRequest object.
 */
RegisterContainerInstanceRequest::RegisterContainerInstanceRequest()
    : ECSRequest(new RegisterContainerInstanceRequestPrivate(ECSRequest::RegisterContainerInstanceAction, this))
{

}

bool RegisterContainerInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterContainerInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterContainerInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * RegisterContainerInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterContainerInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterContainerInstanceRequestPrivate
 *
 * @brief  Private implementation for RegisterContainerInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterContainerInstanceRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public RegisterContainerInstanceRequest instance.
 */
RegisterContainerInstanceRequestPrivate::RegisterContainerInstanceRequestPrivate(
    const ECSRequest::Action action, RegisterContainerInstanceRequest * const q)
    : RegisterContainerInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterContainerInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterContainerInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterContainerInstanceRequest instance.
 */
RegisterContainerInstanceRequestPrivate::RegisterContainerInstanceRequestPrivate(
    const RegisterContainerInstanceRequestPrivate &other, RegisterContainerInstanceRequest * const q)
    : RegisterContainerInstancePrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
