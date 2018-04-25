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

#include "admininitiateauthrequest.h"
#include "admininitiateauthrequest_p.h"
#include "admininitiateauthresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthRequest
 * \brief The AdminInitiateAuthRequest class provides an interface for CognitoIdentityProvider AdminInitiateAuth requests.
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
 * \sa CognitoIdentityProviderClient::adminInitiateAuth
 */

/*!
 * Constructs a copy of \a other.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest(const AdminInitiateAuthRequest &other)
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminInitiateAuthRequest object.
 */
AdminInitiateAuthRequest::AdminInitiateAuthRequest()
    : CognitoIdentityProviderRequest(new AdminInitiateAuthRequestPrivate(CognitoIdentityProviderRequest::AdminInitiateAuthAction, this))
{

}

/*!
 * \reimp
 */
bool AdminInitiateAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminInitiateAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminInitiateAuthRequest::response(QNetworkReply * const reply) const
{
    return new AdminInitiateAuthResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthRequestPrivate
 * \brief The AdminInitiateAuthRequestPrivate class provides private implementation for AdminInitiateAuthRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminInitiateAuthRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminInitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminInitiateAuthRequest
 * class' copy constructor.
 */
AdminInitiateAuthRequestPrivate::AdminInitiateAuthRequestPrivate(
    const AdminInitiateAuthRequestPrivate &other, AdminInitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
