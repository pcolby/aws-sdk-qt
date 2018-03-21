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

#include "searchgamesessionsrequest.h"
#include "searchgamesessionsrequest_p.h"
#include "searchgamesessionsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  SearchGameSessionsRequest
 *
 * @brief  Implements GameLift SearchGameSessions requests.
 *
 * @see    GameLiftClient::searchGameSessions
 */

/**
 * @brief  Constructs a new SearchGameSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchGameSessionsRequest::SearchGameSessionsRequest(const SearchGameSessionsRequest &other)
    : GameLiftRequest(new SearchGameSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchGameSessionsRequest object.
 */
SearchGameSessionsRequest::SearchGameSessionsRequest()
    : GameLiftRequest(new SearchGameSessionsRequestPrivate(GameLiftRequest::SearchGameSessionsAction, this))
{

}

bool SearchGameSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchGameSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchGameSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * SearchGameSessionsRequest::response(QNetworkReply * const reply) const
{
    return new SearchGameSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchGameSessionsRequestPrivate
 *
 * @brief  Private implementation for SearchGameSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchGameSessionsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public SearchGameSessionsRequest instance.
 */
SearchGameSessionsRequestPrivate::SearchGameSessionsRequestPrivate(
    const GameLiftRequest::Action action, SearchGameSessionsRequest * const q)
    : SearchGameSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchGameSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchGameSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchGameSessionsRequest instance.
 */
SearchGameSessionsRequestPrivate::SearchGameSessionsRequestPrivate(
    const SearchGameSessionsRequestPrivate &other, SearchGameSessionsRequest * const q)
    : SearchGameSessionsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
