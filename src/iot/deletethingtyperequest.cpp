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

#include "deletethingtyperequest.h"
#include "deletethingtyperequest_p.h"
#include "deletethingtyperesponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeleteThingTypeRequest
 *
 * @brief  Implements IoT DeleteThingType requests.
 *
 * @see    IoTClient::deleteThingType
 */

/**
 * @brief  Constructs a new DeleteThingTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteThingTypeResponse::DeleteThingTypeResponse(

/**
 * @brief  Constructs a new DeleteThingTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteThingTypeRequest::DeleteThingTypeRequest(const DeleteThingTypeRequest &other)
    : IoTRequest(new DeleteThingTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteThingTypeRequest object.
 */
DeleteThingTypeRequest::DeleteThingTypeRequest()
    : IoTRequest(new DeleteThingTypeRequestPrivate(IoTRequest::DeleteThingTypeAction, this))
{

}

bool DeleteThingTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteThingTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteThingTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeleteThingTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThingTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteThingTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteThingTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingTypeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeleteThingTypeRequest instance.
 */
DeleteThingTypeRequestPrivate::DeleteThingTypeRequestPrivate(
    const IoTRequest::Action action, DeleteThingTypeRequest * const q)
    : DeleteThingTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteThingTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteThingTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteThingTypeRequest instance.
 */
DeleteThingTypeRequestPrivate::DeleteThingTypeRequestPrivate(
    const DeleteThingTypeRequestPrivate &other, DeleteThingTypeRequest * const q)
    : DeleteThingTypePrivate(other, q)
{

}
