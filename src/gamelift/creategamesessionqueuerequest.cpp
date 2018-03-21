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

#include "creategamesessionqueuerequest.h"
#include "creategamesessionqueuerequest_p.h"
#include "creategamesessionqueueresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreateGameSessionQueueRequest
 *
 * @brief  Implements GameLift CreateGameSessionQueue requests.
 *
 * @see    GameLiftClient::createGameSessionQueue
 */

/**
 * @brief  Constructs a new CreateGameSessionQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGameSessionQueueResponse::CreateGameSessionQueueResponse(

/**
 * @brief  Constructs a new CreateGameSessionQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest(const CreateGameSessionQueueRequest &other)
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGameSessionQueueRequest object.
 */
CreateGameSessionQueueRequest::CreateGameSessionQueueRequest()
    : GameLiftRequest(new CreateGameSessionQueueRequestPrivate(GameLiftRequest::CreateGameSessionQueueAction, this))
{

}

bool CreateGameSessionQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGameSessionQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGameSessionQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateGameSessionQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateGameSessionQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGameSessionQueueRequestPrivate
 *
 * @brief  Private implementation for CreateGameSessionQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionQueueRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateGameSessionQueueRequest instance.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const GameLiftRequest::Action action, CreateGameSessionQueueRequest * const q)
    : CreateGameSessionQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGameSessionQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGameSessionQueueRequest instance.
 */
CreateGameSessionQueueRequestPrivate::CreateGameSessionQueueRequestPrivate(
    const CreateGameSessionQueueRequestPrivate &other, CreateGameSessionQueueRequest * const q)
    : CreateGameSessionQueuePrivate(other, q)
{

}
