/*
    Copyright 2013-2018 Paul Colby

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

#include "confirmsignuprequest.h"
#include "confirmsignuprequest_p.h"
#include "confirmsignupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpRequest
 * \brief The ConfirmSignUpRequest class provides an interface for CognitoIdentityProvider ConfirmSignUp requests.
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
 * \sa CognitoIdentityProviderClient::confirmSignUp
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmSignUpRequest::ConfirmSignUpRequest(const ConfirmSignUpRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmSignUpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmSignUpRequest object.
 */
ConfirmSignUpRequest::ConfirmSignUpRequest()
    : CognitoIdentityProviderRequest(new ConfirmSignUpRequestPrivate(CognitoIdentityProviderRequest::ConfirmSignUpAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmSignUpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmSignUpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmSignUpRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmSignUpResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpRequestPrivate
 * \brief The ConfirmSignUpRequestPrivate class provides private implementation for ConfirmSignUpRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmSignUpRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ConfirmSignUpRequestPrivate::ConfirmSignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmSignUpRequest
 * class' copy constructor.
 */
ConfirmSignUpRequestPrivate::ConfirmSignUpRequestPrivate(
    const ConfirmSignUpRequestPrivate &other, ConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
