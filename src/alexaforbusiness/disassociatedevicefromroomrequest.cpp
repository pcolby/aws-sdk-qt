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

#include "disassociatedevicefromroomrequest.h"
#include "disassociatedevicefromroomrequest_p.h"
#include "disassociatedevicefromroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DisassociateDeviceFromRoomRequest
 *
 * @brief  Implements AlexaForBusiness DisassociateDeviceFromRoom requests.
 *
 * @see    AlexaForBusinessClient::disassociateDeviceFromRoom
 */

/**
 * @brief  Constructs a new DisassociateDeviceFromRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateDeviceFromRoomResponse::DisassociateDeviceFromRoomResponse(

/**
 * @brief  Constructs a new DisassociateDeviceFromRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateDeviceFromRoomRequest::DisassociateDeviceFromRoomRequest(const DisassociateDeviceFromRoomRequest &other)
    : AlexaForBusinessRequest(new DisassociateDeviceFromRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateDeviceFromRoomRequest object.
 */
DisassociateDeviceFromRoomRequest::DisassociateDeviceFromRoomRequest()
    : AlexaForBusinessRequest(new DisassociateDeviceFromRoomRequestPrivate(AlexaForBusinessRequest::DisassociateDeviceFromRoomAction, this))
{

}

bool DisassociateDeviceFromRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateDeviceFromRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateDeviceFromRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * DisassociateDeviceFromRoomRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDeviceFromRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateDeviceFromRoomRequestPrivate
 *
 * @brief  Private implementation for DisassociateDeviceFromRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDeviceFromRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DisassociateDeviceFromRoomRequest instance.
 */
DisassociateDeviceFromRoomRequestPrivate::DisassociateDeviceFromRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateDeviceFromRoomRequest * const q)
    : DisassociateDeviceFromRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateDeviceFromRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDeviceFromRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateDeviceFromRoomRequest instance.
 */
DisassociateDeviceFromRoomRequestPrivate::DisassociateDeviceFromRoomRequestPrivate(
    const DisassociateDeviceFromRoomRequestPrivate &other, DisassociateDeviceFromRoomRequest * const q)
    : DisassociateDeviceFromRoomPrivate(other, q)
{

}
