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

#include "listuserpoolclientsrequest.h"
#include "listuserpoolclientsrequest_p.h"
#include "listuserpoolclientsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolClientsRequest
 * \brief The ListUserPoolClientsRequest class provides an interface for CognitoIdentityProvider ListUserPoolClients requests.
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
 * \sa CognitoIdentityProviderClient::listUserPoolClients
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserPoolClientsRequest::ListUserPoolClientsRequest(const ListUserPoolClientsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserPoolClientsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserPoolClientsRequest object.
 */
ListUserPoolClientsRequest::ListUserPoolClientsRequest()
    : CognitoIdentityProviderRequest(new ListUserPoolClientsRequestPrivate(CognitoIdentityProviderRequest::ListUserPoolClientsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserPoolClientsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserPoolClientsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserPoolClientsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoolClientsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolClientsRequestPrivate
 * \brief The ListUserPoolClientsRequestPrivate class provides private implementation for ListUserPoolClientsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserPoolClientsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListUserPoolClientsRequestPrivate::ListUserPoolClientsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserPoolClientsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoolClientsRequest
 * class' copy constructor.
 */
ListUserPoolClientsRequestPrivate::ListUserPoolClientsRequestPrivate(
    const ListUserPoolClientsRequestPrivate &other, ListUserPoolClientsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
