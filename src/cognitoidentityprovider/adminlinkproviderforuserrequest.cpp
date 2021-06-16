/*
    Copyright 2013-2021 Paul Colby

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

#include "adminlinkproviderforuserrequest.h"
#include "adminlinkproviderforuserrequest_p.h"
#include "adminlinkproviderforuserresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserRequest
 * \brief The AdminLinkProviderForUserRequest class provides an interface for CognitoIdentityProvider AdminLinkProviderForUser requests.
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
 * \sa CognitoIdentityProviderClient::adminLinkProviderForUser
 */

/*!
 * Constructs a copy of \a other.
 */
AdminLinkProviderForUserRequest::AdminLinkProviderForUserRequest(const AdminLinkProviderForUserRequest &other)
    : CognitoIdentityProviderRequest(new AdminLinkProviderForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminLinkProviderForUserRequest object.
 */
AdminLinkProviderForUserRequest::AdminLinkProviderForUserRequest()
    : CognitoIdentityProviderRequest(new AdminLinkProviderForUserRequestPrivate(CognitoIdentityProviderRequest::AdminLinkProviderForUserAction, this))
{

}

/*!
 * \reimp
 */
bool AdminLinkProviderForUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminLinkProviderForUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminLinkProviderForUserRequest::response(QNetworkReply * const reply) const
{
    return new AdminLinkProviderForUserResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminLinkProviderForUserRequestPrivate
 * \brief The AdminLinkProviderForUserRequestPrivate class provides private implementation for AdminLinkProviderForUserRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminLinkProviderForUserRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminLinkProviderForUserRequestPrivate::AdminLinkProviderForUserRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminLinkProviderForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminLinkProviderForUserRequest
 * class' copy constructor.
 */
AdminLinkProviderForUserRequestPrivate::AdminLinkProviderForUserRequestPrivate(
    const AdminLinkProviderForUserRequestPrivate &other, AdminLinkProviderForUserRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
