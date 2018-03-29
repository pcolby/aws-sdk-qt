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

#include "updatefleetcapacityrequest.h"
#include "updatefleetcapacityrequest_p.h"
#include "updatefleetcapacityresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  UpdateFleetCapacityRequest
 *
 * @brief  Implements GameLift UpdateFleetCapacity requests.
 *
 * @see    GameLiftClient::updateFleetCapacity
 */

/**
 * @brief  Constructs a new UpdateFleetCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFleetCapacityRequest::UpdateFleetCapacityRequest(const UpdateFleetCapacityRequest &other)
    : GameLiftRequest(new UpdateFleetCapacityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFleetCapacityRequest object.
 */
UpdateFleetCapacityRequest::UpdateFleetCapacityRequest()
    : GameLiftRequest(new UpdateFleetCapacityRequestPrivate(GameLiftRequest::UpdateFleetCapacityAction, this))
{

}

bool UpdateFleetCapacityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFleetCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFleetCapacityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateFleetCapacityRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFleetCapacityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFleetCapacityRequestPrivate
 *
 * @brief  Private implementation for UpdateFleetCapacityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetCapacityRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateFleetCapacityRequest instance.
 */
UpdateFleetCapacityRequestPrivate::UpdateFleetCapacityRequestPrivate(
    const GameLiftRequest::Action action, UpdateFleetCapacityRequest * const q)
    : UpdateFleetCapacityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFleetCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFleetCapacityRequest instance.
 */
UpdateFleetCapacityRequestPrivate::UpdateFleetCapacityRequestPrivate(
    const UpdateFleetCapacityRequestPrivate &other, UpdateFleetCapacityRequest * const q)
    : UpdateFleetCapacityPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
