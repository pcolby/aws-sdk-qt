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

#include "forgotpasswordrequest.h"
#include "forgotpasswordrequest_p.h"
#include "forgotpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordRequest
 * \brief The ForgotPasswordRequest class provides an interface for CognitoIdentityProvider ForgotPassword requests.
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
 * \sa CognitoIdentityProviderClient::forgotPassword
 */

/*!
 * Constructs a copy of \a other.
 */
ForgotPasswordRequest::ForgotPasswordRequest(const ForgotPasswordRequest &other)
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ForgotPasswordRequest object.
 */
ForgotPasswordRequest::ForgotPasswordRequest()
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(CognitoIdentityProviderRequest::ForgotPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ForgotPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ForgotPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ForgotPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ForgotPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordRequestPrivate
 * \brief The ForgotPasswordRequestPrivate class provides private implementation for ForgotPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 *
 * Constructs a ForgotPasswordRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ForgotPasswordRequest
 * class' copy constructor.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const ForgotPasswordRequestPrivate &other, ForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
