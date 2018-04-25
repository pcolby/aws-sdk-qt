/*
    Copyright 2013-2018 Paul Colby

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

#include "createresourceserverrequest.h"
#include "createresourceserverrequest_p.h"
#include "createresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerRequest
 * \brief The CreateResourceServerRequest class provides an interface for CognitoIdentityProvider CreateResourceServer requests.
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
 * \sa CognitoIdentityProviderClient::createResourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceServerRequest::CreateResourceServerRequest(const CreateResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceServerRequest object.
 */
CreateResourceServerRequest::CreateResourceServerRequest()
    : CognitoIdentityProviderRequest(new CreateResourceServerRequestPrivate(CognitoIdentityProviderRequest::CreateResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateResourceServerRequestPrivate
 * \brief The CreateResourceServerRequestPrivate class provides private implementation for CreateResourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateResourceServerRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceServerRequest
 * class' copy constructor.
 */
CreateResourceServerRequestPrivate::CreateResourceServerRequestPrivate(
    const CreateResourceServerRequestPrivate &other, CreateResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
