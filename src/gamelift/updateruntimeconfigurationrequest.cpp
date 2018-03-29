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

#include "updateruntimeconfigurationrequest.h"
#include "updateruntimeconfigurationrequest_p.h"
#include "updateruntimeconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateRuntimeConfigurationRequest
 *
 * @brief  Implements GameLift UpdateRuntimeConfiguration requests.
 *
 * @see    GameLiftClient::updateRuntimeConfiguration
 */

/**
 * @brief  Constructs a new UpdateRuntimeConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRuntimeConfigurationRequest::UpdateRuntimeConfigurationRequest(const UpdateRuntimeConfigurationRequest &other)
    : GameLiftRequest(new UpdateRuntimeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRuntimeConfigurationRequest object.
 */
UpdateRuntimeConfigurationRequest::UpdateRuntimeConfigurationRequest()
    : GameLiftRequest(new UpdateRuntimeConfigurationRequestPrivate(GameLiftRequest::UpdateRuntimeConfigurationAction, this))
{

}

bool UpdateRuntimeConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRuntimeConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRuntimeConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateRuntimeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRuntimeConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRuntimeConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateRuntimeConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuntimeConfigurationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateRuntimeConfigurationRequest instance.
 */
UpdateRuntimeConfigurationRequestPrivate::UpdateRuntimeConfigurationRequestPrivate(
    const GameLiftRequest::Action action, UpdateRuntimeConfigurationRequest * const q)
    : UpdateRuntimeConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRuntimeConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRuntimeConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRuntimeConfigurationRequest instance.
 */
UpdateRuntimeConfigurationRequestPrivate::UpdateRuntimeConfigurationRequestPrivate(
    const UpdateRuntimeConfigurationRequestPrivate &other, UpdateRuntimeConfigurationRequest * const q)
    : UpdateRuntimeConfigurationPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
