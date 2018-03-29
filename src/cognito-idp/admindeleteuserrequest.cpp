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

#include "admindeleteuserrequest.h"
#include "admindeleteuserrequest_p.h"
#include "admindeleteuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminDeleteUserRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminDeleteUser requests.
 *
 * @see    CognitoIdentityProviderClient::adminDeleteUser
 */

/**
 * @brief  Constructs a new AdminDeleteUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest(const AdminDeleteUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminDeleteUserRequest object.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAction, this))
{

}

bool AdminDeleteUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminDeleteUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminDeleteUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminDeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminDeleteUserRequestPrivate
 *
 * @brief  Private implementation for AdminDeleteUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminDeleteUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminDeleteUserRequest instance.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserRequest * const q)
    : AdminDeleteUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminDeleteUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminDeleteUserRequest instance.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const AdminDeleteUserRequestPrivate &other, AdminDeleteUserRequest * const q)
    : AdminDeleteUserPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
