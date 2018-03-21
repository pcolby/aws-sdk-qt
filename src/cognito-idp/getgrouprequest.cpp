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

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetGroupRequest
 *
 * @brief  Implements CognitoIdentityProvider GetGroup requests.
 *
 * @see    CognitoIdentityProviderClient::getGroup
 */

/**
 * @brief  Constructs a new GetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : CognitoIdentityProviderRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : CognitoIdentityProviderRequest(new GetGroupRequestPrivate(CognitoIdentityProviderRequest::GetGroupAction, this))
{

}

bool GetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupRequestPrivate
 *
 * @brief  Private implementation for GetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetGroupRequest instance.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetGroupRequest * const q)
    : GetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupRequest instance.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : GetGroupPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
