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

#include "createthingrequest.h"
#include "createthingrequest_p.h"
#include "createthingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  CreateThingRequest
 *
 * @brief  Implements IoT CreateThing requests.
 *
 * @see    IoTClient::createThing
 */

/**
 * @brief  Constructs a new CreateThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateThingRequest::CreateThingRequest(const CreateThingRequest &other)
    : IoTRequest(new CreateThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateThingRequest object.
 */
CreateThingRequest::CreateThingRequest()
    : IoTRequest(new CreateThingRequestPrivate(IoTRequest::CreateThingAction, this))
{

}

bool CreateThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateThingRequest::response(QNetworkReply * const reply) const
{
    return new CreateThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateThingRequestPrivate
 *
 * @brief  Private implementation for CreateThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateThingRequest instance.
 */
CreateThingRequestPrivate::CreateThingRequestPrivate(
    const IoTRequest::Action action, CreateThingRequest * const q)
    : CreateThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateThingRequest instance.
 */
CreateThingRequestPrivate::CreateThingRequestPrivate(
    const CreateThingRequestPrivate &other, CreateThingRequest * const q)
    : CreateThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
