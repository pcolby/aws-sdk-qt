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

#include "adminuserglobalsignoutrequest.h"
#include "adminuserglobalsignoutrequest_p.h"
#include "adminuserglobalsignoutresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminUserGlobalSignOutRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminUserGlobalSignOut requests.
 *
 * @see    CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/**
 * @brief  Constructs a new AdminUserGlobalSignOutRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest(const AdminUserGlobalSignOutRequest &other)
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminUserGlobalSignOutRequest object.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest()
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(CognitoIdentityProviderRequest::AdminUserGlobalSignOutAction, this))
{

}

bool AdminUserGlobalSignOutRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminUserGlobalSignOutResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminUserGlobalSignOutResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminUserGlobalSignOutRequest::response(QNetworkReply * const reply) const
{
    return new AdminUserGlobalSignOutResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminUserGlobalSignOutRequestPrivate
 *
 * @brief  Private implementation for AdminUserGlobalSignOutRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminUserGlobalSignOutRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminUserGlobalSignOutRequest instance.
 */
AdminUserGlobalSignOutRequestPrivate::AdminUserGlobalSignOutRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUserGlobalSignOutRequest * const q)
    : AdminUserGlobalSignOutPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminUserGlobalSignOutRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminUserGlobalSignOutRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminUserGlobalSignOutRequest instance.
 */
AdminUserGlobalSignOutRequestPrivate::AdminUserGlobalSignOutRequestPrivate(
    const AdminUserGlobalSignOutRequestPrivate &other, AdminUserGlobalSignOutRequest * const q)
    : AdminUserGlobalSignOutPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
