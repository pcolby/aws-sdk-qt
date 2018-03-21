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

#include "updateroomrequest.h"
#include "updateroomrequest_p.h"
#include "updateroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  UpdateRoomRequest
 *
 * @brief  Implements AlexaForBusiness UpdateRoom requests.
 *
 * @see    AlexaForBusinessClient::updateRoom
 */

/**
 * @brief  Constructs a new UpdateRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRoomRequest::UpdateRoomRequest(const UpdateRoomRequest &other)
    : AlexaForBusinessRequest(new UpdateRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRoomRequest object.
 */
UpdateRoomRequest::UpdateRoomRequest()
    : AlexaForBusinessRequest(new UpdateRoomRequestPrivate(AlexaForBusinessRequest::UpdateRoomAction, this))
{

}

bool UpdateRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * UpdateRoomRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRoomRequestPrivate
 *
 * @brief  Private implementation for UpdateRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public UpdateRoomRequest instance.
 */
UpdateRoomRequestPrivate::UpdateRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateRoomRequest * const q)
    : UpdateRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRoomRequest instance.
 */
UpdateRoomRequestPrivate::UpdateRoomRequestPrivate(
    const UpdateRoomRequestPrivate &other, UpdateRoomRequest * const q)
    : UpdateRoomPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
