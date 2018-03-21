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

#include "describefleetutilizationrequest.h"
#include "describefleetutilizationrequest_p.h"
#include "describefleetutilizationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeFleetUtilizationRequest
 *
 * @brief  Implements GameLift DescribeFleetUtilization requests.
 *
 * @see    GameLiftClient::describeFleetUtilization
 */

/**
 * @brief  Constructs a new DescribeFleetUtilizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetUtilizationResponse::DescribeFleetUtilizationResponse(

/**
 * @brief  Constructs a new DescribeFleetUtilizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetUtilizationRequest::DescribeFleetUtilizationRequest(const DescribeFleetUtilizationRequest &other)
    : GameLiftRequest(new DescribeFleetUtilizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetUtilizationRequest object.
 */
DescribeFleetUtilizationRequest::DescribeFleetUtilizationRequest()
    : GameLiftRequest(new DescribeFleetUtilizationRequestPrivate(GameLiftRequest::DescribeFleetUtilizationAction, this))
{

}

bool DescribeFleetUtilizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetUtilizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetUtilizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeFleetUtilizationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetUtilizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetUtilizationRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetUtilizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetUtilizationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeFleetUtilizationRequest instance.
 */
DescribeFleetUtilizationRequestPrivate::DescribeFleetUtilizationRequestPrivate(
    const GameLiftRequest::Action action, DescribeFleetUtilizationRequest * const q)
    : DescribeFleetUtilizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetUtilizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetUtilizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetUtilizationRequest instance.
 */
DescribeFleetUtilizationRequestPrivate::DescribeFleetUtilizationRequestPrivate(
    const DescribeFleetUtilizationRequestPrivate &other, DescribeFleetUtilizationRequest * const q)
    : DescribeFleetUtilizationPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
