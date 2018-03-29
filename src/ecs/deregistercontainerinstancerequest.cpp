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

#include "deregistercontainerinstancerequest.h"
#include "deregistercontainerinstancerequest_p.h"
#include "deregistercontainerinstanceresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  DeregisterContainerInstanceRequest
 *
 * @brief  Implements ECS DeregisterContainerInstance requests.
 *
 * @see    ECSClient::deregisterContainerInstance
 */

/**
 * @brief  Constructs a new DeregisterContainerInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterContainerInstanceRequest::DeregisterContainerInstanceRequest(const DeregisterContainerInstanceRequest &other)
    : ECSRequest(new DeregisterContainerInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterContainerInstanceRequest object.
 */
DeregisterContainerInstanceRequest::DeregisterContainerInstanceRequest()
    : ECSRequest(new DeregisterContainerInstanceRequestPrivate(ECSRequest::DeregisterContainerInstanceAction, this))
{

}

bool DeregisterContainerInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterContainerInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterContainerInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * DeregisterContainerInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterContainerInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterContainerInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterContainerInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterContainerInstanceRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DeregisterContainerInstanceRequest instance.
 */
DeregisterContainerInstanceRequestPrivate::DeregisterContainerInstanceRequestPrivate(
    const ECSRequest::Action action, DeregisterContainerInstanceRequest * const q)
    : DeregisterContainerInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterContainerInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterContainerInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterContainerInstanceRequest instance.
 */
DeregisterContainerInstanceRequestPrivate::DeregisterContainerInstanceRequestPrivate(
    const DeregisterContainerInstanceRequestPrivate &other, DeregisterContainerInstanceRequest * const q)
    : DeregisterContainerInstancePrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
