/*
    Copyright 2013-2019 Paul Colby

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

#include "updateuserpoolclientrequest.h"
#include "updateuserpoolclientrequest_p.h"
#include "updateuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientRequest
 * \brief The UpdateUserPoolClientRequest class provides an interface for CognitoIdentityProvider UpdateUserPoolClient requests.
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
 * \sa CognitoIdentityProviderClient::updateUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserPoolClientRequest::UpdateUserPoolClientRequest(const UpdateUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new UpdateUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserPoolClientRequest object.
 */
UpdateUserPoolClientRequest::UpdateUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new UpdateUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::UpdateUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::UpdateUserPoolClientRequestPrivate
 * \brief The UpdateUserPoolClientRequestPrivate class provides private implementation for UpdateUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a UpdateUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
UpdateUserPoolClientRequestPrivate::UpdateUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, UpdateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserPoolClientRequest
 * class' copy constructor.
 */
UpdateUserPoolClientRequestPrivate::UpdateUserPoolClientRequestPrivate(
    const UpdateUserPoolClientRequestPrivate &other, UpdateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
