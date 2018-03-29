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

#include "deletedisksnapshotrequest.h"
#include "deletedisksnapshotrequest_p.h"
#include "deletedisksnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  DeleteDiskSnapshotRequest
 *
 * @brief  Implements Lightsail DeleteDiskSnapshot requests.
 *
 * @see    LightsailClient::deleteDiskSnapshot
 */

/**
 * @brief  Constructs a new DeleteDiskSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDiskSnapshotRequest::DeleteDiskSnapshotRequest(const DeleteDiskSnapshotRequest &other)
    : LightsailRequest(new DeleteDiskSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDiskSnapshotRequest object.
 */
DeleteDiskSnapshotRequest::DeleteDiskSnapshotRequest()
    : LightsailRequest(new DeleteDiskSnapshotRequestPrivate(LightsailRequest::DeleteDiskSnapshotAction, this))
{

}

bool DeleteDiskSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDiskSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDiskSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDiskSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDiskSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDiskSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteDiskSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DeleteDiskSnapshotRequest instance.
 */
DeleteDiskSnapshotRequestPrivate::DeleteDiskSnapshotRequestPrivate(
    const LightsailRequest::Action action, DeleteDiskSnapshotRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDiskSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDiskSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDiskSnapshotRequest instance.
 */
DeleteDiskSnapshotRequestPrivate::DeleteDiskSnapshotRequestPrivate(
    const DeleteDiskSnapshotRequestPrivate &other, DeleteDiskSnapshotRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
