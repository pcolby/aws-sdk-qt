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

#include "updatethinggroupsforthingrequest.h"
#include "updatethinggroupsforthingrequest_p.h"
#include "updatethinggroupsforthingresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateThingGroupsForThingRequest
 *
 * @brief  Implements IoT UpdateThingGroupsForThing requests.
 *
 * @see    IoTClient::updateThingGroupsForThing
 */

/**
 * @brief  Constructs a new UpdateThingGroupsForThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateThingGroupsForThingRequest::UpdateThingGroupsForThingRequest(const UpdateThingGroupsForThingRequest &other)
    : IoTRequest(new UpdateThingGroupsForThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateThingGroupsForThingRequest object.
 */
UpdateThingGroupsForThingRequest::UpdateThingGroupsForThingRequest()
    : IoTRequest(new UpdateThingGroupsForThingRequestPrivate(IoTRequest::UpdateThingGroupsForThingAction, this))
{

}

bool UpdateThingGroupsForThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateThingGroupsForThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateThingGroupsForThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateThingGroupsForThingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingGroupsForThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateThingGroupsForThingRequestPrivate
 *
 * @brief  Private implementation for UpdateThingGroupsForThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupsForThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateThingGroupsForThingRequest instance.
 */
UpdateThingGroupsForThingRequestPrivate::UpdateThingGroupsForThingRequestPrivate(
    const IoTRequest::Action action, UpdateThingGroupsForThingRequest * const q)
    : UpdateThingGroupsForThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupsForThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingGroupsForThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateThingGroupsForThingRequest instance.
 */
UpdateThingGroupsForThingRequestPrivate::UpdateThingGroupsForThingRequestPrivate(
    const UpdateThingGroupsForThingRequestPrivate &other, UpdateThingGroupsForThingRequest * const q)
    : UpdateThingGroupsForThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
