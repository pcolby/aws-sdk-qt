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

#include "adminrespondtoauthchallengerequest.h"
#include "adminrespondtoauthchallengerequest_p.h"
#include "adminrespondtoauthchallengeresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  AdminRespondToAuthChallengeRequest
 *
 * @brief  Implements CognitoIdentityProvider AdminRespondToAuthChallenge requests.
 *
 * @see    CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/**
 * @brief  Constructs a new AdminRespondToAuthChallengeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AdminRespondToAuthChallengeResponse::AdminRespondToAuthChallengeResponse(

/**
 * @brief  Constructs a new AdminRespondToAuthChallengeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest(const AdminRespondToAuthChallengeRequest &other)
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AdminRespondToAuthChallengeRequest object.
 */
AdminRespondToAuthChallengeRequest::AdminRespondToAuthChallengeRequest()
    : CognitoIdentityProviderRequest(new AdminRespondToAuthChallengeRequestPrivate(CognitoIdentityProviderRequest::AdminRespondToAuthChallengeAction, this))
{

}

bool AdminRespondToAuthChallengeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AdminRespondToAuthChallengeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AdminRespondToAuthChallengeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * AdminRespondToAuthChallengeRequest::response(QNetworkReply * const reply) const
{
    return new AdminRespondToAuthChallengeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AdminRespondToAuthChallengeRequestPrivate
 *
 * @brief  Private implementation for AdminRespondToAuthChallengeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AdminRespondToAuthChallengeRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AdminRespondToAuthChallengeRequest instance.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AdminRespondToAuthChallengeRequest * const q)
    : AdminRespondToAuthChallengePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AdminRespondToAuthChallengeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AdminRespondToAuthChallengeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AdminRespondToAuthChallengeRequest instance.
 */
AdminRespondToAuthChallengeRequestPrivate::AdminRespondToAuthChallengeRequestPrivate(
    const AdminRespondToAuthChallengeRequestPrivate &other, AdminRespondToAuthChallengeRequest * const q)
    : AdminRespondToAuthChallengePrivate(other, q)
{

}
