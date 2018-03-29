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

#include "describefleeteventsrequest.h"
#include "describefleeteventsrequest_p.h"
#include "describefleeteventsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeFleetEventsRequest
 *
 * @brief  Implements GameLift DescribeFleetEvents requests.
 *
 * @see    GameLiftClient::describeFleetEvents
 */

/**
 * @brief  Constructs a new DescribeFleetEventsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetEventsRequest::DescribeFleetEventsRequest(const DescribeFleetEventsRequest &other)
    : GameLiftRequest(new DescribeFleetEventsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetEventsRequest object.
 */
DescribeFleetEventsRequest::DescribeFleetEventsRequest()
    : GameLiftRequest(new DescribeFleetEventsRequestPrivate(GameLiftRequest::DescribeFleetEventsAction, this))
{

}

bool DescribeFleetEventsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetEventsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetEventsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetEventsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetEventsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetEventsRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetEventsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetEventsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeFleetEventsRequest instance.
 */
DescribeFleetEventsRequestPrivate::DescribeFleetEventsRequestPrivate(
    const GameLiftRequest::Action action, DescribeFleetEventsRequest * const q)
    : DescribeFleetEventsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetEventsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetEventsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetEventsRequest instance.
 */
DescribeFleetEventsRequestPrivate::DescribeFleetEventsRequestPrivate(
    const DescribeFleetEventsRequestPrivate &other, DescribeFleetEventsRequest * const q)
    : DescribeFleetEventsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
