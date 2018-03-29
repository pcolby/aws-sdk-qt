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

#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotrequest_p.h"
#include "createdbclustersnapshotresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBClusterSnapshotRequest
 *
 * @brief  Implements RDS CreateDBClusterSnapshot requests.
 *
 * @see    RDSClient::createDBClusterSnapshot
 */

/**
 * @brief  Constructs a new CreateDBClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest(const CreateDBClusterSnapshotRequest &other)
    : RDSRequest(new CreateDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBClusterSnapshotRequest object.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest()
    : RDSRequest(new CreateDBClusterSnapshotRequestPrivate(RDSRequest::CreateDBClusterSnapshotAction, this))
{

}

bool CreateDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBClusterSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateDBClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBClusterSnapshotRequest instance.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const RDSRequest::Action action, CreateDBClusterSnapshotRequest * const q)
    : CreateDBClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBClusterSnapshotRequest instance.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const CreateDBClusterSnapshotRequestPrivate &other, CreateDBClusterSnapshotRequest * const q)
    : CreateDBClusterSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
