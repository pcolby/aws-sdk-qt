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

#include "getdisksnapshotrequest.h"
#include "getdisksnapshotrequest_p.h"
#include "getdisksnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetDiskSnapshotRequest
 *
 * @brief  Implements Lightsail GetDiskSnapshot requests.
 *
 * @see    LightsailClient::getDiskSnapshot
 */

/**
 * @brief  Constructs a new GetDiskSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDiskSnapshotRequest::GetDiskSnapshotRequest(const GetDiskSnapshotRequest &other)
    : LightsailRequest(new GetDiskSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDiskSnapshotRequest object.
 */
GetDiskSnapshotRequest::GetDiskSnapshotRequest()
    : LightsailRequest(new GetDiskSnapshotRequestPrivate(LightsailRequest::GetDiskSnapshotAction, this))
{

}

bool GetDiskSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDiskSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDiskSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetDiskSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new GetDiskSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDiskSnapshotRequestPrivate
 *
 * @brief  Private implementation for GetDiskSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetDiskSnapshotRequest instance.
 */
GetDiskSnapshotRequestPrivate::GetDiskSnapshotRequestPrivate(
    const LightsailRequest::Action action, GetDiskSnapshotRequest * const q)
    : GetDiskSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDiskSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDiskSnapshotRequest instance.
 */
GetDiskSnapshotRequestPrivate::GetDiskSnapshotRequestPrivate(
    const GetDiskSnapshotRequestPrivate &other, GetDiskSnapshotRequest * const q)
    : GetDiskSnapshotPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
