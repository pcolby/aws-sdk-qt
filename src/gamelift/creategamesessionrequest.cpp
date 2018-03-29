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

#include "creategamesessionrequest.h"
#include "creategamesessionrequest_p.h"
#include "creategamesessionresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateGameSessionRequest
 *
 * @brief  Implements GameLift CreateGameSession requests.
 *
 * @see    GameLiftClient::createGameSession
 */

/**
 * @brief  Constructs a new CreateGameSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateGameSessionRequest::CreateGameSessionRequest(const CreateGameSessionRequest &other)
    : GameLiftRequest(new CreateGameSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateGameSessionRequest object.
 */
CreateGameSessionRequest::CreateGameSessionRequest()
    : GameLiftRequest(new CreateGameSessionRequestPrivate(GameLiftRequest::CreateGameSessionAction, this))
{

}

bool CreateGameSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateGameSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateGameSessionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGameSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGameSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateGameSessionRequestPrivate
 *
 * @brief  Private implementation for CreateGameSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateGameSessionRequest instance.
 */
CreateGameSessionRequestPrivate::CreateGameSessionRequestPrivate(
    const GameLiftRequest::Action action, CreateGameSessionRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateGameSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateGameSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateGameSessionRequest instance.
 */
CreateGameSessionRequestPrivate::CreateGameSessionRequestPrivate(
    const CreateGameSessionRequestPrivate &other, CreateGameSessionRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
