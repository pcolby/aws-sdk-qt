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

#include "admindeleteuserrequest.h"
#include "admindeleteuserrequest_p.h"
#include "admindeleteuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserRequest
 * \brief The AdminDeleteUserRequest class provides an interface for CognitoIdentityProvider AdminDeleteUser requests.
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
 * \sa CognitoIdentityProviderClient::adminDeleteUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest(const AdminDeleteUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDeleteUserRequest object.
 */
AdminDeleteUserRequest::AdminDeleteUserRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDeleteUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDeleteUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserRequestPrivate
 * \brief The AdminDeleteUserRequestPrivate class provides private implementation for AdminDeleteUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserRequest
 * class' copy constructor.
 */
AdminDeleteUserRequestPrivate::AdminDeleteUserRequestPrivate(
    const AdminDeleteUserRequestPrivate &other, AdminDeleteUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
