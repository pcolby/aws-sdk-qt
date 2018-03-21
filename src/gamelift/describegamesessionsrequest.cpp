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

#include "describegamesessionsrequest.h"
#include "describegamesessionsrequest_p.h"
#include "describegamesessionsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeGameSessionsRequest
 *
 * @brief  Implements GameLift DescribeGameSessions requests.
 *
 * @see    GameLiftClient::describeGameSessions
 */

/**
 * @brief  Constructs a new DescribeGameSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGameSessionsRequest::DescribeGameSessionsRequest(const DescribeGameSessionsRequest &other)
    : GameLiftRequest(new DescribeGameSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGameSessionsRequest object.
 */
DescribeGameSessionsRequest::DescribeGameSessionsRequest()
    : GameLiftRequest(new DescribeGameSessionsRequestPrivate(GameLiftRequest::DescribeGameSessionsAction, this))
{

}

bool DescribeGameSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGameSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGameSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeGameSessionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGameSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGameSessionsRequestPrivate
 *
 * @brief  Private implementation for DescribeGameSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeGameSessionsRequest instance.
 */
DescribeGameSessionsRequestPrivate::DescribeGameSessionsRequestPrivate(
    const GameLiftRequest::Action action, DescribeGameSessionsRequest * const q)
    : DescribeGameSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGameSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGameSessionsRequest instance.
 */
DescribeGameSessionsRequestPrivate::DescribeGameSessionsRequestPrivate(
    const DescribeGameSessionsRequestPrivate &other, DescribeGameSessionsRequest * const q)
    : DescribeGameSessionsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
