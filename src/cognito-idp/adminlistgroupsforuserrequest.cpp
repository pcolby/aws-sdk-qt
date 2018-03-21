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

#include "adminlistgroupsforuserrequest.h"
#include "adminlistgroupsforuserrequest_p.h"
#include "adminlistgroupsforuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminListGroupsForUserRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminListGroupsForUser requests.
 *
 * @see    CognitoIdentityProviderClient::adminListGroupsForUser
 */

/**
 * @brief  Constructs a new AdminListGroupsForUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest(const AdminListGroupsForUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminListGroupsForUserRequest object.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest()
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(CognitoIdentityProviderRequest::AdminListGroupsForUserAction, this))
{

}

bool AdminListGroupsForUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminListGroupsForUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminListGroupsForUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminListGroupsForUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminListGroupsForUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminListGroupsForUserRequestPrivate
 *
 * @brief  Private implementation for AdminListGroupsForUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminListGroupsForUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminListGroupsForUserRequest instance.
 */
AdminListGroupsForUserRequestPrivate::AdminListGroupsForUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListGroupsForUserRequest * const q)
    : AdminListGroupsForUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminListGroupsForUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminListGroupsForUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminListGroupsForUserRequest instance.
 */
AdminListGroupsForUserRequestPrivate::AdminListGroupsForUserRequestPrivate(
    const AdminListGroupsForUserRequestPrivate &other, AdminListGroupsForUserRequest * const q)
    : AdminListGroupsForUserPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
