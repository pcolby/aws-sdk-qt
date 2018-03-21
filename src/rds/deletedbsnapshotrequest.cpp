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

#include "deletedbsnapshotrequest.h"
#include "deletedbsnapshotrequest_p.h"
#include "deletedbsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBSnapshotRequest
 *
 * @brief  Implements RDS DeleteDBSnapshot requests.
 *
 * @see    RDSClient::deleteDBSnapshot
 */

/**
 * @brief  Constructs a new DeleteDBSnapshotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDBSnapshotResponse::DeleteDBSnapshotResponse(

/**
 * @brief  Constructs a new DeleteDBSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBSnapshotRequest::DeleteDBSnapshotRequest(const DeleteDBSnapshotRequest &other)
    : RDSRequest(new DeleteDBSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBSnapshotRequest object.
 */
DeleteDBSnapshotRequest::DeleteDBSnapshotRequest()
    : RDSRequest(new DeleteDBSnapshotRequestPrivate(RDSRequest::DeleteDBSnapshotAction, this))
{

}

bool DeleteDBSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBSnapshotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DeleteDBSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeleteDBSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBSnapshotRequest instance.
 */
DeleteDBSnapshotRequestPrivate::DeleteDBSnapshotRequestPrivate(
    const RDSRequest::Action action, DeleteDBSnapshotRequest * const q)
    : DeleteDBSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBSnapshotRequest instance.
 */
DeleteDBSnapshotRequestPrivate::DeleteDBSnapshotRequestPrivate(
    const DeleteDBSnapshotRequestPrivate &other, DeleteDBSnapshotRequest * const q)
    : DeleteDBSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
