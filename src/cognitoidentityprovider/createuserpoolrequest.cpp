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

#include "createuserpoolrequest.h"
#include "createuserpoolrequest_p.h"
#include "createuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolRequest
 * \brief The CreateUserPoolRequest class provides an interface for CognitoIdentityProvider CreateUserPool requests.
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
 * \sa CognitoIdentityProviderClient::createUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserPoolRequest::CreateUserPoolRequest(const CreateUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserPoolRequest object.
 */
CreateUserPoolRequest::CreateUserPoolRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolRequestPrivate
 * \brief The CreateUserPoolRequestPrivate class provides private implementation for CreateUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolRequest
 * class' copy constructor.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CreateUserPoolRequestPrivate &other, CreateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
