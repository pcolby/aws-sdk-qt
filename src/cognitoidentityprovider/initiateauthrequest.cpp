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

#include "initiateauthrequest.h"
#include "initiateauthrequest_p.h"
#include "initiateauthresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthRequest
 * \brief The InitiateAuthRequest class provides an interface for CognitoIdentityProvider InitiateAuth requests.
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
 * \sa CognitoIdentityProviderClient::initiateAuth
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateAuthRequest::InitiateAuthRequest(const InitiateAuthRequest &other)
    : CognitoIdentityProviderRequest(new InitiateAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateAuthRequest object.
 */
InitiateAuthRequest::InitiateAuthRequest()
    : CognitoIdentityProviderRequest(new InitiateAuthRequestPrivate(CognitoIdentityProviderRequest::InitiateAuthAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitiateAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateAuthRequest::response(QNetworkReply * const reply) const
{
    return new InitiateAuthResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthRequestPrivate
 * \brief The InitiateAuthRequestPrivate class provides private implementation for InitiateAuthRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a InitiateAuthRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
InitiateAuthRequestPrivate::InitiateAuthRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, InitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateAuthRequest
 * class' copy constructor.
 */
InitiateAuthRequestPrivate::InitiateAuthRequestPrivate(
    const InitiateAuthRequestPrivate &other, InitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
