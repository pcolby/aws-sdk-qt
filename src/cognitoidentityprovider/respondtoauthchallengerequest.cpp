// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "respondtoauthchallengerequest.h"
#include "respondtoauthchallengerequest_p.h"
#include "respondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::RespondToAuthChallengeRequest
 * \brief The RespondToAuthChallengeRequest class provides an interface for CognitoIdentityProvider RespondToAuthChallenge requests.
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
 * \sa CognitoIdentityProviderClient::respondToAuthChallenge
 */

/*!
 * Constructs a copy of \a other.
 */
RespondToAuthChallengeRequest::RespondToAuthChallengeRequest(const RespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new RespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RespondToAuthChallengeRequest object.
 */
RespondToAuthChallengeRequest::RespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new RespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::RespondToAuthChallengeAction, this))
{

}

/*!
 * \reimp
 */
bool RespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RespondToAuthChallengeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new RespondToAuthChallengeResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::RespondToAuthChallengeRequestPrivate
 * \brief The RespondToAuthChallengeRequestPrivate class provides private implementation for RespondToAuthChallengeRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a RespondToAuthChallengeRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
RespondToAuthChallengeRequestPrivate::RespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, RespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RespondToAuthChallengeRequest
 * class' copy constructor.
 */
RespondToAuthChallengeRequestPrivate::RespondToAuthChallengeRequestPrivate(
    const RespondToAuthChallengeRequestPrivate &other, RespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
