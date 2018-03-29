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

#include "getuserrequest.h"
#include "getuserrequest_p.h"
#include "getuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  GetUserRequest
 *
 * @brief  Implements CognitoIdentityProvider GetUser requests.
 *
 * @see    CognitoIdentityProviderClient::getUser
 */

/**
 * @brief  Constructs a new GetUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserRequest::GetUserRequest(const GetUserRequest &other)
    : CognitoIdentityProviderRequest(new GetUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserRequest object.
 */
GetUserRequest::GetUserRequest()
    : CognitoIdentityProviderRequest(new GetUserRequestPrivate(CognitoIdentityProviderRequest::GetUserAction, this))
{

}

bool GetUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * GetUserRequest::response(QNetworkReply * const reply) const
{
    return new GetUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserRequestPrivate
 *
 * @brief  Private implementation for GetUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public GetUserRequest instance.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUserRequest * const q)
    : GetUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserRequest instance.
 */
GetUserRequestPrivate::GetUserRequestPrivate(
    const GetUserRequestPrivate &other, GetUserRequest * const q)
    : GetUserPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
