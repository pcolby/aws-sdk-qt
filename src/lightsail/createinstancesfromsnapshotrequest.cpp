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

#include "createinstancesfromsnapshotrequest.h"
#include "createinstancesfromsnapshotrequest_p.h"
#include "createinstancesfromsnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  CreateInstancesFromSnapshotRequest
 *
 * @brief  Implements Lightsail CreateInstancesFromSnapshot requests.
 *
 * @see    LightsailClient::createInstancesFromSnapshot
 */

/**
 * @brief  Constructs a new CreateInstancesFromSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInstancesFromSnapshotRequest::CreateInstancesFromSnapshotRequest(const CreateInstancesFromSnapshotRequest &other)
    : LightsailRequest(new CreateInstancesFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateInstancesFromSnapshotRequest object.
 */
CreateInstancesFromSnapshotRequest::CreateInstancesFromSnapshotRequest()
    : LightsailRequest(new CreateInstancesFromSnapshotRequestPrivate(LightsailRequest::CreateInstancesFromSnapshotAction, this))
{

}

bool CreateInstancesFromSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateInstancesFromSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInstancesFromSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstancesFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstancesFromSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateInstancesFromSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateInstancesFromSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstancesFromSnapshotRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateInstancesFromSnapshotRequest instance.
 */
CreateInstancesFromSnapshotRequestPrivate::CreateInstancesFromSnapshotRequestPrivate(
    const LightsailRequest::Action action, CreateInstancesFromSnapshotRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstancesFromSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInstancesFromSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInstancesFromSnapshotRequest instance.
 */
CreateInstancesFromSnapshotRequestPrivate::CreateInstancesFromSnapshotRequestPrivate(
    const CreateInstancesFromSnapshotRequestPrivate &other, CreateInstancesFromSnapshotRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
