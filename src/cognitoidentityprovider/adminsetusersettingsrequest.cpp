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

#include "adminsetusersettingsrequest.h"
#include "adminsetusersettingsrequest_p.h"
#include "adminsetusersettingsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsRequest
 * \brief The AdminSetUserSettingsRequest class provides an interface for CognitoIdentityProvider AdminSetUserSettings requests.
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
 * \sa CognitoIdentityProviderClient::adminSetUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
AdminSetUserSettingsRequest::AdminSetUserSettingsRequest(const AdminSetUserSettingsRequest &other)
    : CognitoIdentityProviderRequest(new AdminSetUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminSetUserSettingsRequest object.
 */
AdminSetUserSettingsRequest::AdminSetUserSettingsRequest()
    : CognitoIdentityProviderRequest(new AdminSetUserSettingsRequestPrivate(CognitoIdentityProviderRequest::AdminSetUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool AdminSetUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminSetUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminSetUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new AdminSetUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserSettingsRequestPrivate
 * \brief The AdminSetUserSettingsRequestPrivate class provides private implementation for AdminSetUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserSettingsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminSetUserSettingsRequestPrivate::AdminSetUserSettingsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminSetUserSettingsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminSetUserSettingsRequest
 * class' copy constructor.
 */
AdminSetUserSettingsRequestPrivate::AdminSetUserSettingsRequestPrivate(
    const AdminSetUserSettingsRequestPrivate &other, AdminSetUserSettingsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
