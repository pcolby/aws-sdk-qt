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

#include "getrolerequest.h"
#include "getrolerequest_p.h"
#include "getroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetRoleRequest
 *
 * @brief  Implements IAM GetRole requests.
 *
 * @see    IAMClient::getRole
 */

/**
 * @brief  Constructs a new GetRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRoleRequest::GetRoleRequest(const GetRoleRequest &other)
    : IAMRequest(new GetRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRoleRequest object.
 */
GetRoleRequest::GetRoleRequest()
    : IAMRequest(new GetRoleRequestPrivate(IAMRequest::GetRoleAction, this))
{

}

bool GetRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRoleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoleRequest::response(QNetworkReply * const reply) const
{
    return new GetRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRoleRequestPrivate
 *
 * @brief  Private implementation for GetRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetRoleRequest instance.
 */
GetRoleRequestPrivate::GetRoleRequestPrivate(
    const IAMRequest::Action action, GetRoleRequest * const q)
    : GetRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRoleRequest instance.
 */
GetRoleRequestPrivate::GetRoleRequestPrivate(
    const GetRoleRequestPrivate &other, GetRoleRequest * const q)
    : GetRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
