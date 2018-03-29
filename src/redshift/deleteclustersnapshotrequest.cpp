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

#include "deleteclustersnapshotrequest.h"
#include "deleteclustersnapshotrequest_p.h"
#include "deleteclustersnapshotresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteClusterSnapshotRequest
 *
 * @brief  Implements Redshift DeleteClusterSnapshot requests.
 *
 * @see    RedshiftClient::deleteClusterSnapshot
 */

/**
 * @brief  Constructs a new DeleteClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClusterSnapshotRequest::DeleteClusterSnapshotRequest(const DeleteClusterSnapshotRequest &other)
    : RedshiftRequest(new DeleteClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClusterSnapshotRequest object.
 */
DeleteClusterSnapshotRequest::DeleteClusterSnapshotRequest()
    : RedshiftRequest(new DeleteClusterSnapshotRequestPrivate(RedshiftRequest::DeleteClusterSnapshotAction, this))
{

}

bool DeleteClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClusterSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSnapshotRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteClusterSnapshotRequest instance.
 */
DeleteClusterSnapshotRequestPrivate::DeleteClusterSnapshotRequestPrivate(
    const RedshiftRequest::Action action, DeleteClusterSnapshotRequest * const q)
    : DeleteClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClusterSnapshotRequest instance.
 */
DeleteClusterSnapshotRequestPrivate::DeleteClusterSnapshotRequestPrivate(
    const DeleteClusterSnapshotRequestPrivate &other, DeleteClusterSnapshotRequest * const q)
    : DeleteClusterSnapshotPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
