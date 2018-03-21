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

#include "updatefleetattributesrequest.h"
#include "updatefleetattributesrequest_p.h"
#include "updatefleetattributesresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  UpdateFleetAttributesRequest
 *
 * @brief  Implements GameLift UpdateFleetAttributes requests.
 *
 * @see    GameLiftClient::updateFleetAttributes
 */

/**
 * @brief  Constructs a new UpdateFleetAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFleetAttributesRequest::UpdateFleetAttributesRequest(const UpdateFleetAttributesRequest &other)
    : GameLiftRequest(new UpdateFleetAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFleetAttributesRequest object.
 */
UpdateFleetAttributesRequest::UpdateFleetAttributesRequest()
    : GameLiftRequest(new UpdateFleetAttributesRequestPrivate(GameLiftRequest::UpdateFleetAttributesAction, this))
{

}

bool UpdateFleetAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFleetAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFleetAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * UpdateFleetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFleetAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFleetAttributesRequestPrivate
 *
 * @brief  Private implementation for UpdateFleetAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetAttributesRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public UpdateFleetAttributesRequest instance.
 */
UpdateFleetAttributesRequestPrivate::UpdateFleetAttributesRequestPrivate(
    const GameLiftRequest::Action action, UpdateFleetAttributesRequest * const q)
    : UpdateFleetAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFleetAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFleetAttributesRequest instance.
 */
UpdateFleetAttributesRequestPrivate::UpdateFleetAttributesRequestPrivate(
    const UpdateFleetAttributesRequestPrivate &other, UpdateFleetAttributesRequest * const q)
    : UpdateFleetAttributesPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
