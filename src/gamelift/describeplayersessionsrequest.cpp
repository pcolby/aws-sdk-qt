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

#include "describeplayersessionsrequest.h"
#include "describeplayersessionsrequest_p.h"
#include "describeplayersessionsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribePlayerSessionsRequest
 *
 * @brief  Implements GameLift DescribePlayerSessions requests.
 *
 * @see    GameLiftClient::describePlayerSessions
 */

/**
 * @brief  Constructs a new DescribePlayerSessionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePlayerSessionsRequest::DescribePlayerSessionsRequest(const DescribePlayerSessionsRequest &other)
    : GameLiftRequest(new DescribePlayerSessionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePlayerSessionsRequest object.
 */
DescribePlayerSessionsRequest::DescribePlayerSessionsRequest()
    : GameLiftRequest(new DescribePlayerSessionsRequestPrivate(GameLiftRequest::DescribePlayerSessionsAction, this))
{

}

bool DescribePlayerSessionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePlayerSessionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePlayerSessionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribePlayerSessionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePlayerSessionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePlayerSessionsRequestPrivate
 *
 * @brief  Private implementation for DescribePlayerSessionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlayerSessionsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribePlayerSessionsRequest instance.
 */
DescribePlayerSessionsRequestPrivate::DescribePlayerSessionsRequestPrivate(
    const GameLiftRequest::Action action, DescribePlayerSessionsRequest * const q)
    : DescribePlayerSessionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlayerSessionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePlayerSessionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePlayerSessionsRequest instance.
 */
DescribePlayerSessionsRequestPrivate::DescribePlayerSessionsRequestPrivate(
    const DescribePlayerSessionsRequestPrivate &other, DescribePlayerSessionsRequest * const q)
    : DescribePlayerSessionsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
