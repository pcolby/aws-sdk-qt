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

#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotrequest_p.h"
#include "deletedbclustersnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DeleteDBClusterSnapshotRequest
 *
 * @brief  Implements RDS DeleteDBClusterSnapshot requests.
 *
 * @see    RDSClient::deleteDBClusterSnapshot
 */

/**
 * @brief  Constructs a new DeleteDBClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest(const DeleteDBClusterSnapshotRequest &other)
    : RDSRequest(new DeleteDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBClusterSnapshotRequest object.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest()
    : RDSRequest(new DeleteDBClusterSnapshotRequestPrivate(RDSRequest::DeleteDBClusterSnapshotAction, this))
{

}

bool DeleteDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBClusterSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteDBClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBClusterSnapshotRequest instance.
 */
DeleteDBClusterSnapshotRequestPrivate::DeleteDBClusterSnapshotRequestPrivate(
    const RDSRequest::Action action, DeleteDBClusterSnapshotRequest * const q)
    : DeleteDBClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBClusterSnapshotRequest instance.
 */
DeleteDBClusterSnapshotRequestPrivate::DeleteDBClusterSnapshotRequestPrivate(
    const DeleteDBClusterSnapshotRequestPrivate &other, DeleteDBClusterSnapshotRequest * const q)
    : DeleteDBClusterSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
