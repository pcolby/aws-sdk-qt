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

#include "disablesnapshotcopyrequest.h"
#include "disablesnapshotcopyrequest_p.h"
#include "disablesnapshotcopyresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DisableSnapshotCopyRequest
 *
 * @brief  Implements Redshift DisableSnapshotCopy requests.
 *
 * @see    RedshiftClient::disableSnapshotCopy
 */

/**
 * @brief  Constructs a new DisableSnapshotCopyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableSnapshotCopyRequest::DisableSnapshotCopyRequest(const DisableSnapshotCopyRequest &other)
    : RedshiftRequest(new DisableSnapshotCopyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableSnapshotCopyRequest object.
 */
DisableSnapshotCopyRequest::DisableSnapshotCopyRequest()
    : RedshiftRequest(new DisableSnapshotCopyRequestPrivate(RedshiftRequest::DisableSnapshotCopyAction, this))
{

}

bool DisableSnapshotCopyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableSnapshotCopyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableSnapshotCopyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DisableSnapshotCopyRequest::response(QNetworkReply * const reply) const
{
    return new DisableSnapshotCopyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableSnapshotCopyRequestPrivate
 *
 * @brief  Private implementation for DisableSnapshotCopyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableSnapshotCopyRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DisableSnapshotCopyRequest instance.
 */
DisableSnapshotCopyRequestPrivate::DisableSnapshotCopyRequestPrivate(
    const RedshiftRequest::Action action, DisableSnapshotCopyRequest * const q)
    : DisableSnapshotCopyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableSnapshotCopyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableSnapshotCopyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableSnapshotCopyRequest instance.
 */
DisableSnapshotCopyRequestPrivate::DisableSnapshotCopyRequestPrivate(
    const DisableSnapshotCopyRequestPrivate &other, DisableSnapshotCopyRequest * const q)
    : DisableSnapshotCopyPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
