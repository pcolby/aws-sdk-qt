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

#include "describegamesessionqueuesrequest.h"
#include "describegamesessionqueuesrequest_p.h"
#include "describegamesessionqueuesresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionQueuesRequest
 *
 * @brief  Implements GameLift DescribeGameSessionQueues requests.
 *
 * @see    GameLiftClient::describeGameSessionQueues
 */

/**
 * @brief  Constructs a new DescribeGameSessionQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGameSessionQueuesRequest::DescribeGameSessionQueuesRequest(const DescribeGameSessionQueuesRequest &other)
    : GameLiftRequest(new DescribeGameSessionQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGameSessionQueuesRequest object.
 */
DescribeGameSessionQueuesRequest::DescribeGameSessionQueuesRequest()
    : GameLiftRequest(new DescribeGameSessionQueuesRequestPrivate(GameLiftRequest::DescribeGameSessionQueuesAction, this))
{

}

bool DescribeGameSessionQueuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGameSessionQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGameSessionQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeGameSessionQueuesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGameSessionQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGameSessionQueuesRequestPrivate
 *
 * @brief  Private implementation for DescribeGameSessionQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionQueuesRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeGameSessionQueuesRequest instance.
 */
DescribeGameSessionQueuesRequestPrivate::DescribeGameSessionQueuesRequestPrivate(
    const GameLiftRequest::Action action, DescribeGameSessionQueuesRequest * const q)
    : DescribeGameSessionQueuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGameSessionQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGameSessionQueuesRequest instance.
 */
DescribeGameSessionQueuesRequestPrivate::DescribeGameSessionQueuesRequestPrivate(
    const DescribeGameSessionQueuesRequestPrivate &other, DescribeGameSessionQueuesRequest * const q)
    : DescribeGameSessionQueuesPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
