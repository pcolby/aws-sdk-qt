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

#include "updatesnapshotschedulerequest.h"
#include "updatesnapshotschedulerequest_p.h"
#include "updatesnapshotscheduleresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  UpdateSnapshotScheduleRequest
 *
 * @brief  Implements StorageGateway UpdateSnapshotSchedule requests.
 *
 * @see    StorageGatewayClient::updateSnapshotSchedule
 */

/**
 * @brief  Constructs a new UpdateSnapshotScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSnapshotScheduleResponse::UpdateSnapshotScheduleResponse(

/**
 * @brief  Constructs a new UpdateSnapshotScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSnapshotScheduleRequest::UpdateSnapshotScheduleRequest(const UpdateSnapshotScheduleRequest &other)
    : StorageGatewayRequest(new UpdateSnapshotScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSnapshotScheduleRequest object.
 */
UpdateSnapshotScheduleRequest::UpdateSnapshotScheduleRequest()
    : StorageGatewayRequest(new UpdateSnapshotScheduleRequestPrivate(StorageGatewayRequest::UpdateSnapshotScheduleAction, this))
{

}

bool UpdateSnapshotScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSnapshotScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSnapshotScheduleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * UpdateSnapshotScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSnapshotScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSnapshotScheduleRequestPrivate
 *
 * @brief  Private implementation for UpdateSnapshotScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSnapshotScheduleRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public UpdateSnapshotScheduleRequest instance.
 */
UpdateSnapshotScheduleRequestPrivate::UpdateSnapshotScheduleRequestPrivate(
    const StorageGatewayRequest::Action action, UpdateSnapshotScheduleRequest * const q)
    : UpdateSnapshotSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSnapshotScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSnapshotScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSnapshotScheduleRequest instance.
 */
UpdateSnapshotScheduleRequestPrivate::UpdateSnapshotScheduleRequestPrivate(
    const UpdateSnapshotScheduleRequestPrivate &other, UpdateSnapshotScheduleRequest * const q)
    : UpdateSnapshotSchedulePrivate(other, q)
{

}
