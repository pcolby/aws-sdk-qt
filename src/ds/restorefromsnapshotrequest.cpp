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

#include "restorefromsnapshotrequest.h"
#include "restorefromsnapshotrequest_p.h"
#include "restorefromsnapshotresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  RestoreFromSnapshotRequest
 *
 * @brief  Implements DirectoryService RestoreFromSnapshot requests.
 *
 * @see    DirectoryServiceClient::restoreFromSnapshot
 */

/**
 * @brief  Constructs a new RestoreFromSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreFromSnapshotRequest::RestoreFromSnapshotRequest(const RestoreFromSnapshotRequest &other)
    : DirectoryServiceRequest(new RestoreFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreFromSnapshotRequest object.
 */
RestoreFromSnapshotRequest::RestoreFromSnapshotRequest()
    : DirectoryServiceRequest(new RestoreFromSnapshotRequestPrivate(DirectoryServiceRequest::RestoreFromSnapshotAction, this))
{

}

bool RestoreFromSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreFromSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreFromSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * RestoreFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreFromSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreFromSnapshotRequestPrivate
 *
 * @brief  Private implementation for RestoreFromSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromSnapshotRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public RestoreFromSnapshotRequest instance.
 */
RestoreFromSnapshotRequestPrivate::RestoreFromSnapshotRequestPrivate(
    const DirectoryServiceRequest::Action action, RestoreFromSnapshotRequest * const q)
    : RestoreFromSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreFromSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreFromSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreFromSnapshotRequest instance.
 */
RestoreFromSnapshotRequestPrivate::RestoreFromSnapshotRequestPrivate(
    const RestoreFromSnapshotRequestPrivate &other, RestoreFromSnapshotRequest * const q)
    : RestoreFromSnapshotPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
