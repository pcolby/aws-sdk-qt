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

#include "describefleetportsettingsrequest.h"
#include "describefleetportsettingsrequest_p.h"
#include "describefleetportsettingsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeFleetPortSettingsRequest
 *
 * @brief  Implements GameLift DescribeFleetPortSettings requests.
 *
 * @see    GameLiftClient::describeFleetPortSettings
 */

/**
 * @brief  Constructs a new DescribeFleetPortSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetPortSettingsRequest::DescribeFleetPortSettingsRequest(const DescribeFleetPortSettingsRequest &other)
    : GameLiftRequest(new DescribeFleetPortSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetPortSettingsRequest object.
 */
DescribeFleetPortSettingsRequest::DescribeFleetPortSettingsRequest()
    : GameLiftRequest(new DescribeFleetPortSettingsRequestPrivate(GameLiftRequest::DescribeFleetPortSettingsAction, this))
{

}

bool DescribeFleetPortSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetPortSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetPortSettingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DescribeFleetPortSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetPortSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetPortSettingsRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetPortSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetPortSettingsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeFleetPortSettingsRequest instance.
 */
DescribeFleetPortSettingsRequestPrivate::DescribeFleetPortSettingsRequestPrivate(
    const GameLiftRequest::Action action, DescribeFleetPortSettingsRequest * const q)
    : DescribeFleetPortSettingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetPortSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetPortSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetPortSettingsRequest instance.
 */
DescribeFleetPortSettingsRequestPrivate::DescribeFleetPortSettingsRequestPrivate(
    const DescribeFleetPortSettingsRequestPrivate &other, DescribeFleetPortSettingsRequest * const q)
    : DescribeFleetPortSettingsPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
