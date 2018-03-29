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

#include "getinstancesnapshotsrequest.h"
#include "getinstancesnapshotsrequest_p.h"
#include "getinstancesnapshotsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceSnapshotsRequest
 *
 * @brief  Implements Lightsail GetInstanceSnapshots requests.
 *
 * @see    LightsailClient::getInstanceSnapshots
 */

/**
 * @brief  Constructs a new GetInstanceSnapshotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceSnapshotsRequest::GetInstanceSnapshotsRequest(const GetInstanceSnapshotsRequest &other)
    : LightsailRequest(new GetInstanceSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceSnapshotsRequest object.
 */
GetInstanceSnapshotsRequest::GetInstanceSnapshotsRequest()
    : LightsailRequest(new GetInstanceSnapshotsRequestPrivate(LightsailRequest::GetInstanceSnapshotsAction, this))
{

}

bool GetInstanceSnapshotsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceSnapshotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceSnapshotsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstanceSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceSnapshotsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceSnapshotsRequestPrivate
 *
 * @brief  Private implementation for GetInstanceSnapshotsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstanceSnapshotsRequest instance.
 */
GetInstanceSnapshotsRequestPrivate::GetInstanceSnapshotsRequestPrivate(
    const LightsailRequest::Action action, GetInstanceSnapshotsRequest * const q)
    : GetInstanceSnapshotsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceSnapshotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceSnapshotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceSnapshotsRequest instance.
 */
GetInstanceSnapshotsRequestPrivate::GetInstanceSnapshotsRequestPrivate(
    const GetInstanceSnapshotsRequestPrivate &other, GetInstanceSnapshotsRequest * const q)
    : GetInstanceSnapshotsPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
