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

#include "updatevtldevicetyperequest.h"
#include "updatevtldevicetyperequest_p.h"
#include "updatevtldevicetyperesponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateVTLDeviceTypeRequest
 *
 * @brief  Implements StorageGateway UpdateVTLDeviceType requests.
 *
 * @see    StorageGatewayClient::updateVTLDeviceType
 */

/**
 * @brief  Constructs a new UpdateVTLDeviceTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateVTLDeviceTypeRequest::UpdateVTLDeviceTypeRequest(const UpdateVTLDeviceTypeRequest &other)
    : StorageGatewayRequest(new UpdateVTLDeviceTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateVTLDeviceTypeRequest object.
 */
UpdateVTLDeviceTypeRequest::UpdateVTLDeviceTypeRequest()
    : StorageGatewayRequest(new UpdateVTLDeviceTypeRequestPrivate(StorageGatewayRequest::UpdateVTLDeviceTypeAction, this))
{

}

bool UpdateVTLDeviceTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateVTLDeviceTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateVTLDeviceTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateVTLDeviceTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVTLDeviceTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateVTLDeviceTypeRequestPrivate
 *
 * @brief  Private implementation for UpdateVTLDeviceTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVTLDeviceTypeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateVTLDeviceTypeRequest instance.
 */
UpdateVTLDeviceTypeRequestPrivate::UpdateVTLDeviceTypeRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateVTLDeviceTypeRequest * const q)
    : UpdateVTLDeviceTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVTLDeviceTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateVTLDeviceTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateVTLDeviceTypeRequest instance.
 */
UpdateVTLDeviceTypeRequestPrivate::UpdateVTLDeviceTypeRequestPrivate(
    const UpdateVTLDeviceTypeRequestPrivate &other, UpdateVTLDeviceTypeRequest * const q)
    : UpdateVTLDeviceTypePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
