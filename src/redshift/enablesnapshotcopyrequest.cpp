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

#include "enablesnapshotcopyrequest.h"
#include "enablesnapshotcopyrequest_p.h"
#include "enablesnapshotcopyresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  EnableSnapshotCopyRequest
 *
 * @brief  Implements Redshift EnableSnapshotCopy requests.
 *
 * @see    RedshiftClient::enableSnapshotCopy
 */

/**
 * @brief  Constructs a new EnableSnapshotCopyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableSnapshotCopyRequest::EnableSnapshotCopyRequest(const EnableSnapshotCopyRequest &other)
    : RedshiftRequest(new EnableSnapshotCopyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableSnapshotCopyRequest object.
 */
EnableSnapshotCopyRequest::EnableSnapshotCopyRequest()
    : RedshiftRequest(new EnableSnapshotCopyRequestPrivate(RedshiftRequest::EnableSnapshotCopyAction, this))
{

}

bool EnableSnapshotCopyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableSnapshotCopyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableSnapshotCopyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * EnableSnapshotCopyRequest::response(QNetworkReply * const reply) const
{
    return new EnableSnapshotCopyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableSnapshotCopyRequestPrivate
 *
 * @brief  Private implementation for EnableSnapshotCopyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableSnapshotCopyRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public EnableSnapshotCopyRequest instance.
 */
EnableSnapshotCopyRequestPrivate::EnableSnapshotCopyRequestPrivate(
    const RedshiftRequest::Action action, EnableSnapshotCopyRequest * const q)
    : EnableSnapshotCopyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableSnapshotCopyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableSnapshotCopyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableSnapshotCopyRequest instance.
 */
EnableSnapshotCopyRequestPrivate::EnableSnapshotCopyRequestPrivate(
    const EnableSnapshotCopyRequestPrivate &other, EnableSnapshotCopyRequest * const q)
    : EnableSnapshotCopyPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
