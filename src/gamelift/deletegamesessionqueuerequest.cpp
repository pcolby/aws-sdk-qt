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

#include "deletegamesessionqueuerequest.h"
#include "deletegamesessionqueuerequest_p.h"
#include "deletegamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DeleteGameSessionQueueRequest
 *
 * @brief  Implements GameLift DeleteGameSessionQueue requests.
 *
 * @see    GameLiftClient::deleteGameSessionQueue
 */

/**
 * @brief  Constructs a new DeleteGameSessionQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGameSessionQueueResponse::DeleteGameSessionQueueResponse(

/**
 * @brief  Constructs a new DeleteGameSessionQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGameSessionQueueRequest::DeleteGameSessionQueueRequest(const DeleteGameSessionQueueRequest &other)
    : GameLiftRequest(new DeleteGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGameSessionQueueRequest object.
 */
DeleteGameSessionQueueRequest::DeleteGameSessionQueueRequest()
    : GameLiftRequest(new DeleteGameSessionQueueRequestPrivate(GameLiftRequest::DeleteGameSessionQueueAction, this))
{

}

bool DeleteGameSessionQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGameSessionQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGameSessionQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DeleteGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGameSessionQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGameSessionQueueRequestPrivate
 *
 * @brief  Private implementation for DeleteGameSessionQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGameSessionQueueRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DeleteGameSessionQueueRequest instance.
 */
DeleteGameSessionQueueRequestPrivate::DeleteGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, DeleteGameSessionQueueRequest * const q)
    : DeleteGameSessionQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGameSessionQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGameSessionQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGameSessionQueueRequest instance.
 */
DeleteGameSessionQueueRequestPrivate::DeleteGameSessionQueueRequestPrivate(
    const DeleteGameSessionQueueRequestPrivate &other, DeleteGameSessionQueueRequest * const q)
    : DeleteGameSessionQueuePrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
