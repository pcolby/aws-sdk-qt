// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpooldomainrequest.h"
#include "createuserpooldomainrequest_p.h"
#include "createuserpooldomainresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolDomainRequest
 * \brief The CreateUserPoolDomainRequest class provides an interface for CognitoIdentityProvider CreateUserPoolDomain requests.
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
 * \sa CognitoIdentityProviderClient::createUserPoolDomain
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserPoolDomainRequest::CreateUserPoolDomainRequest(const CreateUserPoolDomainRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserPoolDomainRequest object.
 */
CreateUserPoolDomainRequest::CreateUserPoolDomainRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolDomainRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolDomainAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserPoolDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserPoolDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolDomainResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolDomainRequestPrivate
 * \brief The CreateUserPoolDomainRequestPrivate class provides private implementation for CreateUserPoolDomainRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolDomainRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserPoolDomainRequestPrivate::CreateUserPoolDomainRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolDomainRequest
 * class' copy constructor.
 */
CreateUserPoolDomainRequestPrivate::CreateUserPoolDomainRequestPrivate(
    const CreateUserPoolDomainRequestPrivate &other, CreateUserPoolDomainRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
