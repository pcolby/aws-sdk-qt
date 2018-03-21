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

#include "deleteinstancesnapshotrequest.h"
#include "deleteinstancesnapshotrequest_p.h"
#include "deleteinstancesnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DeleteInstanceSnapshotRequest
 *
 * @brief  Implements Lightsail DeleteInstanceSnapshot requests.
 *
 * @see    LightsailClient::deleteInstanceSnapshot
 */

/**
 * @brief  Constructs a new DeleteInstanceSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInstanceSnapshotResponse::DeleteInstanceSnapshotResponse(

/**
 * @brief  Constructs a new DeleteInstanceSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInstanceSnapshotRequest::DeleteInstanceSnapshotRequest(const DeleteInstanceSnapshotRequest &other)
    : LightsailRequest(new DeleteInstanceSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInstanceSnapshotRequest object.
 */
DeleteInstanceSnapshotRequest::DeleteInstanceSnapshotRequest()
    : LightsailRequest(new DeleteInstanceSnapshotRequestPrivate(LightsailRequest::DeleteInstanceSnapshotAction, this))
{

}

bool DeleteInstanceSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInstanceSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInstanceSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DeleteInstanceSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInstanceSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteInstanceSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteInstanceSnapshotRequest instance.
 */
DeleteInstanceSnapshotRequestPrivate::DeleteInstanceSnapshotRequestPrivate(
    const LightsailRequest::Action action, DeleteInstanceSnapshotRequest * const q)
    : DeleteInstanceSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInstanceSnapshotRequest instance.
 */
DeleteInstanceSnapshotRequestPrivate::DeleteInstanceSnapshotRequestPrivate(
    const DeleteInstanceSnapshotRequestPrivate &other, DeleteInstanceSnapshotRequest * const q)
    : DeleteInstanceSnapshotPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
