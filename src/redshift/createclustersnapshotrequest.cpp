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

#include "createclustersnapshotrequest.h"
#include "createclustersnapshotrequest_p.h"
#include "createclustersnapshotresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateClusterSnapshotRequest
 *
 * @brief  Implements Redshift CreateClusterSnapshot requests.
 *
 * @see    RedshiftClient::createClusterSnapshot
 */

/**
 * @brief  Constructs a new CreateClusterSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterSnapshotRequest::CreateClusterSnapshotRequest(const CreateClusterSnapshotRequest &other)
    : RedshiftRequest(new CreateClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateClusterSnapshotRequest object.
 */
CreateClusterSnapshotRequest::CreateClusterSnapshotRequest()
    : RedshiftRequest(new CreateClusterSnapshotRequestPrivate(RedshiftRequest::CreateClusterSnapshotAction, this))
{

}

bool CreateClusterSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateClusterSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateClusterSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateClusterSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSnapshotRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateClusterSnapshotRequest instance.
 */
CreateClusterSnapshotRequestPrivate::CreateClusterSnapshotRequestPrivate(
    const RedshiftRequest::Action action, CreateClusterSnapshotRequest * const q)
    : CreateClusterSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterSnapshotRequest instance.
 */
CreateClusterSnapshotRequestPrivate::CreateClusterSnapshotRequestPrivate(
    const CreateClusterSnapshotRequestPrivate &other, CreateClusterSnapshotRequest * const q)
    : CreateClusterSnapshotPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
