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

#include "adminsetuserpasswordrequest.h"
#include "adminsetuserpasswordrequest_p.h"
#include "adminsetuserpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordRequest
 * \brief The AdminSetUserPasswordRequest class provides an interface for CognitoIdentityProvider AdminSetUserPassword requests.
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
 * \sa CognitoIdentityProviderClient::adminSetUserPassword
 */

/*!
 * Constructs a copy of \a other.
 */
AdminSetUserPasswordRequest::AdminSetUserPasswordRequest(const AdminSetUserPasswordRequest &other)
    : CognitoIdentityProviderRequest(new AdminSetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminSetUserPasswordRequest object.
 */
AdminSetUserPasswordRequest::AdminSetUserPasswordRequest()
    : CognitoIdentityProviderRequest(new AdminSetUserPasswordRequestPrivate(CognitoIdentityProviderRequest::AdminSetUserPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool AdminSetUserPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminSetUserPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminSetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new AdminSetUserPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserPasswordRequestPrivate
 * \brief The AdminSetUserPasswordRequestPrivate class provides private implementation for AdminSetUserPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminSetUserPasswordRequestPrivate::AdminSetUserPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminSetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminSetUserPasswordRequest
 * class' copy constructor.
 */
AdminSetUserPasswordRequestPrivate::AdminSetUserPasswordRequestPrivate(
    const AdminSetUserPasswordRequestPrivate &other, AdminSetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
