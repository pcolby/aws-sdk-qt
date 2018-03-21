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

#include "attachthingprincipalrequest.h"
#include "attachthingprincipalrequest_p.h"
#include "attachthingprincipalresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  AttachThingPrincipalRequest
 *
 * @brief  Implements IoT AttachThingPrincipal requests.
 *
 * @see    IoTClient::attachThingPrincipal
 */

/**
 * @brief  Constructs a new AttachThingPrincipalRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachThingPrincipalRequest::AttachThingPrincipalRequest(const AttachThingPrincipalRequest &other)
    : IoTRequest(new AttachThingPrincipalRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachThingPrincipalRequest object.
 */
AttachThingPrincipalRequest::AttachThingPrincipalRequest()
    : IoTRequest(new AttachThingPrincipalRequestPrivate(IoTRequest::AttachThingPrincipalAction, this))
{

}

bool AttachThingPrincipalRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachThingPrincipalResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachThingPrincipalResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * AttachThingPrincipalRequest::response(QNetworkReply * const reply) const
{
    return new AttachThingPrincipalResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachThingPrincipalRequestPrivate
 *
 * @brief  Private implementation for AttachThingPrincipalRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachThingPrincipalRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public AttachThingPrincipalRequest instance.
 */
AttachThingPrincipalRequestPrivate::AttachThingPrincipalRequestPrivate(
    const IoTRequest::Action action, AttachThingPrincipalRequest * const q)
    : AttachThingPrincipalPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachThingPrincipalRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachThingPrincipalRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachThingPrincipalRequest instance.
 */
AttachThingPrincipalRequestPrivate::AttachThingPrincipalRequestPrivate(
    const AttachThingPrincipalRequestPrivate &other, AttachThingPrincipalRequest * const q)
    : AttachThingPrincipalPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
