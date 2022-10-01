// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listuserpoolsrequest.h"
#include "listuserpoolsrequest_p.h"
#include "listuserpoolsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsRequest
 * \brief The ListUserPoolsRequest class provides an interface for CognitoIdentityProvider ListUserPools requests.
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
 * \sa CognitoIdentityProviderClient::listUserPools
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserPoolsRequest::ListUserPoolsRequest(const ListUserPoolsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserPoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserPoolsRequest object.
 */
ListUserPoolsRequest::ListUserPoolsRequest()
    : CognitoIdentityProviderRequest(new ListUserPoolsRequestPrivate(CognitoIdentityProviderRequest::ListUserPoolsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserPoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserPoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserPoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoolsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserPoolsRequestPrivate
 * \brief The ListUserPoolsRequestPrivate class provides private implementation for ListUserPoolsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListUserPoolsRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListUserPoolsRequestPrivate::ListUserPoolsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserPoolsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoolsRequest
 * class' copy constructor.
 */
ListUserPoolsRequestPrivate::ListUserPoolsRequestPrivate(
    const ListUserPoolsRequestPrivate &other, ListUserPoolsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
