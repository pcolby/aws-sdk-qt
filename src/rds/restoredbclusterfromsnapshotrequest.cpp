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

#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotrequest_p.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBClusterFromSnapshotRequest
 *
 * @brief  Implements RDS RestoreDBClusterFromSnapshot requests.
 *
 * @see    RDSClient::restoreDBClusterFromSnapshot
 */

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest(const RestoreDBClusterFromSnapshotRequest &other)
    : RDSRequest(new RestoreDBClusterFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequest object.
 */
RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest()
    : RDSRequest(new RestoreDBClusterFromSnapshotRequestPrivate(RDSRequest::RestoreDBClusterFromSnapshotAction, this))
{

}

bool RestoreDBClusterFromSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBClusterFromSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBClusterFromSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreDBClusterFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterFromSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBClusterFromSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreDBClusterFromSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBClusterFromSnapshotRequest instance.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const RDSRequest::Action action, RestoreDBClusterFromSnapshotRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterFromSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBClusterFromSnapshotRequest instance.
 */
RestoreDBClusterFromSnapshotRequestPrivate::RestoreDBClusterFromSnapshotRequestPrivate(
    const RestoreDBClusterFromSnapshotRequestPrivate &other, RestoreDBClusterFromSnapshotRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
