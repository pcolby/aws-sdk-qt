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

#include "getgamesessionlogurlrequest.h"
#include "getgamesessionlogurlrequest_p.h"
#include "getgamesessionlogurlresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  GetGameSessionLogUrlRequest
 *
 * @brief  Implements GameLift GetGameSessionLogUrl requests.
 *
 * @see    GameLiftClient::getGameSessionLogUrl
 */

/**
 * @brief  Constructs a new GetGameSessionLogUrlRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGameSessionLogUrlRequest::GetGameSessionLogUrlRequest(const GetGameSessionLogUrlRequest &other)
    : GameLiftRequest(new GetGameSessionLogUrlRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGameSessionLogUrlRequest object.
 */
GetGameSessionLogUrlRequest::GetGameSessionLogUrlRequest()
    : GameLiftRequest(new GetGameSessionLogUrlRequestPrivate(GameLiftRequest::GetGameSessionLogUrlAction, this))
{

}

bool GetGameSessionLogUrlRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGameSessionLogUrlResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGameSessionLogUrlResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGameSessionLogUrlRequest::response(QNetworkReply * const reply) const
{
    return new GetGameSessionLogUrlResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGameSessionLogUrlRequestPrivate
 *
 * @brief  Private implementation for GetGameSessionLogUrlRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGameSessionLogUrlRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public GetGameSessionLogUrlRequest instance.
 */
GetGameSessionLogUrlRequestPrivate::GetGameSessionLogUrlRequestPrivate(
    const GameLiftRequest::Action action, GetGameSessionLogUrlRequest * const q)
    : GetGameSessionLogUrlPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGameSessionLogUrlRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGameSessionLogUrlRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGameSessionLogUrlRequest instance.
 */
GetGameSessionLogUrlRequestPrivate::GetGameSessionLogUrlRequestPrivate(
    const GetGameSessionLogUrlRequestPrivate &other, GetGameSessionLogUrlRequest * const q)
    : GetGameSessionLogUrlPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
