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

#include "confirmforgotpasswordrequest.h"
#include "confirmforgotpasswordrequest_p.h"
#include "confirmforgotpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmForgotPasswordRequest
 * \brief The ConfirmForgotPasswordRequest class provides an interface for CognitoIdentityProvider ConfirmForgotPassword requests.
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
 * \sa CognitoIdentityProviderClient::confirmForgotPassword
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmForgotPasswordRequest::ConfirmForgotPasswordRequest(const ConfirmForgotPasswordRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmForgotPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmForgotPasswordRequest object.
 */
ConfirmForgotPasswordRequest::ConfirmForgotPasswordRequest()
    : CognitoIdentityProviderRequest(new ConfirmForgotPasswordRequestPrivate(CognitoIdentityProviderRequest::ConfirmForgotPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmForgotPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmForgotPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmForgotPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmForgotPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmForgotPasswordRequestPrivate
 * \brief The ConfirmForgotPasswordRequestPrivate class provides private implementation for ConfirmForgotPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmForgotPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ConfirmForgotPasswordRequestPrivate::ConfirmForgotPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmForgotPasswordRequest
 * class' copy constructor.
 */
ConfirmForgotPasswordRequestPrivate::ConfirmForgotPasswordRequestPrivate(
    const ConfirmForgotPasswordRequestPrivate &other, ConfirmForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
