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

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListUsersRequest
 *
 * @brief  Implements CognitoIdentityProvider ListUsers requests.
 *
 * @see    CognitoIdentityProviderClient::listUsers
 */

/**
 * @brief  Constructs a new ListUsersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : CognitoIdentityProviderRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : CognitoIdentityProviderRequest(new ListUsersRequestPrivate(CognitoIdentityProviderRequest::ListUsersAction, this))
{

}

bool ListUsersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUsersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUsersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUsersRequestPrivate
 *
 * @brief  Private implementation for ListUsersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListUsersRequest instance.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUsersRequest * const q)
    : ListUsersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUsersRequest instance.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : ListUsersPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS
