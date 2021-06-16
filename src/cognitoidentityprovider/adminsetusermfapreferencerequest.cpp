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

#include "adminsetusermfapreferencerequest.h"
#include "adminsetusermfapreferencerequest_p.h"
#include "adminsetusermfapreferenceresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserMFAPreferenceRequest
 * \brief The AdminSetUserMFAPreferenceRequest class provides an interface for CognitoIdentityProvider AdminSetUserMFAPreference requests.
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
 * \sa CognitoIdentityProviderClient::adminSetUserMFAPreference
 */

/*!
 * Constructs a copy of \a other.
 */
AdminSetUserMFAPreferenceRequest::AdminSetUserMFAPreferenceRequest(const AdminSetUserMFAPreferenceRequest &other)
    : CognitoIdentityProviderRequest(new AdminSetUserMFAPreferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminSetUserMFAPreferenceRequest object.
 */
AdminSetUserMFAPreferenceRequest::AdminSetUserMFAPreferenceRequest()
    : CognitoIdentityProviderRequest(new AdminSetUserMFAPreferenceRequestPrivate(CognitoIdentityProviderRequest::AdminSetUserMFAPreferenceAction, this))
{

}

/*!
 * \reimp
 */
bool AdminSetUserMFAPreferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminSetUserMFAPreferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminSetUserMFAPreferenceRequest::response(QNetworkReply * const reply) const
{
    return new AdminSetUserMFAPreferenceResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminSetUserMFAPreferenceRequestPrivate
 * \brief The AdminSetUserMFAPreferenceRequestPrivate class provides private implementation for AdminSetUserMFAPreferenceRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminSetUserMFAPreferenceRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminSetUserMFAPreferenceRequestPrivate::AdminSetUserMFAPreferenceRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminSetUserMFAPreferenceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminSetUserMFAPreferenceRequest
 * class' copy constructor.
 */
AdminSetUserMFAPreferenceRequestPrivate::AdminSetUserMFAPreferenceRequestPrivate(
    const AdminSetUserMFAPreferenceRequestPrivate &other, AdminSetUserMFAPreferenceRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
