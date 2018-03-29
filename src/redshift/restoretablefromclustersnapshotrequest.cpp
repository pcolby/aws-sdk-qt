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

#include "restoretablefromclustersnapshotrequest.h"
#include "restoretablefromclustersnapshotrequest_p.h"
#include "restoretablefromclustersnapshotresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  RestoreTableFromClusterSnapshotRequest
 *
 * @brief  Implements Redshift RestoreTableFromClusterSnapshot requests.
 *
 * @see    RedshiftClient::restoreTableFromClusterSnapshot
 */

/**
 * @brief  Constructs a new RestoreTableFromClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreTableFromClusterSnapshotRequest::RestoreTableFromClusterSnapshotRequest(const RestoreTableFromClusterSnapshotRequest &other)
    : RedshiftRequest(new RestoreTableFromClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreTableFromClusterSnapshotRequest object.
 */
RestoreTableFromClusterSnapshotRequest::RestoreTableFromClusterSnapshotRequest()
    : RedshiftRequest(new RestoreTableFromClusterSnapshotRequestPrivate(RedshiftRequest::RestoreTableFromClusterSnapshotAction, this))
{

}

bool RestoreTableFromClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreTableFromClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreTableFromClusterSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreTableFromClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreTableFromClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreTableFromClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreTableFromClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromClusterSnapshotRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RestoreTableFromClusterSnapshotRequest instance.
 */
RestoreTableFromClusterSnapshotRequestPrivate::RestoreTableFromClusterSnapshotRequestPrivate(
    const RedshiftRequest::Action action, RestoreTableFromClusterSnapshotRequest * const q)
    : RestoreTableFromClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreTableFromClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreTableFromClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreTableFromClusterSnapshotRequest instance.
 */
RestoreTableFromClusterSnapshotRequestPrivate::RestoreTableFromClusterSnapshotRequestPrivate(
    const RestoreTableFromClusterSnapshotRequestPrivate &other, RestoreTableFromClusterSnapshotRequest * const q)
    : RestoreTableFromClusterSnapshotPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
