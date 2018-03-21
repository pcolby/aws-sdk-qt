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

#include "createplayersessionrequest.h"
#include "createplayersessionrequest_p.h"
#include "createplayersessionresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreatePlayerSessionRequest
 *
 * @brief  Implements GameLift CreatePlayerSession requests.
 *
 * @see    GameLiftClient::createPlayerSession
 */

/**
 * @brief  Constructs a new CreatePlayerSessionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlayerSessionRequest::CreatePlayerSessionRequest(const CreatePlayerSessionRequest &other)
    : GameLiftRequest(new CreatePlayerSessionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlayerSessionRequest object.
 */
CreatePlayerSessionRequest::CreatePlayerSessionRequest()
    : GameLiftRequest(new CreatePlayerSessionRequestPrivate(GameLiftRequest::CreatePlayerSessionAction, this))
{

}

bool CreatePlayerSessionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlayerSessionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlayerSessionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreatePlayerSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlayerSessionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlayerSessionRequestPrivate
 *
 * @brief  Private implementation for CreatePlayerSessionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreatePlayerSessionRequest instance.
 */
CreatePlayerSessionRequestPrivate::CreatePlayerSessionRequestPrivate(
    const GameLiftRequest::Action action, CreatePlayerSessionRequest * const q)
    : CreatePlayerSessionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlayerSessionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlayerSessionRequest instance.
 */
CreatePlayerSessionRequestPrivate::CreatePlayerSessionRequestPrivate(
    const CreatePlayerSessionRequestPrivate &other, CreatePlayerSessionRequest * const q)
    : CreatePlayerSessionPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
