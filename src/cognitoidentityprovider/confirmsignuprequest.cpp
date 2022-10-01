// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmsignuprequest.h"
#include "confirmsignuprequest_p.h"
#include "confirmsignupresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpRequest
 * \brief The ConfirmSignUpRequest class provides an interface for CognitoIdentityProvider ConfirmSignUp requests.
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
 * \sa CognitoIdentityProviderClient::confirmSignUp
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmSignUpRequest::ConfirmSignUpRequest(const ConfirmSignUpRequest &other)
    : CognitoIdentityProviderRequest(new ConfirmSignUpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmSignUpRequest object.
 */
ConfirmSignUpRequest::ConfirmSignUpRequest()
    : CognitoIdentityProviderRequest(new ConfirmSignUpRequestPrivate(CognitoIdentityProviderRequest::ConfirmSignUpAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmSignUpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmSignUpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmSignUpRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmSignUpResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmSignUpRequestPrivate
 * \brief The ConfirmSignUpRequestPrivate class provides private implementation for ConfirmSignUpRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmSignUpRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ConfirmSignUpRequestPrivate::ConfirmSignUpRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmSignUpRequest
 * class' copy constructor.
 */
ConfirmSignUpRequestPrivate::ConfirmSignUpRequestPrivate(
    const ConfirmSignUpRequestPrivate &other, ConfirmSignUpRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
