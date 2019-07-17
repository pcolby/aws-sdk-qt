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

#include "adminenableuserrequest.h"
#include "adminenableuserrequest_p.h"
#include "adminenableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserRequest
 * \brief The AdminEnableUserRequest class provides an interface for CognitoIdentityProvider AdminEnableUser requests.
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
 * \sa CognitoIdentityProviderClient::adminEnableUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminEnableUserRequest::AdminEnableUserRequest(const AdminEnableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminEnableUserRequest object.
 */
AdminEnableUserRequest::AdminEnableUserRequest()
    : CognitoIdentityProviderRequest(new AdminEnableUserRequestPrivate(CognitoIdentityProviderRequest::AdminEnableUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminEnableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminEnableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminEnableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminEnableUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminEnableUserRequestPrivate
 * \brief The AdminEnableUserRequestPrivate class provides private implementation for AdminEnableUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminEnableUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminEnableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminEnableUserRequest
 * class' copy constructor.
 */
AdminEnableUserRequestPrivate::AdminEnableUserRequestPrivate(
    const AdminEnableUserRequestPrivate &other, AdminEnableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
