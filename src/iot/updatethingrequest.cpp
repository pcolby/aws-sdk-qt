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

#include "updatethingrequest.h"
#include "updatethingrequest_p.h"
#include "updatethingresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateThingRequest
 *
 * @brief  Implements IoT UpdateThing requests.
 *
 * @see    IoTClient::updateThing
 */

/**
 * @brief  Constructs a new UpdateThingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateThingResponse::UpdateThingResponse(

/**
 * @brief  Constructs a new UpdateThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateThingRequest::UpdateThingRequest(const UpdateThingRequest &other)
    : IoTRequest(new UpdateThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateThingRequest object.
 */
UpdateThingRequest::UpdateThingRequest()
    : IoTRequest(new UpdateThingRequestPrivate(IoTRequest::UpdateThingAction, this))
{

}

bool UpdateThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateThingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateThingRequestPrivate
 *
 * @brief  Private implementation for UpdateThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateThingRequest instance.
 */
UpdateThingRequestPrivate::UpdateThingRequestPrivate(
    const IoTRequest::Action action, UpdateThingRequest * const q)
    : UpdateThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateThingRequest instance.
 */
UpdateThingRequestPrivate::UpdateThingRequestPrivate(
    const UpdateThingRequestPrivate &other, UpdateThingRequest * const q)
    : UpdateThingPrivate(other, q)
{

}
