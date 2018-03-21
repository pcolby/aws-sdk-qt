/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "respondtoauthchallengerequest.h"
#include "respondtoauthchallengerequest_p.h"
#include "respondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  RespondToAuthChallengeRequest
 *
 * @brief  Implements CognitoIdentityProvider RespondToAuthChallenge requests.
 *
 * @see    CognitoIdentityProviderClient::respondToAuthChallenge
 */

/**
 * @brief  Constructs a new RespondToAuthChallengeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RespondToAuthChallengeResponse::RespondToAuthChallengeResponse(

/**
 * @brief  Constructs a new RespondToAuthChallengeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RespondToAuthChallengeRequest::RespondToAuthChallengeRequest(const RespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new RespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RespondToAuthChallengeRequest object.
 */
RespondToAuthChallengeRequest::RespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new RespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::RespondToAuthChallengeAction, this))
{

}

bool RespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RespondToAuthChallengeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RespondToAuthChallengeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * RespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new RespondToAuthChallengeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RespondToAuthChallengeRequestPrivate
 *
 * @brief  Private implementation for RespondToAuthChallengeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RespondToAuthChallengeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public RespondToAuthChallengeRequest instance.
 */
RespondToAuthChallengeRequestPrivate::RespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, RespondToAuthChallengeRequest * const q)
    : RespondToAuthChallengePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RespondToAuthChallengeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RespondToAuthChallengeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RespondToAuthChallengeRequest instance.
 */
RespondToAuthChallengeRequestPrivate::RespondToAuthChallengeRequestPrivate(
    const RespondToAuthChallengeRequestPrivate &other, RespondToAuthChallengeRequest * const q)
    : RespondToAuthChallengePrivate(other, q)
{

}
