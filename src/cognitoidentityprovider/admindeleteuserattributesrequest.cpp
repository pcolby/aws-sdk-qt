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

#include "admindeleteuserattributesrequest.h"
#include "admindeleteuserattributesrequest_p.h"
#include "admindeleteuserattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesRequest
 * \brief The AdminDeleteUserAttributesRequest class provides an interface for CognitoIdentityProvider AdminDeleteUserAttributes requests.
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
 * \sa CognitoIdentityProviderClient::adminDeleteUserAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest(const AdminDeleteUserAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminDeleteUserAttributesRequest object.
 */
AdminDeleteUserAttributesRequest::AdminDeleteUserAttributesRequest()
    : CognitoIdentityProviderRequest(new AdminDeleteUserAttributesRequestPrivate(CognitoIdentityProviderRequest::AdminDeleteUserAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool AdminDeleteUserAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminDeleteUserAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminDeleteUserAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AdminDeleteUserAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDeleteUserAttributesRequestPrivate
 * \brief The AdminDeleteUserAttributesRequestPrivate class provides private implementation for AdminDeleteUserAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDeleteUserAttributesRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminDeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminDeleteUserAttributesRequest
 * class' copy constructor.
 */
AdminDeleteUserAttributesRequestPrivate::AdminDeleteUserAttributesRequestPrivate(
    const AdminDeleteUserAttributesRequestPrivate &other, AdminDeleteUserAttributesRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
