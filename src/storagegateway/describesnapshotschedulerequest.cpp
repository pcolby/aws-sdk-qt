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

#include "describesnapshotschedulerequest.h"
#include "describesnapshotschedulerequest_p.h"
#include "describesnapshotscheduleresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeSnapshotScheduleRequest
 *
 * @brief  Implements StorageGateway DescribeSnapshotSchedule requests.
 *
 * @see    StorageGatewayClient::describeSnapshotSchedule
 */

/**
 * @brief  Constructs a new DescribeSnapshotScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSnapshotScheduleRequest::DescribeSnapshotScheduleRequest(const DescribeSnapshotScheduleRequest &other)
    : StorageGatewayRequest(new DescribeSnapshotScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSnapshotScheduleRequest object.
 */
DescribeSnapshotScheduleRequest::DescribeSnapshotScheduleRequest()
    : StorageGatewayRequest(new DescribeSnapshotScheduleRequestPrivate(StorageGatewayRequest::DescribeSnapshotScheduleAction, this))
{

}

bool DescribeSnapshotScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSnapshotScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSnapshotScheduleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeSnapshotScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSnapshotScheduleRequestPrivate
 *
 * @brief  Private implementation for DescribeSnapshotScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotScheduleRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeSnapshotScheduleRequest instance.
 */
DescribeSnapshotScheduleRequestPrivate::DescribeSnapshotScheduleRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeSnapshotScheduleRequest * const q)
    : DescribeSnapshotSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSnapshotScheduleRequest instance.
 */
DescribeSnapshotScheduleRequestPrivate::DescribeSnapshotScheduleRequestPrivate(
    const DescribeSnapshotScheduleRequestPrivate &other, DescribeSnapshotScheduleRequest * const q)
    : DescribeSnapshotSchedulePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
