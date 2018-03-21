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

#include "deprecatethingtyperequest.h"
#include "deprecatethingtyperequest_p.h"
#include "deprecatethingtyperesponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DeprecateThingTypeRequest
 *
 * @brief  Implements IoT DeprecateThingType requests.
 *
 * @see    IoTClient::deprecateThingType
 */

/**
 * @brief  Constructs a new DeprecateThingTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeprecateThingTypeRequest::DeprecateThingTypeRequest(const DeprecateThingTypeRequest &other)
    : IoTRequest(new DeprecateThingTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeprecateThingTypeRequest object.
 */
DeprecateThingTypeRequest::DeprecateThingTypeRequest()
    : IoTRequest(new DeprecateThingTypeRequestPrivate(IoTRequest::DeprecateThingTypeAction, this))
{

}

bool DeprecateThingTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeprecateThingTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeprecateThingTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DeprecateThingTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateThingTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeprecateThingTypeRequestPrivate
 *
 * @brief  Private implementation for DeprecateThingTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateThingTypeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DeprecateThingTypeRequest instance.
 */
DeprecateThingTypeRequestPrivate::DeprecateThingTypeRequestPrivate(
    const IoTRequest::Action action, DeprecateThingTypeRequest * const q)
    : DeprecateThingTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateThingTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeprecateThingTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeprecateThingTypeRequest instance.
 */
DeprecateThingTypeRequestPrivate::DeprecateThingTypeRequestPrivate(
    const DeprecateThingTypeRequestPrivate &other, DeprecateThingTypeRequest * const q)
    : DeprecateThingTypePrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
