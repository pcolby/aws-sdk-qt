// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
