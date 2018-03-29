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

#include "updategamesessionrequest.h"
#include "updategamesessionrequest_p.h"
#include "updategamesessionresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateGameSessionRequest
 *
 * @brief  Implements GameLift UpdateGameSession requests.
 *
 * @see    GameLiftClient::updateGameSession
 */

/**
 * @brief  Constructs a new UpdateGameSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGameSessionRequest::UpdateGameSessionRequest(const UpdateGameSessionRequest &other)
    : GameLiftRequest(new UpdateGameSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGameSessionRequest object.
 */
UpdateGameSessionRequest::UpdateGameSessionRequest()
    : GameLiftRequest(new UpdateGameSessionRequestPrivate(GameLiftRequest::UpdateGameSessionAction, this))
{

}

bool UpdateGameSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGameSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGameSessionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateGameSessionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGameSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGameSessionRequestPrivate
 *
 * @brief  Private implementation for UpdateGameSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateGameSessionRequest instance.
 */
UpdateGameSessionRequestPrivate::UpdateGameSessionRequestPrivate(
    const GameLiftRequest::Action action, UpdateGameSessionRequest * const q)
    : UpdateGameSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGameSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGameSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGameSessionRequest instance.
 */
UpdateGameSessionRequestPrivate::UpdateGameSessionRequestPrivate(
    const UpdateGameSessionRequestPrivate &other, UpdateGameSessionRequest * const q)
    : UpdateGameSessionPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
