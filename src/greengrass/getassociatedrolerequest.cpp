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

#include "getassociatedrolerequest.h"
#include "getassociatedrolerequest_p.h"
#include "getassociatedroleresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetAssociatedRoleRequest
 *
 * @brief  Implements Greengrass GetAssociatedRole requests.
 *
 * @see    GreengrassClient::getAssociatedRole
 */

/**
 * @brief  Constructs a new GetAssociatedRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest(const GetAssociatedRoleRequest &other)
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAssociatedRoleRequest object.
 */
GetAssociatedRoleRequest::GetAssociatedRoleRequest()
    : GreengrassRequest(new GetAssociatedRoleRequestPrivate(GreengrassRequest::GetAssociatedRoleAction, this))
{

}

bool GetAssociatedRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAssociatedRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAssociatedRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetAssociatedRoleRequest::response(QNetworkReply * const reply) const
{
    return new GetAssociatedRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAssociatedRoleRequestPrivate
 *
 * @brief  Private implementation for GetAssociatedRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAssociatedRoleRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetAssociatedRoleRequest instance.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GreengrassRequest::Action action, GetAssociatedRoleRequest * const q)
    : GetAssociatedRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAssociatedRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAssociatedRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAssociatedRoleRequest instance.
 */
GetAssociatedRoleRequestPrivate::GetAssociatedRoleRequestPrivate(
    const GetAssociatedRoleRequestPrivate &other, GetAssociatedRoleRequest * const q)
    : GetAssociatedRolePrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
