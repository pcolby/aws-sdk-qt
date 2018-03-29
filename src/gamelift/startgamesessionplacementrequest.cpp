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

#include "startgamesessionplacementrequest.h"
#include "startgamesessionplacementrequest_p.h"
#include "startgamesessionplacementresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  StartGameSessionPlacementRequest
 *
 * @brief  Implements GameLift StartGameSessionPlacement requests.
 *
 * @see    GameLiftClient::startGameSessionPlacement
 */

/**
 * @brief  Constructs a new StartGameSessionPlacementRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartGameSessionPlacementRequest::StartGameSessionPlacementRequest(const StartGameSessionPlacementRequest &other)
    : GameLiftRequest(new StartGameSessionPlacementRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartGameSessionPlacementRequest object.
 */
StartGameSessionPlacementRequest::StartGameSessionPlacementRequest()
    : GameLiftRequest(new StartGameSessionPlacementRequestPrivate(GameLiftRequest::StartGameSessionPlacementAction, this))
{

}

bool StartGameSessionPlacementRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartGameSessionPlacementResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartGameSessionPlacementResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * StartGameSessionPlacementRequest::response(QNetworkReply * const reply) const
{
    return new StartGameSessionPlacementResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartGameSessionPlacementRequestPrivate
 *
 * @brief  Private implementation for StartGameSessionPlacementRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartGameSessionPlacementRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public StartGameSessionPlacementRequest instance.
 */
StartGameSessionPlacementRequestPrivate::StartGameSessionPlacementRequestPrivate(
    const GameLiftRequest::Action action, StartGameSessionPlacementRequest * const q)
    : StartGameSessionPlacementPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartGameSessionPlacementRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartGameSessionPlacementRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartGameSessionPlacementRequest instance.
 */
StartGameSessionPlacementRequestPrivate::StartGameSessionPlacementRequestPrivate(
    const StartGameSessionPlacementRequestPrivate &other, StartGameSessionPlacementRequest * const q)
    : StartGameSessionPlacementPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
