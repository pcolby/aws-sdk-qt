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

#include "describemaintenancewindowexecutiontasksrequest.h"
#include "describemaintenancewindowexecutiontasksrequest_p.h"
#include "describemaintenancewindowexecutiontasksresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionTasksRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindowExecutionTasks requests.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutionTasks
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMaintenanceWindowExecutionTasksResponse::DescribeMaintenanceWindowExecutionTasksResponse(

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowExecutionTasksRequest::DescribeMaintenanceWindowExecutionTasksRequest(const DescribeMaintenanceWindowExecutionTasksRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowExecutionTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksRequest object.
 */
DescribeMaintenanceWindowExecutionTasksRequest::DescribeMaintenanceWindowExecutionTasksRequest()
    : SSMRequest(new DescribeMaintenanceWindowExecutionTasksRequestPrivate(SSMRequest::DescribeMaintenanceWindowExecutionTasksAction, this))
{

}

bool DescribeMaintenanceWindowExecutionTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowExecutionTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowExecutionTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeMaintenanceWindowExecutionTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowExecutionTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowExecutionTasksRequest instance.
 */
DescribeMaintenanceWindowExecutionTasksRequestPrivate::DescribeMaintenanceWindowExecutionTasksRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowExecutionTasksRequest * const q)
    : DescribeMaintenanceWindowExecutionTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowExecutionTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowExecutionTasksRequest instance.
 */
DescribeMaintenanceWindowExecutionTasksRequestPrivate::DescribeMaintenanceWindowExecutionTasksRequestPrivate(
    const DescribeMaintenanceWindowExecutionTasksRequestPrivate &other, DescribeMaintenanceWindowExecutionTasksRequest * const q)
    : DescribeMaintenanceWindowExecutionTasksPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
