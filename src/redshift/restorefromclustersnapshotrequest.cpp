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

#include "restorefromclustersnapshotrequest.h"
#include "restorefromclustersnapshotrequest_p.h"
#include "restorefromclustersnapshotresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  RestoreFromClusterSnapshotRequest
 *
 * @brief  Implements Redshift RestoreFromClusterSnapshot requests.
 *
 * @see    RedshiftClient::restoreFromClusterSnapshot
 */

/**
 * @brief  Constructs a new RestoreFromClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreFromClusterSnapshotRequest::RestoreFromClusterSnapshotRequest(const RestoreFromClusterSnapshotRequest &other)
    : RedshiftRequest(new RestoreFromClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreFromClusterSnapshotRequest object.
 */
RestoreFromClusterSnapshotRequest::RestoreFromClusterSnapshotRequest()
    : RedshiftRequest(new RestoreFromClusterSnapshotRequestPrivate(RedshiftRequest::RestoreFromClusterSnapshotAction, this))
{

}

bool RestoreFromClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreFromClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreFromClusterSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreFromClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreFromClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreFromClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreFromClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromClusterSnapshotRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RestoreFromClusterSnapshotRequest instance.
 */
RestoreFromClusterSnapshotRequestPrivate::RestoreFromClusterSnapshotRequestPrivate(
    const RedshiftRequest::Action action, RestoreFromClusterSnapshotRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreFromClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreFromClusterSnapshotRequest instance.
 */
RestoreFromClusterSnapshotRequestPrivate::RestoreFromClusterSnapshotRequestPrivate(
    const RestoreFromClusterSnapshotRequestPrivate &other, RestoreFromClusterSnapshotRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
