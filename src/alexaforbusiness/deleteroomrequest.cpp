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

#include "deleteroomrequest.h"
#include "deleteroomrequest_p.h"
#include "deleteroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DeleteRoomRequest
 *
 * @brief  Implements AlexaForBusiness DeleteRoom requests.
 *
 * @see    AlexaForBusinessClient::deleteRoom
 */

/**
 * @brief  Constructs a new DeleteRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRoomRequest::DeleteRoomRequest(const DeleteRoomRequest &other)
    : AlexaForBusinessRequest(new DeleteRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRoomRequest object.
 */
DeleteRoomRequest::DeleteRoomRequest()
    : AlexaForBusinessRequest(new DeleteRoomRequestPrivate(AlexaForBusinessRequest::DeleteRoomAction, this))
{

}

bool DeleteRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * DeleteRoomRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRoomRequestPrivate
 *
 * @brief  Private implementation for DeleteRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DeleteRoomRequest instance.
 */
DeleteRoomRequestPrivate::DeleteRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteRoomRequest * const q)
    : DeleteRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRoomRequest instance.
 */
DeleteRoomRequestPrivate::DeleteRoomRequestPrivate(
    const DeleteRoomRequestPrivate &other, DeleteRoomRequest * const q)
    : DeleteRoomPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
