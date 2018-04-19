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

#include "associatesoftwaretokenrequest.h"
#include "associatesoftwaretokenrequest_p.h"
#include "associatesoftwaretokenresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenRequest
 * \brief The AssociateSoftwareTokenRequest class provides an interface for CognitoIdentityProvider AssociateSoftwareToken requests.
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
 * \sa CognitoIdentityProviderClient::associateSoftwareToken
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest(const AssociateSoftwareTokenRequest &other)
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateSoftwareTokenRequest object.
 */
AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest()
    : CognitoIdentityProviderRequest(new AssociateSoftwareTokenRequestPrivate(CognitoIdentityProviderRequest::AssociateSoftwareTokenAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateSoftwareTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateSoftwareTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateSoftwareTokenRequest::response(QNetworkReply * const reply) const
{
    return new AssociateSoftwareTokenResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AssociateSoftwareTokenRequestPrivate
 * \brief The AssociateSoftwareTokenRequestPrivate class provides private implementation for AssociateSoftwareTokenRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 *
 * Constructs a AssociateSoftwareTokenRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateSoftwareTokenRequest
 * class' copy constructor.
 */
AssociateSoftwareTokenRequestPrivate::AssociateSoftwareTokenRequestPrivate(
    const AssociateSoftwareTokenRequestPrivate &other, AssociateSoftwareTokenRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
