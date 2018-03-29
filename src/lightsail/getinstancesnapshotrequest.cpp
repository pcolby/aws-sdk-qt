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

#include "getinstancesnapshotrequest.h"
#include "getinstancesnapshotrequest_p.h"
#include "getinstancesnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetInstanceSnapshotRequest
 *
 * @brief  Implements Lightsail GetInstanceSnapshot requests.
 *
 * @see    LightsailClient::getInstanceSnapshot
 */

/**
 * @brief  Constructs a new GetInstanceSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceSnapshotRequest::GetInstanceSnapshotRequest(const GetInstanceSnapshotRequest &other)
    : LightsailRequest(new GetInstanceSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceSnapshotRequest object.
 */
GetInstanceSnapshotRequest::GetInstanceSnapshotRequest()
    : LightsailRequest(new GetInstanceSnapshotRequestPrivate(LightsailRequest::GetInstanceSnapshotAction, this))
{

}

bool GetInstanceSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstanceSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceSnapshotRequestPrivate
 *
 * @brief  Private implementation for GetInstanceSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstanceSnapshotRequest instance.
 */
GetInstanceSnapshotRequestPrivate::GetInstanceSnapshotRequestPrivate(
    const LightsailRequest::Action action, GetInstanceSnapshotRequest * const q)
    : GetInstanceSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceSnapshotRequest instance.
 */
GetInstanceSnapshotRequestPrivate::GetInstanceSnapshotRequestPrivate(
    const GetInstanceSnapshotRequestPrivate &other, GetInstanceSnapshotRequest * const q)
    : GetInstanceSnapshotPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
