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

#include "getuserpoolmfaconfigrequest.h"
#include "getuserpoolmfaconfigrequest_p.h"
#include "getuserpoolmfaconfigresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserPoolMfaConfigRequest
 * \brief The GetUserPoolMfaConfigRequest class provides an interface for CognitoIdentityProvider GetUserPoolMfaConfig requests.
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
 * \sa CognitoIdentityProviderClient::getUserPoolMfaConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserPoolMfaConfigRequest::GetUserPoolMfaConfigRequest(const GetUserPoolMfaConfigRequest &other)
    : CognitoIdentityProviderRequest(new GetUserPoolMfaConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserPoolMfaConfigRequest object.
 */
GetUserPoolMfaConfigRequest::GetUserPoolMfaConfigRequest()
    : CognitoIdentityProviderRequest(new GetUserPoolMfaConfigRequestPrivate(CognitoIdentityProviderRequest::GetUserPoolMfaConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserPoolMfaConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserPoolMfaConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserPoolMfaConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetUserPoolMfaConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetUserPoolMfaConfigRequestPrivate
 * \brief The GetUserPoolMfaConfigRequestPrivate class provides private implementation for GetUserPoolMfaConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 *
 * Constructs a GetUserPoolMfaConfigRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
 */
GetUserPoolMfaConfigRequestPrivate::GetUserPoolMfaConfigRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, GetUserPoolMfaConfigRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserPoolMfaConfigRequest
 * class' copy constructor.
 */
GetUserPoolMfaConfigRequestPrivate::GetUserPoolMfaConfigRequestPrivate(
    const GetUserPoolMfaConfigRequestPrivate &other, GetUserPoolMfaConfigRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
