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

#include "createinstancesnapshotrequest.h"
#include "createinstancesnapshotrequest_p.h"
#include "createinstancesnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateInstanceSnapshotRequest
 *
 * @brief  Implements Lightsail CreateInstanceSnapshot requests.
 *
 * @see    LightsailClient::createInstanceSnapshot
 */

/**
 * @brief  Constructs a new CreateInstanceSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInstanceSnapshotRequest::CreateInstanceSnapshotRequest(const CreateInstanceSnapshotRequest &other)
    : LightsailRequest(new CreateInstanceSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateInstanceSnapshotRequest object.
 */
CreateInstanceSnapshotRequest::CreateInstanceSnapshotRequest()
    : LightsailRequest(new CreateInstanceSnapshotRequestPrivate(LightsailRequest::CreateInstanceSnapshotAction, this))
{

}

bool CreateInstanceSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateInstanceSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInstanceSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateInstanceSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateInstanceSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateInstanceSnapshotRequest instance.
 */
CreateInstanceSnapshotRequestPrivate::CreateInstanceSnapshotRequestPrivate(
    const LightsailRequest::Action action, CreateInstanceSnapshotRequest * const q)
    : CreateInstanceSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInstanceSnapshotRequest instance.
 */
CreateInstanceSnapshotRequestPrivate::CreateInstanceSnapshotRequestPrivate(
    const CreateInstanceSnapshotRequestPrivate &other, CreateInstanceSnapshotRequest * const q)
    : CreateInstanceSnapshotPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
