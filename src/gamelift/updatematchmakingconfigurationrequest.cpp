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

#include "updatematchmakingconfigurationrequest.h"
#include "updatematchmakingconfigurationrequest_p.h"
#include "updatematchmakingconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateMatchmakingConfigurationRequest
 *
 * @brief  Implements GameLift UpdateMatchmakingConfiguration requests.
 *
 * @see    GameLiftClient::updateMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new UpdateMatchmakingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMatchmakingConfigurationRequest::UpdateMatchmakingConfigurationRequest(const UpdateMatchmakingConfigurationRequest &other)
    : GameLiftRequest(new UpdateMatchmakingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMatchmakingConfigurationRequest object.
 */
UpdateMatchmakingConfigurationRequest::UpdateMatchmakingConfigurationRequest()
    : GameLiftRequest(new UpdateMatchmakingConfigurationRequestPrivate(GameLiftRequest::UpdateMatchmakingConfigurationAction, this))
{

}

bool UpdateMatchmakingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMatchmakingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMatchmakingConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateMatchmakingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMatchmakingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMatchmakingConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateMatchmakingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMatchmakingConfigurationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateMatchmakingConfigurationRequest instance.
 */
UpdateMatchmakingConfigurationRequestPrivate::UpdateMatchmakingConfigurationRequestPrivate(
    const GameLiftRequest::Action action, UpdateMatchmakingConfigurationRequest * const q)
    : UpdateMatchmakingConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMatchmakingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMatchmakingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMatchmakingConfigurationRequest instance.
 */
UpdateMatchmakingConfigurationRequestPrivate::UpdateMatchmakingConfigurationRequestPrivate(
    const UpdateMatchmakingConfigurationRequestPrivate &other, UpdateMatchmakingConfigurationRequest * const q)
    : UpdateMatchmakingConfigurationPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
