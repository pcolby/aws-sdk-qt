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

#include "describemaintenancewindowtasksrequest.h"
#include "describemaintenancewindowtasksrequest_p.h"
#include "describemaintenancewindowtasksresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowTasksRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindowTasks requests.
 *
 * @see    SSMClient::describeMaintenanceWindowTasks
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowTasksRequest::DescribeMaintenanceWindowTasksRequest(const DescribeMaintenanceWindowTasksRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTasksRequest object.
 */
DescribeMaintenanceWindowTasksRequest::DescribeMaintenanceWindowTasksRequest()
    : SSMRequest(new DescribeMaintenanceWindowTasksRequestPrivate(SSMRequest::DescribeMaintenanceWindowTasksAction, this))
{

}

bool DescribeMaintenanceWindowTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeMaintenanceWindowTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTasksRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowTasksRequest instance.
 */
DescribeMaintenanceWindowTasksRequestPrivate::DescribeMaintenanceWindowTasksRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowTasksRequest * const q)
    : DescribeMaintenanceWindowTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowTasksRequest instance.
 */
DescribeMaintenanceWindowTasksRequestPrivate::DescribeMaintenanceWindowTasksRequestPrivate(
    const DescribeMaintenanceWindowTasksRequestPrivate &other, DescribeMaintenanceWindowTasksRequest * const q)
    : DescribeMaintenanceWindowTasksPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
