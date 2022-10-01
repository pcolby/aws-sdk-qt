// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forgotpasswordrequest.h"
#include "forgotpasswordrequest_p.h"
#include "forgotpasswordresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordRequest
 * \brief The ForgotPasswordRequest class provides an interface for CognitoIdentityProvider ForgotPassword requests.
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
 * \sa CognitoIdentityProviderClient::forgotPassword
 */

/*!
 * Constructs a copy of \a other.
 */
ForgotPasswordRequest::ForgotPasswordRequest(const ForgotPasswordRequest &other)
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ForgotPasswordRequest object.
 */
ForgotPasswordRequest::ForgotPasswordRequest()
    : CognitoIdentityProviderRequest(new ForgotPasswordRequestPrivate(CognitoIdentityProviderRequest::ForgotPasswordAction, this))
{

}

/*!
 * \reimp
 */
bool ForgotPasswordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ForgotPasswordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ForgotPasswordRequest::response(QNetworkReply * const reply) const
{
    return new ForgotPasswordResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ForgotPasswordRequestPrivate
 * \brief The ForgotPasswordRequestPrivate class provides private implementation for ForgotPasswordRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ForgotPasswordRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ForgotPasswordRequest
 * class' copy constructor.
 */
ForgotPasswordRequestPrivate::ForgotPasswordRequestPrivate(
    const ForgotPasswordRequestPrivate &other, ForgotPasswordRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
