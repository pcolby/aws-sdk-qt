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

#include "modifysnapshotcopyretentionperiodrequest.h"
#include "modifysnapshotcopyretentionperiodrequest_p.h"
#include "modifysnapshotcopyretentionperiodresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  ModifySnapshotCopyRetentionPeriodRequest
 *
 * @brief  Implements Redshift ModifySnapshotCopyRetentionPeriod requests.
 *
 * @see    RedshiftClient::modifySnapshotCopyRetentionPeriod
 */

/**
 * @brief  Constructs a new ModifySnapshotCopyRetentionPeriodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifySnapshotCopyRetentionPeriodRequest::ModifySnapshotCopyRetentionPeriodRequest(const ModifySnapshotCopyRetentionPeriodRequest &other)
    : RedshiftRequest(new ModifySnapshotCopyRetentionPeriodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifySnapshotCopyRetentionPeriodRequest object.
 */
ModifySnapshotCopyRetentionPeriodRequest::ModifySnapshotCopyRetentionPeriodRequest()
    : RedshiftRequest(new ModifySnapshotCopyRetentionPeriodRequestPrivate(RedshiftRequest::ModifySnapshotCopyRetentionPeriodAction, this))
{

}

bool ModifySnapshotCopyRetentionPeriodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifySnapshotCopyRetentionPeriodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifySnapshotCopyRetentionPeriodResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifySnapshotCopyRetentionPeriodRequest::response(QNetworkReply * const reply) const
{
    return new ModifySnapshotCopyRetentionPeriodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifySnapshotCopyRetentionPeriodRequestPrivate
 *
 * @brief  Private implementation for ModifySnapshotCopyRetentionPeriodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifySnapshotCopyRetentionPeriodRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ModifySnapshotCopyRetentionPeriodRequest instance.
 */
ModifySnapshotCopyRetentionPeriodRequestPrivate::ModifySnapshotCopyRetentionPeriodRequestPrivate(
    const RedshiftRequest::Action action, ModifySnapshotCopyRetentionPeriodRequest * const q)
    : ModifySnapshotCopyRetentionPeriodPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifySnapshotCopyRetentionPeriodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifySnapshotCopyRetentionPeriodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifySnapshotCopyRetentionPeriodRequest instance.
 */
ModifySnapshotCopyRetentionPeriodRequestPrivate::ModifySnapshotCopyRetentionPeriodRequestPrivate(
    const ModifySnapshotCopyRetentionPeriodRequestPrivate &other, ModifySnapshotCopyRetentionPeriodRequest * const q)
    : ModifySnapshotCopyRetentionPeriodPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
