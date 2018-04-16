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

#include "adminlistgroupsforuserrequest.h"
#include "adminlistgroupsforuserrequest_p.h"
#include "adminlistgroupsforuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminListGroupsForUserRequest
 *
 * \brief The AdminListGroupsForUserRequest class encapsulates CognitoIdentityProvider AdminListGroupsForUser requests.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminListGroupsForUser
 */

/*!
 * @brief  Constructs a new AdminListGroupsForUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest(const AdminListGroupsForUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AdminListGroupsForUserRequest object.
 */
AdminListGroupsForUserRequest::AdminListGroupsForUserRequest()
    : CognitoIdentityProviderRequest(new AdminListGroupsForUserRequestPrivate(CognitoIdentityProviderRequest::AdminListGroupsForUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminListGroupsForUserRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AdminListGroupsForUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminListGroupsForUserResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminListGroupsForUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminListGroupsForUserResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AdminListGroupsForUserRequestPrivate
 *
 * @brief  Private implementation for AdminListGroupsForUserRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminListGroupsForUserRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminListGroupsForUserRequest instance.
 */
AdminListGroupsForUserRequestPrivate::AdminListGroupsForUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminListGroupsForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
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
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
