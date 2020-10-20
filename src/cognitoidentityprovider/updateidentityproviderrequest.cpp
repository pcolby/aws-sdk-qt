/*
    Copyright 2013-2020 Paul Colby

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

#include "updateidentityproviderrequest.h"
#include "updateidentityproviderrequest_p.h"
#include "updateidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderRequest
 * \brief The UpdateIdentityProviderRequest class provides an interface for CognitoIdentityProvider UpdateIdentityProvider requests.
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
 * \sa CognitoIdentityProviderClient::updateIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new UpdateIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIdentityProviderRequest object.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new UpdateIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::UpdateIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateIdentityProviderRequestPrivate
 * \brief The UpdateIdentityProviderRequestPrivate class provides private implementation for UpdateIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityProviderRequest
 * class' copy constructor.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const UpdateIdentityProviderRequestPrivate &other, UpdateIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
