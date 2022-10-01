// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signuprequest.h"
#include "signuprequest_p.h"
#include "signupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpRequest
 * \brief The SignUpRequest class provides an interface for CognitoIdentityProvider SignUp requests.
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
 * \sa CognitoIdentityProviderClient::signUp
 */

/*!
 * Constructs a copy of \a other.
 */
SignUpRequest::SignUpRequest(const SignUpRequest &other)
    : CognitoIdentityProviderRequest(new SignUpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SignUpRequest object.
 */
SignUpRequest::SignUpRequest()
    : CognitoIdentityProviderRequest(new SignUpRequestPrivate(CognitoIdentityProviderRequest::SignUpAction, this))
{

}

/*!
 * \reimp
 */
bool SignUpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SignUpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SignUpRequest::response(QNetworkReply * const reply) const
{
    return new SignUpResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::SignUpRequestPrivate
 * \brief The SignUpRequestPrivate class provides private implementation for SignUpRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a SignUpRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
SignUpRequestPrivate::SignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, SignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SignUpRequest
 * class' copy constructor.
 */
SignUpRequestPrivate::SignUpRequestPrivate(
    const SignUpRequestPrivate &other, SignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
