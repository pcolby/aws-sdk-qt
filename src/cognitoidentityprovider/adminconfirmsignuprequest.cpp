/*
    Copyright 2013-2020 Paul Colby

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

#include "adminconfirmsignuprequest.h"
#include "adminconfirmsignuprequest_p.h"
#include "adminconfirmsignupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminConfirmSignUpRequest
 * \brief The AdminConfirmSignUpRequest class provides an interface for CognitoIdentityProvider AdminConfirmSignUp requests.
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
 * \sa CognitoIdentityProviderClient::adminConfirmSignUp
 */

/*!
 * Constructs a copy of \a other.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest(const AdminConfirmSignUpRequest &other)
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminConfirmSignUpRequest object.
 */
AdminConfirmSignUpRequest::AdminConfirmSignUpRequest()
    : CognitoIdentityProviderRequest(new AdminConfirmSignUpRequestPrivate(CognitoIdentityProviderRequest::AdminConfirmSignUpAction, this))
{

}

/*!
 * \reimp
 */
bool AdminConfirmSignUpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminConfirmSignUpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminConfirmSignUpRequest::response(QNetworkReply * const reply) const
{
    return new AdminConfirmSignUpResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminConfirmSignUpRequestPrivate
 * \brief The AdminConfirmSignUpRequestPrivate class provides private implementation for AdminConfirmSignUpRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminConfirmSignUpRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminConfirmSignUpRequest
 * class' copy constructor.
 */
AdminConfirmSignUpRequestPrivate::AdminConfirmSignUpRequestPrivate(
    const AdminConfirmSignUpRequestPrivate &other, AdminConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
