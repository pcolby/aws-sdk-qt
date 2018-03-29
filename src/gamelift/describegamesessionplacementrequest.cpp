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

#include "describegamesessionplacementrequest.h"
#include "describegamesessionplacementrequest_p.h"
#include "describegamesessionplacementresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionPlacementRequest
 *
 * @brief  Implements GameLift DescribeGameSessionPlacement requests.
 *
 * @see    GameLiftClient::describeGameSessionPlacement
 */

/**
 * @brief  Constructs a new DescribeGameSessionPlacementRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGameSessionPlacementRequest::DescribeGameSessionPlacementRequest(const DescribeGameSessionPlacementRequest &other)
    : GameLiftRequest(new DescribeGameSessionPlacementRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGameSessionPlacementRequest object.
 */
DescribeGameSessionPlacementRequest::DescribeGameSessionPlacementRequest()
    : GameLiftRequest(new DescribeGameSessionPlacementRequestPrivate(GameLiftRequest::DescribeGameSessionPlacementAction, this))
{

}

bool DescribeGameSessionPlacementRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGameSessionPlacementResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGameSessionPlacementResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGameSessionPlacementRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGameSessionPlacementResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGameSessionPlacementRequestPrivate
 *
 * @brief  Private implementation for DescribeGameSessionPlacementRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionPlacementRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeGameSessionPlacementRequest instance.
 */
DescribeGameSessionPlacementRequestPrivate::DescribeGameSessionPlacementRequestPrivate(
    const GameLiftRequest::Action action, DescribeGameSessionPlacementRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionPlacementRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGameSessionPlacementRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGameSessionPlacementRequest instance.
 */
DescribeGameSessionPlacementRequestPrivate::DescribeGameSessionPlacementRequestPrivate(
    const DescribeGameSessionPlacementRequestPrivate &other, DescribeGameSessionPlacementRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
