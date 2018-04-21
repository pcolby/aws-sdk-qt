/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "adminrespondtoauthchallengerequest.h"
#include "adminrespondtoauthchallengerequest_p.h"
#include "adminrespondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeRequest
 * \brief The AdminRespondToAuthChallengeRequest class provides an interface for CognitoIdentityProvider AdminRespondToAuthChallenge requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/*!
 * Constructs a copy of \a other.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest(const AdminRespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AdminRespondToAuthChallengeRequest object.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::AdminRespondToAuthChallengeAction, this))
{

}

/*!
 * \reimp
 */
bool AdminRespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AdminRespondToAuthChallengeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AdminRespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new AdminRespondToAuthChallengeResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeRequestPrivate
 * \brief The AdminRespondToAuthChallengeRequestPrivate class provides private implementation for AdminRespondToAuthChallengeRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminRespondToAuthChallengeRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AdminRespondToAuthChallengeRequest
 * class' copy constructor.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const AdminRespondToAuthChallengeRequestPrivate &other, AdminRespondToAuthChallengeRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
