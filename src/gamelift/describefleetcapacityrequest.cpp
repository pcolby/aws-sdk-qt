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

#include "describefleetcapacityrequest.h"
#include "describefleetcapacityrequest_p.h"
#include "describefleetcapacityresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeFleetCapacityRequest
 *
 * @brief  Implements GameLift DescribeFleetCapacity requests.
 *
 * @see    GameLiftClient::describeFleetCapacity
 */

/**
 * @brief  Constructs a new DescribeFleetCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetCapacityResponse::DescribeFleetCapacityResponse(

/**
 * @brief  Constructs a new DescribeFleetCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetCapacityRequest::DescribeFleetCapacityRequest(const DescribeFleetCapacityRequest &other)
    : GameLiftRequest(new DescribeFleetCapacityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetCapacityRequest object.
 */
DescribeFleetCapacityRequest::DescribeFleetCapacityRequest()
    : GameLiftRequest(new DescribeFleetCapacityRequestPrivate(GameLiftRequest::DescribeFleetCapacityAction, this))
{

}

bool DescribeFleetCapacityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetCapacityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeFleetCapacityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetCapacityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetCapacityRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetCapacityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetCapacityRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeFleetCapacityRequest instance.
 */
DescribeFleetCapacityRequestPrivate::DescribeFleetCapacityRequestPrivate(
    const GameLiftRequest::Action action, DescribeFleetCapacityRequest * const q)
    : DescribeFleetCapacityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetCapacityRequest instance.
 */
DescribeFleetCapacityRequestPrivate::DescribeFleetCapacityRequestPrivate(
    const DescribeFleetCapacityRequestPrivate &other, DescribeFleetCapacityRequest * const q)
    : DescribeFleetCapacityPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
