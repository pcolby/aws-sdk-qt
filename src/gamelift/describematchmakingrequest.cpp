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

#include "describematchmakingrequest.h"
#include "describematchmakingrequest_p.h"
#include "describematchmakingresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeMatchmakingRequest
 *
 * @brief  Implements GameLift DescribeMatchmaking requests.
 *
 * @see    GameLiftClient::describeMatchmaking
 */

/**
 * @brief  Constructs a new DescribeMatchmakingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMatchmakingResponse::DescribeMatchmakingResponse(

/**
 * @brief  Constructs a new DescribeMatchmakingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMatchmakingRequest::DescribeMatchmakingRequest(const DescribeMatchmakingRequest &other)
    : GameLiftRequest(new DescribeMatchmakingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMatchmakingRequest object.
 */
DescribeMatchmakingRequest::DescribeMatchmakingRequest()
    : GameLiftRequest(new DescribeMatchmakingRequestPrivate(GameLiftRequest::DescribeMatchmakingAction, this))
{

}

bool DescribeMatchmakingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMatchmakingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMatchmakingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeMatchmakingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMatchmakingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingRequestPrivate
 *
 * @brief  Private implementation for DescribeMatchmakingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeMatchmakingRequest instance.
 */
DescribeMatchmakingRequestPrivate::DescribeMatchmakingRequestPrivate(
    const GameLiftRequest::Action action, DescribeMatchmakingRequest * const q)
    : DescribeMatchmakingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMatchmakingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMatchmakingRequest instance.
 */
DescribeMatchmakingRequestPrivate::DescribeMatchmakingRequestPrivate(
    const DescribeMatchmakingRequestPrivate &other, DescribeMatchmakingRequest * const q)
    : DescribeMatchmakingPrivate(other, q)
{

}
