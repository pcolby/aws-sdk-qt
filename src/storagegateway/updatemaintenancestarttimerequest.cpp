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

#include "updatemaintenancestarttimerequest.h"
#include "updatemaintenancestarttimerequest_p.h"
#include "updatemaintenancestarttimeresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  UpdateMaintenanceStartTimeRequest
 *
 * @brief  Implements StorageGateway UpdateMaintenanceStartTime requests.
 *
 * @see    StorageGatewayClient::updateMaintenanceStartTime
 */

/**
 * @brief  Constructs a new UpdateMaintenanceStartTimeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMaintenanceStartTimeRequest::UpdateMaintenanceStartTimeRequest(const UpdateMaintenanceStartTimeRequest &other)
    : StorageGatewayRequest(new UpdateMaintenanceStartTimeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMaintenanceStartTimeRequest object.
 */
UpdateMaintenanceStartTimeRequest::UpdateMaintenanceStartTimeRequest()
    : StorageGatewayRequest(new UpdateMaintenanceStartTimeRequestPrivate(StorageGatewayRequest::UpdateMaintenanceStartTimeAction, this))
{

}

bool UpdateMaintenanceStartTimeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMaintenanceStartTimeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMaintenanceStartTimeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMaintenanceStartTimeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMaintenanceStartTimeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceStartTimeRequestPrivate
 *
 * @brief  Private implementation for UpdateMaintenanceStartTimeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceStartTimeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateMaintenanceStartTimeRequest instance.
 */
UpdateMaintenanceStartTimeRequestPrivate::UpdateMaintenanceStartTimeRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateMaintenanceStartTimeRequest * const q)
    : UpdateMaintenanceStartTimePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceStartTimeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMaintenanceStartTimeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMaintenanceStartTimeRequest instance.
 */
UpdateMaintenanceStartTimeRequestPrivate::UpdateMaintenanceStartTimeRequestPrivate(
    const UpdateMaintenanceStartTimeRequestPrivate &other, UpdateMaintenanceStartTimeRequest * const q)
    : UpdateMaintenanceStartTimePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
