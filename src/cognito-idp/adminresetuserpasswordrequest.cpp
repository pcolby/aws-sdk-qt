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

#include "adminresetuserpasswordrequest.h"
#include "adminresetuserpasswordrequest_p.h"
#include "adminresetuserpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AdminResetUserPasswordRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminResetUserPassword requests.
 *
 * @see    CognitoIdentityProviderClient::adminResetUserPassword
 */

/**
 * @brief  Constructs a new AdminResetUserPasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest(const AdminResetUserPasswordRequest &other)
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminResetUserPasswordRequest object.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest()
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(CognitoIdentityProviderRequest::AdminResetUserPasswordAction, this))
{

}

bool AdminResetUserPasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminResetUserPasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminResetUserPasswordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminResetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new AdminResetUserPasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminResetUserPasswordRequestPrivate
 *
 * @brief  Private implementation for AdminResetUserPasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminResetUserPasswordRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminResetUserPasswordRequest instance.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminResetUserPasswordRequest * const q)
    : AdminResetUserPasswordPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminResetUserPasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminResetUserPasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminResetUserPasswordRequest instance.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const AdminResetUserPasswordRequestPrivate &other, AdminResetUserPasswordRequest * const q)
    : AdminResetUserPasswordPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
