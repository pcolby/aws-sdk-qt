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

#include "deleteidentityproviderrequest.h"
#include "deleteidentityproviderrequest_p.h"
#include "deleteidentityproviderresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderRequest
 * \brief The DeleteIdentityProviderRequest class provides an interface for CognitoIdentityProvider DeleteIdentityProvider requests.
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
 * \sa CognitoIdentityProviderClient::deleteIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest(const DeleteIdentityProviderRequest &other)
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityProviderRequest object.
 */
DeleteIdentityProviderRequest::DeleteIdentityProviderRequest()
    : CognitoIdentityProviderRequest(new DeleteIdentityProviderRequestPrivate(CognitoIdentityProviderRequest::DeleteIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteIdentityProviderRequestPrivate
 * \brief The DeleteIdentityProviderRequestPrivate class provides private implementation for DeleteIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityProviderRequest
 * class' copy constructor.
 */
DeleteIdentityProviderRequestPrivate::DeleteIdentityProviderRequestPrivate(
    const DeleteIdentityProviderRequestPrivate &other, DeleteIdentityProviderRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
