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

#include "getrolepolicyrequest.h"
#include "getrolepolicyrequest_p.h"
#include "getrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetRolePolicyRequest
 *
 * @brief  Implements IAM GetRolePolicy requests.
 *
 * @see    IAMClient::getRolePolicy
 */

/**
 * @brief  Constructs a new GetRolePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRolePolicyRequest::GetRolePolicyRequest(const GetRolePolicyRequest &other)
    : IAMRequest(new GetRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRolePolicyRequest object.
 */
GetRolePolicyRequest::GetRolePolicyRequest()
    : IAMRequest(new GetRolePolicyRequestPrivate(IAMRequest::GetRolePolicyAction, this))
{

}

bool GetRolePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRolePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRolePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRolePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRolePolicyRequestPrivate
 *
 * @brief  Private implementation for GetRolePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRolePolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetRolePolicyRequest instance.
 */
GetRolePolicyRequestPrivate::GetRolePolicyRequestPrivate(
    const IAMRequest::Action action, GetRolePolicyRequest * const q)
    : GetRolePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRolePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRolePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRolePolicyRequest instance.
 */
GetRolePolicyRequestPrivate::GetRolePolicyRequestPrivate(
    const GetRolePolicyRequestPrivate &other, GetRolePolicyRequest * const q)
    : GetRolePolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
