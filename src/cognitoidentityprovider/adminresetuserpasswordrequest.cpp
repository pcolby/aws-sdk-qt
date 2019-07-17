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

#include "adminresetuserpasswordrequest.h"
#include "adminresetuserpasswordrequest_p.h"
#include "adminresetuserpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordRequest
 * \brief The AdminResetUserPasswordRequest class provides an interface for CognitoIdentityProvider AdminResetUserPassword requests.
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
 * \sa CognitoIdentityProviderClient::adminResetUserPassword
 */

/*!
 * Constructs a copy of \a other.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest(const AdminResetUserPasswordRequest &other)
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminResetUserPasswordRequest object.
 */
AdminResetUserPasswordRequest::AdminResetUserPasswordRequest()
    : CognitoIdentityProviderRequest(new AdminResetUserPasswordRequestPrivate(CognitoIdentityProviderRequest::AdminResetUserPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool AdminResetUserPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminResetUserPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminResetUserPasswordRequest::response(QNetworkReply * const reply) const
{
    return new AdminResetUserPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminResetUserPasswordRequestPrivate
 * \brief The AdminResetUserPasswordRequestPrivate class provides private implementation for AdminResetUserPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminResetUserPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminResetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminResetUserPasswordRequest
 * class' copy constructor.
 */
AdminResetUserPasswordRequestPrivate::AdminResetUserPasswordRequestPrivate(
    const AdminResetUserPasswordRequestPrivate &other, AdminResetUserPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
