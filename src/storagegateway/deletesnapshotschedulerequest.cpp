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

#include "deletesnapshotschedulerequest.h"
#include "deletesnapshotschedulerequest_p.h"
#include "deletesnapshotscheduleresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteSnapshotScheduleRequest
 *
 * @brief  Implements StorageGateway DeleteSnapshotSchedule requests.
 *
 * @see    StorageGatewayClient::deleteSnapshotSchedule
 */

/**
 * @brief  Constructs a new DeleteSnapshotScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotScheduleResponse::DeleteSnapshotScheduleResponse(

/**
 * @brief  Constructs a new DeleteSnapshotScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSnapshotScheduleRequest::DeleteSnapshotScheduleRequest(const DeleteSnapshotScheduleRequest &other)
    : StorageGatewayRequest(new DeleteSnapshotScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSnapshotScheduleRequest object.
 */
DeleteSnapshotScheduleRequest::DeleteSnapshotScheduleRequest()
    : StorageGatewayRequest(new DeleteSnapshotScheduleRequestPrivate(StorageGatewayRequest::DeleteSnapshotScheduleAction, this))
{

}

bool DeleteSnapshotScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSnapshotScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSnapshotScheduleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteSnapshotScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSnapshotScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSnapshotScheduleRequestPrivate
 *
 * @brief  Private implementation for DeleteSnapshotScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotScheduleRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteSnapshotScheduleRequest instance.
 */
DeleteSnapshotScheduleRequestPrivate::DeleteSnapshotScheduleRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteSnapshotScheduleRequest * const q)
    : DeleteSnapshotSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSnapshotScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSnapshotScheduleRequest instance.
 */
DeleteSnapshotScheduleRequestPrivate::DeleteSnapshotScheduleRequestPrivate(
    const DeleteSnapshotScheduleRequestPrivate &other, DeleteSnapshotScheduleRequest * const q)
    : DeleteSnapshotSchedulePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
