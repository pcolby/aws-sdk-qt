// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resendconfirmationcoderequest.h"
#include "resendconfirmationcoderequest_p.h"
#include "resendconfirmationcoderesponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ResendConfirmationCodeRequest
 * \brief The ResendConfirmationCodeRequest class provides an interface for CognitoIdentityProvider ResendConfirmationCode requests.
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
 * \sa CognitoIdentityProviderClient::resendConfirmationCode
 */

/*!
 * Constructs a copy of \a other.
 */
ResendConfirmationCodeRequest::ResendConfirmationCodeRequest(const ResendConfirmationCodeRequest &other)
    : CognitoIdentityProviderRequest(new ResendConfirmationCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResendConfirmationCodeRequest object.
 */
ResendConfirmationCodeRequest::ResendConfirmationCodeRequest()
    : CognitoIdentityProviderRequest(new ResendConfirmationCodeRequestPrivate(CognitoIdentityProviderRequest::ResendConfirmationCodeAction, this))
{

}

/*!
 * \reimp
 */
bool ResendConfirmationCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResendConfirmationCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResendConfirmationCodeRequest::response(QNetworkReply * const reply) const
{
    return new ResendConfirmationCodeResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::ResendConfirmationCodeRequestPrivate
 * \brief The ResendConfirmationCodeRequestPrivate class provides private implementation for ResendConfirmationCodeRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ResendConfirmationCodeRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
ResendConfirmationCodeRequestPrivate::ResendConfirmationCodeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ResendConfirmationCodeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResendConfirmationCodeRequest
 * class' copy constructor.
 */
ResendConfirmationCodeRequestPrivate::ResendConfirmationCodeRequestPrivate(
    const ResendConfirmationCodeRequestPrivate &other, ResendConfirmationCodeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
