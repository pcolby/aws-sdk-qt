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

#include "detachthingprincipalrequest.h"
#include "detachthingprincipalrequest_p.h"
#include "detachthingprincipalresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DetachThingPrincipalRequest
 *
 * @brief  Implements IoT DetachThingPrincipal requests.
 *
 * @see    IoTClient::detachThingPrincipal
 */

/**
 * @brief  Constructs a new DetachThingPrincipalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachThingPrincipalResponse::DetachThingPrincipalResponse(

/**
 * @brief  Constructs a new DetachThingPrincipalRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachThingPrincipalRequest::DetachThingPrincipalRequest(const DetachThingPrincipalRequest &other)
    : IoTRequest(new DetachThingPrincipalRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachThingPrincipalRequest object.
 */
DetachThingPrincipalRequest::DetachThingPrincipalRequest()
    : IoTRequest(new DetachThingPrincipalRequestPrivate(IoTRequest::DetachThingPrincipalAction, this))
{

}

bool DetachThingPrincipalRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachThingPrincipalResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachThingPrincipalResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DetachThingPrincipalRequest::response(QNetworkReply * const reply) const
{
    return new DetachThingPrincipalResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachThingPrincipalRequestPrivate
 *
 * @brief  Private implementation for DetachThingPrincipalRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachThingPrincipalRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DetachThingPrincipalRequest instance.
 */
DetachThingPrincipalRequestPrivate::DetachThingPrincipalRequestPrivate(
    const IoTRequest::Action action, DetachThingPrincipalRequest * const q)
    : DetachThingPrincipalPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachThingPrincipalRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachThingPrincipalRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachThingPrincipalRequest instance.
 */
DetachThingPrincipalRequestPrivate::DetachThingPrincipalRequestPrivate(
    const DetachThingPrincipalRequestPrivate &other, DetachThingPrincipalRequest * const q)
    : DetachThingPrincipalPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
