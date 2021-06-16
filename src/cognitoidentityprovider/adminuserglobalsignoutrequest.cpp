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

#include "adminuserglobalsignoutrequest.h"
#include "adminuserglobalsignoutrequest_p.h"
#include "adminuserglobalsignoutresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutRequest
 * \brief The AdminUserGlobalSignOutRequest class provides an interface for CognitoIdentityProvider AdminUserGlobalSignOut requests.
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
 * \sa CognitoIdentityProviderClient::adminUserGlobalSignOut
 */

/*!
 * Constructs a copy of \a other.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest(const AdminUserGlobalSignOutRequest &other)
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminUserGlobalSignOutRequest object.
 */
AdminUserGlobalSignOutRequest::AdminUserGlobalSignOutRequest()
    : CognitoIdentityProviderRequest(new AdminUserGlobalSignOutRequestPrivate(CognitoIdentityProviderRequest::AdminUserGlobalSignOutAction, this))
{

}

/*!
 * \reimp
 */
bool AdminUserGlobalSignOutRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminUserGlobalSignOutResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminUserGlobalSignOutRequest::response(QNetworkReply * const reply) const
{
    return new AdminUserGlobalSignOutResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUserGlobalSignOutRequestPrivate
 * \brief The AdminUserGlobalSignOutRequestPrivate class provides private implementation for AdminUserGlobalSignOutRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUserGlobalSignOutRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminUserGlobalSignOutRequestPrivate::AdminUserGlobalSignOutRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminUserGlobalSignOutRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminUserGlobalSignOutRequest
 * class' copy constructor.
 */
AdminUserGlobalSignOutRequestPrivate::AdminUserGlobalSignOutRequestPrivate(
    const AdminUserGlobalSignOutRequestPrivate &other, AdminUserGlobalSignOutRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
