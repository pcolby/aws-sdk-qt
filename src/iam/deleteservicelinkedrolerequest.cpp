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

#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedrolerequest_p.h"
#include "deleteservicelinkedroleresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  DeleteServiceLinkedRoleRequest
 *
 * @brief  Implements IAM DeleteServiceLinkedRole requests.
 *
 * @see    IAMClient::deleteServiceLinkedRole
 */

/**
 * @brief  Constructs a new DeleteServiceLinkedRoleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServiceLinkedRoleResponse::DeleteServiceLinkedRoleResponse(

/**
 * @brief  Constructs a new DeleteServiceLinkedRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &other)
    : IAMRequest(new DeleteServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServiceLinkedRoleRequest object.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest()
    : IAMRequest(new DeleteServiceLinkedRoleRequestPrivate(IAMRequest::DeleteServiceLinkedRoleAction, this))
{

}

bool DeleteServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServiceLinkedRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServiceLinkedRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceLinkedRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServiceLinkedRoleRequestPrivate
 *
 * @brief  Private implementation for DeleteServiceLinkedRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceLinkedRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteServiceLinkedRoleRequest instance.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const IAMRequest::Action action, DeleteServiceLinkedRoleRequest * const q)
    : DeleteServiceLinkedRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceLinkedRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceLinkedRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServiceLinkedRoleRequest instance.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const DeleteServiceLinkedRoleRequestPrivate &other, DeleteServiceLinkedRoleRequest * const q)
    : DeleteServiceLinkedRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
