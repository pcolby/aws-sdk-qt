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

#include "stopgamesessionplacementrequest.h"
#include "stopgamesessionplacementrequest_p.h"
#include "stopgamesessionplacementresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  StopGameSessionPlacementRequest
 *
 * @brief  Implements GameLift StopGameSessionPlacement requests.
 *
 * @see    GameLiftClient::stopGameSessionPlacement
 */

/**
 * @brief  Constructs a new StopGameSessionPlacementRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopGameSessionPlacementRequest::StopGameSessionPlacementRequest(const StopGameSessionPlacementRequest &other)
    : GameLiftRequest(new StopGameSessionPlacementRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopGameSessionPlacementRequest object.
 */
StopGameSessionPlacementRequest::StopGameSessionPlacementRequest()
    : GameLiftRequest(new StopGameSessionPlacementRequestPrivate(GameLiftRequest::StopGameSessionPlacementAction, this))
{

}

bool StopGameSessionPlacementRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopGameSessionPlacementResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopGameSessionPlacementResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * StopGameSessionPlacementRequest::response(QNetworkReply * const reply) const
{
    return new StopGameSessionPlacementResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopGameSessionPlacementRequestPrivate
 *
 * @brief  Private implementation for StopGameSessionPlacementRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopGameSessionPlacementRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public StopGameSessionPlacementRequest instance.
 */
StopGameSessionPlacementRequestPrivate::StopGameSessionPlacementRequestPrivate(
    const GameLiftRequest::Action action, StopGameSessionPlacementRequest * const q)
    : StopGameSessionPlacementPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopGameSessionPlacementRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopGameSessionPlacementRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopGameSessionPlacementRequest instance.
 */
StopGameSessionPlacementRequestPrivate::StopGameSessionPlacementRequestPrivate(
    const StopGameSessionPlacementRequestPrivate &other, StopGameSessionPlacementRequest * const q)
    : StopGameSessionPlacementPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
