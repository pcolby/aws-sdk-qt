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

#include "deleteuserpooldomainrequest.h"
#include "deleteuserpooldomainrequest_p.h"
#include "deleteuserpooldomainresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainRequest
 * \brief The DeleteUserPoolDomainRequest class provides an interface for CognitoIdentityProvider DeleteUserPoolDomain requests.
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
 * \sa CognitoIdentityProviderClient::deleteUserPoolDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserPoolDomainRequest::DeleteUserPoolDomainRequest(const DeleteUserPoolDomainRequest &other)
    : CognitoIdentityProviderRequest(new DeleteUserPoolDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserPoolDomainRequest object.
 */
DeleteUserPoolDomainRequest::DeleteUserPoolDomainRequest()
    : CognitoIdentityProviderRequest(new DeleteUserPoolDomainRequestPrivate(CognitoIdentityProviderRequest::DeleteUserPoolDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserPoolDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserPoolDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserPoolDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPoolDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::DeleteUserPoolDomainRequestPrivate
 * \brief The DeleteUserPoolDomainRequestPrivate class provides private implementation for DeleteUserPoolDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DeleteUserPoolDomainRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
DeleteUserPoolDomainRequestPrivate::DeleteUserPoolDomainRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DeleteUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPoolDomainRequest
 * class' copy constructor.
 */
DeleteUserPoolDomainRequestPrivate::DeleteUserPoolDomainRequestPrivate(
    const DeleteUserPoolDomainRequestPrivate &other, DeleteUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
