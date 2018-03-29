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

#include "admindisableuserrequest.h"
#include "admindisableuserrequest_p.h"
#include "admindisableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDisableUserRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminDisableUser requests.
 *
 * @see    CognitoIdentityProviderClient::adminDisableUser
 */

/**
 * @brief  Constructs a new AdminDisableUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminDisableUserRequest::AdminDisableUserRequest(const AdminDisableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminDisableUserRequest object.
 */
AdminDisableUserRequest::AdminDisableUserRequest()
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(CognitoIdentityProviderRequest::AdminDisableUserAction, this))
{

}

bool AdminDisableUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminDisableUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminDisableUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminDisableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDisableUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminDisableUserRequestPrivate
 *
 * @brief  Private implementation for AdminDisableUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDisableUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminDisableUserRequest instance.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDisableUserRequest * const q)
    : AdminDisableUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminDisableUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminDisableUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminDisableUserRequest instance.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const AdminDisableUserRequestPrivate &other, AdminDisableUserRequest * const q)
    : AdminDisableUserPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
