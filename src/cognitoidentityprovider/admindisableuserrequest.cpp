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

#include "admindisableuserrequest.h"
#include "admindisableuserrequest_p.h"
#include "admindisableuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserRequest
 * \brief The AdminDisableUserRequest class provides an interface for CognitoIdentityProvider AdminDisableUser requests.
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
 * \sa CognitoIdentityProviderClient::adminDisableUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDisableUserRequest::AdminDisableUserRequest(const AdminDisableUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDisableUserRequest object.
 */
AdminDisableUserRequest::AdminDisableUserRequest()
    : CognitoIdentityProviderRequest(new AdminDisableUserRequestPrivate(CognitoIdentityProviderRequest::AdminDisableUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDisableUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDisableUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDisableUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDisableUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserRequestPrivate
 * \brief The AdminDisableUserRequestPrivate class provides private implementation for AdminDisableUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDisableUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDisableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDisableUserRequest
 * class' copy constructor.
 */
AdminDisableUserRequestPrivate::AdminDisableUserRequestPrivate(
    const AdminDisableUserRequestPrivate &other, AdminDisableUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
