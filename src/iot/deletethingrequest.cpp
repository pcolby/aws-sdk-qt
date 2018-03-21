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

#include "deletethingrequest.h"
#include "deletethingrequest_p.h"
#include "deletethingresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeleteThingRequest
 *
 * @brief  Implements IoT DeleteThing requests.
 *
 * @see    IoTClient::deleteThing
 */

/**
 * @brief  Constructs a new DeleteThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteThingRequest::DeleteThingRequest(const DeleteThingRequest &other)
    : IoTRequest(new DeleteThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteThingRequest object.
 */
DeleteThingRequest::DeleteThingRequest()
    : IoTRequest(new DeleteThingRequestPrivate(IoTRequest::DeleteThingAction, this))
{

}

bool DeleteThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteThingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteThingRequestPrivate
 *
 * @brief  Private implementation for DeleteThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteThingRequest instance.
 */
DeleteThingRequestPrivate::DeleteThingRequestPrivate(
    const IoTRequest::Action action, DeleteThingRequest * const q)
    : DeleteThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteThingRequest instance.
 */
DeleteThingRequestPrivate::DeleteThingRequestPrivate(
    const DeleteThingRequestPrivate &other, DeleteThingRequest * const q)
    : DeleteThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
