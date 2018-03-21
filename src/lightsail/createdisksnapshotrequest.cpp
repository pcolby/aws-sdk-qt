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

#include "createdisksnapshotrequest.h"
#include "createdisksnapshotrequest_p.h"
#include "createdisksnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskSnapshotRequest
 *
 * @brief  Implements Lightsail CreateDiskSnapshot requests.
 *
 * @see    LightsailClient::createDiskSnapshot
 */

/**
 * @brief  Constructs a new CreateDiskSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDiskSnapshotRequest::CreateDiskSnapshotRequest(const CreateDiskSnapshotRequest &other)
    : LightsailRequest(new CreateDiskSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDiskSnapshotRequest object.
 */
CreateDiskSnapshotRequest::CreateDiskSnapshotRequest()
    : LightsailRequest(new CreateDiskSnapshotRequestPrivate(LightsailRequest::CreateDiskSnapshotAction, this))
{

}

bool CreateDiskSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDiskSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDiskSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateDiskSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDiskSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDiskSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateDiskSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateDiskSnapshotRequest instance.
 */
CreateDiskSnapshotRequestPrivate::CreateDiskSnapshotRequestPrivate(
    const LightsailRequest::Action action, CreateDiskSnapshotRequest * const q)
    : CreateDiskSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDiskSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDiskSnapshotRequest instance.
 */
CreateDiskSnapshotRequestPrivate::CreateDiskSnapshotRequestPrivate(
    const CreateDiskSnapshotRequestPrivate &other, CreateDiskSnapshotRequest * const q)
    : CreateDiskSnapshotPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
