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

#include "deletesnapshotcopygrantrequest.h"
#include "deletesnapshotcopygrantrequest_p.h"
#include "deletesnapshotcopygrantresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteSnapshotCopyGrantRequest
 *
 * @brief  Implements Redshift DeleteSnapshotCopyGrant requests.
 *
 * @see    RedshiftClient::deleteSnapshotCopyGrant
 */

/**
 * @brief  Constructs a new DeleteSnapshotCopyGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSnapshotCopyGrantResponse::DeleteSnapshotCopyGrantResponse(

/**
 * @brief  Constructs a new DeleteSnapshotCopyGrantRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSnapshotCopyGrantRequest::DeleteSnapshotCopyGrantRequest(const DeleteSnapshotCopyGrantRequest &other)
    : RedshiftRequest(new DeleteSnapshotCopyGrantRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSnapshotCopyGrantRequest object.
 */
DeleteSnapshotCopyGrantRequest::DeleteSnapshotCopyGrantRequest()
    : RedshiftRequest(new DeleteSnapshotCopyGrantRequestPrivate(RedshiftRequest::DeleteSnapshotCopyGrantAction, this))
{

}

bool DeleteSnapshotCopyGrantRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSnapshotCopyGrantResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSnapshotCopyGrantResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DeleteSnapshotCopyGrantRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSnapshotCopyGrantResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSnapshotCopyGrantRequestPrivate
 *
 * @brief  Private implementation for DeleteSnapshotCopyGrantRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotCopyGrantRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DeleteSnapshotCopyGrantRequest instance.
 */
DeleteSnapshotCopyGrantRequestPrivate::DeleteSnapshotCopyGrantRequestPrivate(
    const RedshiftRequest::Action action, DeleteSnapshotCopyGrantRequest * const q)
    : DeleteSnapshotCopyGrantPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSnapshotCopyGrantRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSnapshotCopyGrantRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSnapshotCopyGrantRequest instance.
 */
DeleteSnapshotCopyGrantRequestPrivate::DeleteSnapshotCopyGrantRequestPrivate(
    const DeleteSnapshotCopyGrantRequestPrivate &other, DeleteSnapshotCopyGrantRequest * const q)
    : DeleteSnapshotCopyGrantPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
