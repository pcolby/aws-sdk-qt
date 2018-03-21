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

#include "adminaddusertogrouprequest.h"
#include "adminaddusertogrouprequest_p.h"
#include "adminaddusertogroupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminAddUserToGroupRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminAddUserToGroup requests.
 *
 * @see    CognitoIdentityProviderClient::adminAddUserToGroup
 */

/**
 * @brief  Constructs a new AdminAddUserToGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminAddUserToGroupRequest::AdminAddUserToGroupRequest(const AdminAddUserToGroupRequest &other)
    : CognitoIdentityProviderRequest(new AdminAddUserToGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminAddUserToGroupRequest object.
 */
AdminAddUserToGroupRequest::AdminAddUserToGroupRequest()
    : CognitoIdentityProviderRequest(new AdminAddUserToGroupRequestPrivate(CognitoIdentityProviderRequest::AdminAddUserToGroupAction, this))
{

}

bool AdminAddUserToGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminAddUserToGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminAddUserToGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminAddUserToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AdminAddUserToGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminAddUserToGroupRequestPrivate
 *
 * @brief  Private implementation for AdminAddUserToGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminAddUserToGroupRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminAddUserToGroupRequest instance.
 */
AdminAddUserToGroupRequestPrivate::AdminAddUserToGroupRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminAddUserToGroupRequest * const q)
    : AdminAddUserToGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminAddUserToGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminAddUserToGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminAddUserToGroupRequest instance.
 */
AdminAddUserToGroupRequestPrivate::AdminAddUserToGroupRequestPrivate(
    const AdminAddUserToGroupRequestPrivate &other, AdminAddUserToGroupRequest * const q)
    : AdminAddUserToGroupPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
