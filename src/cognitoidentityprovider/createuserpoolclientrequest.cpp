// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpoolclientrequest.h"
#include "createuserpoolclientrequest_p.h"
#include "createuserpoolclientresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientRequest
 * \brief The CreateUserPoolClientRequest class provides an interface for CognitoIdentityProvider CreateUserPoolClient requests.
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
 * \sa CognitoIdentityProviderClient::createUserPoolClient
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest(const CreateUserPoolClientRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserPoolClientRequest object.
 */
CreateUserPoolClientRequest::CreateUserPoolClientRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolClientRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolClientAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserPoolClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserPoolClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolClientRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolClientResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolClientRequestPrivate
 * \brief The CreateUserPoolClientRequestPrivate class provides private implementation for CreateUserPoolClientRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolClientRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolClientRequest
 * class' copy constructor.
 */
CreateUserPoolClientRequestPrivate::CreateUserPoolClientRequestPrivate(
    const CreateUserPoolClientRequestPrivate &other, CreateUserPoolClientRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
