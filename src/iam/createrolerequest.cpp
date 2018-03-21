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

#include "createrolerequest.h"
#include "createrolerequest_p.h"
#include "createroleresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateRoleRequest
 *
 * @brief  Implements IAM CreateRole requests.
 *
 * @see    IAMClient::createRole
 */

/**
 * @brief  Constructs a new CreateRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRoleRequest::CreateRoleRequest(const CreateRoleRequest &other)
    : IAMRequest(new CreateRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRoleRequest object.
 */
CreateRoleRequest::CreateRoleRequest()
    : IAMRequest(new CreateRoleRequestPrivate(IAMRequest::CreateRoleAction, this))
{

}

bool CreateRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateRoleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRoleRequestPrivate
 *
 * @brief  Private implementation for CreateRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateRoleRequest instance.
 */
CreateRoleRequestPrivate::CreateRoleRequestPrivate(
    const IAMRequest::Action action, CreateRoleRequest * const q)
    : CreateRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRoleRequest instance.
 */
CreateRoleRequestPrivate::CreateRoleRequestPrivate(
    const CreateRoleRequestPrivate &other, CreateRoleRequest * const q)
    : CreateRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
