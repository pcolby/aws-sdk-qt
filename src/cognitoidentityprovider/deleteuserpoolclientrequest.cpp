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

#include "deleteuserpoolclientrequest.h"
#include "deleteuserpoolclientrequest_p.h"
#include "deleteuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolClientRequest
 * \brief The DeleteUserPoolClientRequest class provides an interface for CognitoIdentityProvider DeleteUserPoolClient requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::deleteUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserPoolClientRequest::DeleteUserPoolClientRequest(const DeleteUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserPoolClientRequest object.
 */
DeleteUserPoolClientRequest::DeleteUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolClientRequestPrivate
 * \brief The DeleteUserPoolClientRequestPrivate class provides private implementation for DeleteUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteUserPoolClientRequestPrivate::DeleteUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolClientRequest
 * class' copy constructor.
 */
DeleteUserPoolClientRequestPrivate::DeleteUserPoolClientRequestPrivate(
    const DeleteUserPoolClientRequestPrivate &other, DeleteUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
