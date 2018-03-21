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

#include "describematchmakingconfigurationsrequest.h"
#include "describematchmakingconfigurationsrequest_p.h"
#include "describematchmakingconfigurationsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeMatchmakingConfigurationsRequest
 *
 * @brief  Implements GameLift DescribeMatchmakingConfigurations requests.
 *
 * @see    GameLiftClient::describeMatchmakingConfigurations
 */

/**
 * @brief  Constructs a new DescribeMatchmakingConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMatchmakingConfigurationsResponse::DescribeMatchmakingConfigurationsResponse(

/**
 * @brief  Constructs a new DescribeMatchmakingConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMatchmakingConfigurationsRequest::DescribeMatchmakingConfigurationsRequest(const DescribeMatchmakingConfigurationsRequest &other)
    : GameLiftRequest(new DescribeMatchmakingConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMatchmakingConfigurationsRequest object.
 */
DescribeMatchmakingConfigurationsRequest::DescribeMatchmakingConfigurationsRequest()
    : GameLiftRequest(new DescribeMatchmakingConfigurationsRequestPrivate(GameLiftRequest::DescribeMatchmakingConfigurationsAction, this))
{

}

bool DescribeMatchmakingConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMatchmakingConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMatchmakingConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeMatchmakingConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMatchmakingConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingConfigurationsRequestPrivate
 *
 * @brief  Private implementation for DescribeMatchmakingConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingConfigurationsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeMatchmakingConfigurationsRequest instance.
 */
DescribeMatchmakingConfigurationsRequestPrivate::DescribeMatchmakingConfigurationsRequestPrivate(
    const GameLiftRequest::Action action, DescribeMatchmakingConfigurationsRequest * const q)
    : DescribeMatchmakingConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMatchmakingConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMatchmakingConfigurationsRequest instance.
 */
DescribeMatchmakingConfigurationsRequestPrivate::DescribeMatchmakingConfigurationsRequestPrivate(
    const DescribeMatchmakingConfigurationsRequestPrivate &other, DescribeMatchmakingConfigurationsRequest * const q)
    : DescribeMatchmakingConfigurationsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
