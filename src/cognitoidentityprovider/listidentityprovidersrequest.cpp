// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listidentityprovidersrequest.h"
#include "listidentityprovidersrequest_p.h"
#include "listidentityprovidersresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListIdentityProvidersRequest
 * \brief The ListIdentityProvidersRequest class provides an interface for CognitoIdentityProvider ListIdentityProviders requests.
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
 * \sa CognitoIdentityProviderClient::listIdentityProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListIdentityProvidersRequest::ListIdentityProvidersRequest(const ListIdentityProvidersRequest &other)
    : CognitoIdentityProviderRequest(new ListIdentityProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListIdentityProvidersRequest object.
 */
ListIdentityProvidersRequest::ListIdentityProvidersRequest()
    : CognitoIdentityProviderRequest(new ListIdentityProvidersRequestPrivate(CognitoIdentityProviderRequest::ListIdentityProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentityProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListIdentityProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentityProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ListIdentityProvidersRequestPrivate
 * \brief The ListIdentityProvidersRequestPrivate class provides private implementation for ListIdentityProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ListIdentityProvidersRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ListIdentityProvidersRequestPrivate::ListIdentityProvidersRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListIdentityProvidersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityProvidersRequest
 * class' copy constructor.
 */
ListIdentityProvidersRequestPrivate::ListIdentityProvidersRequestPrivate(
    const ListIdentityProvidersRequestPrivate &other, ListIdentityProvidersRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
