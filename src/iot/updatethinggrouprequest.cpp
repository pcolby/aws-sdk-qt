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

#include "updatethinggrouprequest.h"
#include "updatethinggrouprequest_p.h"
#include "updatethinggroupresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateThingGroupRequest
 *
 * @brief  Implements IoT UpdateThingGroup requests.
 *
 * @see    IoTClient::updateThingGroup
 */

/**
 * @brief  Constructs a new UpdateThingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateThingGroupRequest::UpdateThingGroupRequest(const UpdateThingGroupRequest &other)
    : IoTRequest(new UpdateThingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateThingGroupRequest object.
 */
UpdateThingGroupRequest::UpdateThingGroupRequest()
    : IoTRequest(new UpdateThingGroupRequestPrivate(IoTRequest::UpdateThingGroupAction, this))
{

}

bool UpdateThingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateThingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateThingGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateThingGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateThingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateThingGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateThingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateThingGroupRequest instance.
 */
UpdateThingGroupRequestPrivate::UpdateThingGroupRequestPrivate(
    const IoTRequest::Action action, UpdateThingGroupRequest * const q)
    : UpdateThingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateThingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateThingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateThingGroupRequest instance.
 */
UpdateThingGroupRequestPrivate::UpdateThingGroupRequestPrivate(
    const UpdateThingGroupRequestPrivate &other, UpdateThingGroupRequest * const q)
    : UpdateThingGroupPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
