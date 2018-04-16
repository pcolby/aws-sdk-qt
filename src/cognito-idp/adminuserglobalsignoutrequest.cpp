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

#include "adminuserglobalsignoutrequest.h"
#include "adminuserglobalsignoutrequest_p.h"
#include "adminuserglobalsignoutresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutRequest
 *
 * \brief The AdminUserGlobalSignOutRequest class encapsulates CognitoIdentityProvider AdminUserGlobalSignOut requests.
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
 * \sa CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/*!
 * @brief  Constructs a new AdminUserGlobalSignOutRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest(const AdminUserGlobalSignOutRequest &other)
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AdminUserGlobalSignOutRequest object.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest()
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(CognitoIdentityProviderRequest::AdminUserGlobalSignOutAction, this))
{

}

/*!
 * \reimp
 */
bool AdminUserGlobalSignOutRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AdminUserGlobalSignOutResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminUserGlobalSignOutResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUserGlobalSignOutRequest::response(QNetworkReply * const reply) const
{
    return new AdminUserGlobalSignOutResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AdminUserGlobalSignOutRequestPrivate
 *
 * @brief  Private implementation for AdminUserGlobalSignOutRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AdminUserGlobalSignOutRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminUserGlobalSignOutRequest instance.
 */
AdminUserGlobalSignOutRequestPrivate::AdminUserGlobalSignOutRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUserGlobalSignOutRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
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
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
