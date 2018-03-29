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

#include "createplayersessionsrequest.h"
#include "createplayersessionsrequest_p.h"
#include "createplayersessionsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  CreatePlayerSessionsRequest
 *
 * @brief  Implements GameLift CreatePlayerSessions requests.
 *
 * @see    GameLiftClient::createPlayerSessions
 */

/**
 * @brief  Constructs a new CreatePlayerSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlayerSessionsRequest::CreatePlayerSessionsRequest(const CreatePlayerSessionsRequest &other)
    : GameLiftRequest(new CreatePlayerSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlayerSessionsRequest object.
 */
CreatePlayerSessionsRequest::CreatePlayerSessionsRequest()
    : GameLiftRequest(new CreatePlayerSessionsRequestPrivate(GameLiftRequest::CreatePlayerSessionsAction, this))
{

}

bool CreatePlayerSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlayerSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlayerSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreatePlayerSessionsRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlayerSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlayerSessionsRequestPrivate
 *
 * @brief  Private implementation for CreatePlayerSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreatePlayerSessionsRequest instance.
 */
CreatePlayerSessionsRequestPrivate::CreatePlayerSessionsRequestPrivate(
    const GameLiftRequest::Action action, CreatePlayerSessionsRequest * const q)
    : CreatePlayerSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlayerSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlayerSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlayerSessionsRequest instance.
 */
CreatePlayerSessionsRequestPrivate::CreatePlayerSessionsRequestPrivate(
    const CreatePlayerSessionsRequestPrivate &other, CreatePlayerSessionsRequest * const q)
    : CreatePlayerSessionsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
