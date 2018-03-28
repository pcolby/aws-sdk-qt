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

#include "updaterolerequest.h"
#include "updaterolerequest_p.h"
#include "updateroleresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  UpdateRoleRequest
 *
 * @brief  Implements IAM UpdateRole requests.
 *
 * @see    IAMClient::updateRole
 */

/**
 * @brief  Constructs a new UpdateRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRoleRequest::UpdateRoleRequest(const UpdateRoleRequest &other)
    : IAMRequest(new UpdateRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRoleRequest object.
 */
UpdateRoleRequest::UpdateRoleRequest()
    : IAMRequest(new UpdateRoleRequestPrivate(IAMRequest::UpdateRoleAction, this))
{

}

bool UpdateRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateRoleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRoleRequestPrivate
 *
 * @brief  Private implementation for UpdateRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateRoleRequest instance.
 */
UpdateRoleRequestPrivate::UpdateRoleRequestPrivate(
    const IAMRequest::Action action, UpdateRoleRequest * const q)
    : UpdateRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRoleRequest instance.
 */
UpdateRoleRequestPrivate::UpdateRoleRequestPrivate(
    const UpdateRoleRequestPrivate &other, UpdateRoleRequest * const q)
    : UpdateRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
