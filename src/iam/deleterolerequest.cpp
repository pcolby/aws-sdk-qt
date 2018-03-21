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

#include "deleterolerequest.h"
#include "deleterolerequest_p.h"
#include "deleteroleresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteRoleRequest
 *
 * @brief  Implements IAM DeleteRole requests.
 *
 * @see    IAMClient::deleteRole
 */

/**
 * @brief  Constructs a new DeleteRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRoleRequest::DeleteRoleRequest(const DeleteRoleRequest &other)
    : IAMRequest(new DeleteRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRoleRequest object.
 */
DeleteRoleRequest::DeleteRoleRequest()
    : IAMRequest(new DeleteRoleRequestPrivate(IAMRequest::DeleteRoleAction, this))
{

}

bool DeleteRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRoleRequestPrivate
 *
 * @brief  Private implementation for DeleteRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteRoleRequest instance.
 */
DeleteRoleRequestPrivate::DeleteRoleRequestPrivate(
    const IAMRequest::Action action, DeleteRoleRequest * const q)
    : DeleteRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRoleRequest instance.
 */
DeleteRoleRequestPrivate::DeleteRoleRequestPrivate(
    const DeleteRoleRequestPrivate &other, DeleteRoleRequest * const q)
    : DeleteRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
