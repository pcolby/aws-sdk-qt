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

#include "describeinstancesrequest.h"
#include "describeinstancesrequest_p.h"
#include "describeinstancesresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeInstancesRequest
 *
 * @brief  Implements GameLift DescribeInstances requests.
 *
 * @see    GameLiftClient::describeInstances
 */

/**
 * @brief  Constructs a new DescribeInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstancesRequest::DescribeInstancesRequest(const DescribeInstancesRequest &other)
    : GameLiftRequest(new DescribeInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstancesRequest object.
 */
DescribeInstancesRequest::DescribeInstancesRequest()
    : GameLiftRequest(new DescribeInstancesRequestPrivate(GameLiftRequest::DescribeInstancesAction, this))
{

}

bool DescribeInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeInstancesRequest instance.
 */
DescribeInstancesRequestPrivate::DescribeInstancesRequestPrivate(
    const GameLiftRequest::Action action, DescribeInstancesRequest * const q)
    : DescribeInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstancesRequest instance.
 */
DescribeInstancesRequestPrivate::DescribeInstancesRequestPrivate(
    const DescribeInstancesRequestPrivate &other, DescribeInstancesRequest * const q)
    : DescribeInstancesPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
