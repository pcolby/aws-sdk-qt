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

#include "startmatchmakingrequest.h"
#include "startmatchmakingrequest_p.h"
#include "startmatchmakingresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  StartMatchmakingRequest
 *
 * @brief  Implements GameLift StartMatchmaking requests.
 *
 * @see    GameLiftClient::startMatchmaking
 */

/**
 * @brief  Constructs a new StartMatchmakingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartMatchmakingRequest::StartMatchmakingRequest(const StartMatchmakingRequest &other)
    : GameLiftRequest(new StartMatchmakingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartMatchmakingRequest object.
 */
StartMatchmakingRequest::StartMatchmakingRequest()
    : GameLiftRequest(new StartMatchmakingRequestPrivate(GameLiftRequest::StartMatchmakingAction, this))
{

}

bool StartMatchmakingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartMatchmakingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartMatchmakingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * StartMatchmakingRequest::response(QNetworkReply * const reply) const
{
    return new StartMatchmakingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartMatchmakingRequestPrivate
 *
 * @brief  Private implementation for StartMatchmakingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchmakingRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public StartMatchmakingRequest instance.
 */
StartMatchmakingRequestPrivate::StartMatchmakingRequestPrivate(
    const GameLiftRequest::Action action, StartMatchmakingRequest * const q)
    : StartMatchmakingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchmakingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartMatchmakingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartMatchmakingRequest instance.
 */
StartMatchmakingRequestPrivate::StartMatchmakingRequestPrivate(
    const StartMatchmakingRequestPrivate &other, StartMatchmakingRequest * const q)
    : StartMatchmakingPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
