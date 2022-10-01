// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiateauthrequest.h"
#include "initiateauthrequest_p.h"
#include "initiateauthresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthRequest
 * \brief The InitiateAuthRequest class provides an interface for CognitoIdentityProvider InitiateAuth requests.
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
 * \sa CognitoIdentityProviderClient::initiateAuth
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateAuthRequest::InitiateAuthRequest(const InitiateAuthRequest &other)
    : CognitoIdentityProviderRequest(new InitiateAuthRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateAuthRequest object.
 */
InitiateAuthRequest::InitiateAuthRequest()
    : CognitoIdentityProviderRequest(new InitiateAuthRequestPrivate(CognitoIdentityProviderRequest::InitiateAuthAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateAuthRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InitiateAuthResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateAuthRequest::response(QNetworkReply * const reply) const
{
    return new InitiateAuthResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::InitiateAuthRequestPrivate
 * \brief The InitiateAuthRequestPrivate class provides private implementation for InitiateAuthRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a InitiateAuthRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
InitiateAuthRequestPrivate::InitiateAuthRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, InitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateAuthRequest
 * class' copy constructor.
 */
InitiateAuthRequestPrivate::InitiateAuthRequestPrivate(
    const InitiateAuthRequestPrivate &other, InitiateAuthRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
