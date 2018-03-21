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

#include "creatediskfromsnapshotrequest.h"
#include "creatediskfromsnapshotrequest_p.h"
#include "creatediskfromsnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskFromSnapshotRequest
 *
 * @brief  Implements Lightsail CreateDiskFromSnapshot requests.
 *
 * @see    LightsailClient::createDiskFromSnapshot
 */

/**
 * @brief  Constructs a new CreateDiskFromSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDiskFromSnapshotResponse::CreateDiskFromSnapshotResponse(

/**
 * @brief  Constructs a new CreateDiskFromSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDiskFromSnapshotRequest::CreateDiskFromSnapshotRequest(const CreateDiskFromSnapshotRequest &other)
    : LightsailRequest(new CreateDiskFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDiskFromSnapshotRequest object.
 */
CreateDiskFromSnapshotRequest::CreateDiskFromSnapshotRequest()
    : LightsailRequest(new CreateDiskFromSnapshotRequestPrivate(LightsailRequest::CreateDiskFromSnapshotAction, this))
{

}

bool CreateDiskFromSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDiskFromSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDiskFromSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateDiskFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDiskFromSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDiskFromSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateDiskFromSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskFromSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateDiskFromSnapshotRequest instance.
 */
CreateDiskFromSnapshotRequestPrivate::CreateDiskFromSnapshotRequestPrivate(
    const LightsailRequest::Action action, CreateDiskFromSnapshotRequest * const q)
    : CreateDiskFromSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskFromSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDiskFromSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDiskFromSnapshotRequest instance.
 */
CreateDiskFromSnapshotRequestPrivate::CreateDiskFromSnapshotRequestPrivate(
    const CreateDiskFromSnapshotRequestPrivate &other, CreateDiskFromSnapshotRequest * const q)
    : CreateDiskFromSnapshotPrivate(other, q)
{

}
