/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "admingetuserrequest.h"
#include "admingetuserrequest_p.h"
#include "admingetuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserRequest
 * \brief The AdminGetUserRequest class provides an interface for CognitoIdentityProvider AdminGetUser requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
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
 * \sa CognitoIdentityProviderClient::adminGetUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminGetUserRequest::AdminGetUserRequest(const AdminGetUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminGetUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminGetUserRequest object.
 */
AdminGetUserRequest::AdminGetUserRequest()
    : CognitoIdentityProviderRequest(new AdminGetUserRequestPrivate(CognitoIdentityProviderRequest::AdminGetUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminGetUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminGetUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminGetUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminGetUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminGetUserRequestPrivate
 * \brief The AdminGetUserRequestPrivate class provides private implementation for AdminGetUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminGetUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminGetUserRequestPrivate::AdminGetUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminGetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminGetUserRequest
 * class' copy constructor.
 */
AdminGetUserRequestPrivate::AdminGetUserRequestPrivate(
    const AdminGetUserRequestPrivate &other, AdminGetUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
