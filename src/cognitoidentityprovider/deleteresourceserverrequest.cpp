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

#include "deleteresourceserverrequest.h"
#include "deleteresourceserverrequest_p.h"
#include "deleteresourceserverresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerRequest
 * \brief The DeleteResourceServerRequest class provides an interface for CognitoIdentityProvider DeleteResourceServer requests.
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
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::deleteResourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest(const DeleteResourceServerRequest &other)
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceServerRequest object.
 */
DeleteResourceServerRequest::DeleteResourceServerRequest()
    : CognitoIdentityProviderRequest(new DeleteResourceServerRequestPrivate(CognitoIdentityProviderRequest::DeleteResourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteResourceServerRequestPrivate
 * \brief The DeleteResourceServerRequestPrivate class provides private implementation for DeleteResourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteResourceServerRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceServerRequest
 * class' copy constructor.
 */
DeleteResourceServerRequestPrivate::DeleteResourceServerRequestPrivate(
    const DeleteResourceServerRequestPrivate &other, DeleteResourceServerRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
