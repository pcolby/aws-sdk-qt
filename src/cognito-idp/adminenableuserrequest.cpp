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

#include "adminenableuserrequest.h"
#include "adminenableuserrequest_p.h"
#include "adminenableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminEnableUserRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminEnableUser requests.
 *
 * @see    CognitoIdentityProviderClient::adminEnableUser
 */

/**
 * @brief  Constructs a new AdminEnableUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminEnableUserRequest::AdminEnableUserRequest(const AdminEnableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminEnableUserRequest object.
 */
AdminEnableUserRequest::AdminEnableUserRequest()
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(CognitoIdentityProviderRequest::AdminEnableUserAction, this))
{

}

bool AdminEnableUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminEnableUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminEnableUserResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminEnableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminEnableUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminEnableUserRequestPrivate
 *
 * @brief  Private implementation for AdminEnableUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminEnableUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminEnableUserRequest instance.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminEnableUserRequest * const q)
    : AdminEnableUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminEnableUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminEnableUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminEnableUserRequest instance.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const AdminEnableUserRequestPrivate &other, AdminEnableUserRequest * const q)
    : AdminEnableUserPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
