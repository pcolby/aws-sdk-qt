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

#include "updategamesessionqueuerequest.h"
#include "updategamesessionqueuerequest_p.h"
#include "updategamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateGameSessionQueueRequest
 *
 * @brief  Implements GameLift UpdateGameSessionQueue requests.
 *
 * @see    GameLiftClient::updateGameSessionQueue
 */

/**
 * @brief  Constructs a new UpdateGameSessionQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGameSessionQueueRequest::UpdateGameSessionQueueRequest(const UpdateGameSessionQueueRequest &other)
    : GameLiftRequest(new UpdateGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGameSessionQueueRequest object.
 */
UpdateGameSessionQueueRequest::UpdateGameSessionQueueRequest()
    : GameLiftRequest(new UpdateGameSessionQueueRequestPrivate(GameLiftRequest::UpdateGameSessionQueueAction, this))
{

}

bool UpdateGameSessionQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGameSessionQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGameSessionQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGameSessionQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGameSessionQueueRequestPrivate
 *
 * @brief  Private implementation for UpdateGameSessionQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionQueueRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateGameSessionQueueRequest instance.
 */
UpdateGameSessionQueueRequestPrivate::UpdateGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, UpdateGameSessionQueueRequest * const q)
    : UpdateGameSessionQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGameSessionQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGameSessionQueueRequest instance.
 */
UpdateGameSessionQueueRequestPrivate::UpdateGameSessionQueueRequestPrivate(
    const UpdateGameSessionQueueRequestPrivate &other, UpdateGameSessionQueueRequest * const q)
    : UpdateGameSessionQueuePrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
