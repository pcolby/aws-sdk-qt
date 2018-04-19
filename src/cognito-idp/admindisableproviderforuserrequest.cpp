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

#include "admindisableproviderforuserrequest.h"
#include "admindisableproviderforuserrequest_p.h"
#include "admindisableproviderforuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserRequest
 * \brief The AdminDisableProviderForUserRequest class provides an interface for CognitoIdentityProvider AdminDisableProviderForUser requests.
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
 * \sa CognitoIdentityProviderClient::adminDisableProviderForUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDisableProviderForUserRequest::AdminDisableProviderForUserRequest(const AdminDisableProviderForUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminDisableProviderForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDisableProviderForUserRequest object.
 */
AdminDisableProviderForUserRequest::AdminDisableProviderForUserRequest()
    : CognitoIdentityProviderRequest(new AdminDisableProviderForUserRequestPrivate(CognitoIdentityProviderRequest::AdminDisableProviderForUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDisableProviderForUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDisableProviderForUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDisableProviderForUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminDisableProviderForUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableProviderForUserRequestPrivate
 * \brief The AdminDisableProviderForUserRequestPrivate class provides private implementation for AdminDisableProviderForUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 *
 * Constructs a AdminDisableProviderForUserRequestPrivate object for CognitoIdentityProvider \a action with,
 * public implementation \a q.
 */
AdminDisableProviderForUserRequestPrivate::AdminDisableProviderForUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDisableProviderForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDisableProviderForUserRequest
 * class' copy constructor.
 */
AdminDisableProviderForUserRequestPrivate::AdminDisableProviderForUserRequestPrivate(
    const AdminDisableProviderForUserRequestPrivate &other, AdminDisableProviderForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
