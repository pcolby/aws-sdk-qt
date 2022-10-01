// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserpoolrequest.h"
#include "createuserpoolrequest_p.h"
#include "createuserpoolresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolRequest
 * \brief The CreateUserPoolRequest class provides an interface for CognitoIdentityProvider CreateUserPool requests.
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
 * \sa CognitoIdentityProviderClient::createUserPool
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserPoolRequest::CreateUserPoolRequest(const CreateUserPoolRequest &other)
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserPoolRequest object.
 */
CreateUserPoolRequest::CreateUserPoolRequest()
    : CognitoIdentityProviderRequest(new CreateUserPoolRequestPrivate(CognitoIdentityProviderRequest::CreateUserPoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserPoolRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserPoolResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CreateUserPoolRequestPrivate
 * \brief The CreateUserPoolRequestPrivate class provides private implementation for CreateUserPoolRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CreateUserPoolRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, CreateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserPoolRequest
 * class' copy constructor.
 */
CreateUserPoolRequestPrivate::CreateUserPoolRequestPrivate(
    const CreateUserPoolRequestPrivate &other, CreateUserPoolRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
