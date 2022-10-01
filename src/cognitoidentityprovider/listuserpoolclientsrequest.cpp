// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
