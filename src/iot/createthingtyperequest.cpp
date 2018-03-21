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

#include "createthingtyperequest.h"
#include "createthingtyperequest_p.h"
#include "createthingtyperesponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  CreateThingTypeRequest
 *
 * @brief  Implements IoT CreateThingType requests.
 *
 * @see    IoTClient::createThingType
 */

/**
 * @brief  Constructs a new CreateThingTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateThingTypeResponse::CreateThingTypeResponse(

/**
 * @brief  Constructs a new CreateThingTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateThingTypeRequest::CreateThingTypeRequest(const CreateThingTypeRequest &other)
    : IoTRequest(new CreateThingTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateThingTypeRequest object.
 */
CreateThingTypeRequest::CreateThingTypeRequest()
    : IoTRequest(new CreateThingTypeRequestPrivate(IoTRequest::CreateThingTypeAction, this))
{

}

bool CreateThingTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateThingTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateThingTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateThingTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateThingTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateThingTypeRequestPrivate
 *
 * @brief  Private implementation for CreateThingTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingTypeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateThingTypeRequest instance.
 */
CreateThingTypeRequestPrivate::CreateThingTypeRequestPrivate(
    const IoTRequest::Action action, CreateThingTypeRequest * const q)
    : CreateThingTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateThingTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateThingTypeRequest instance.
 */
CreateThingTypeRequestPrivate::CreateThingTypeRequestPrivate(
    const CreateThingTypeRequestPrivate &other, CreateThingTypeRequest * const q)
    : CreateThingTypePrivate(other, q)
{

}
