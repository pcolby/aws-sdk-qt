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

#include "createuserpoolclientrequest.h"
#include "createuserpoolclientrequest_p.h"
#include "createuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientRequest
 * \brief The CreateUserPoolClientRequest class provides an interface for CognitoIdentityProvider CreateUserPoolClient requests.
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
 * \sa CognitoIdentityProviderClient::createUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest(const CreateUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserPoolClientRequest object.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientRequestPrivate
 * \brief The CreateUserPoolClientRequestPrivate class provides private implementation for CreateUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolClientRequest
 * class' copy constructor.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CreateUserPoolClientRequestPrivate &other, CreateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
