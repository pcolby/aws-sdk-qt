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

#include "describemaintenancewindowexecutiontaskinvocationsrequest.h"
#include "describemaintenancewindowexecutiontaskinvocationsrequest_p.h"
#include "describemaintenancewindowexecutiontaskinvocationsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionTaskInvocationsRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindowExecutionTaskInvocations requests.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutionTaskInvocations
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsRequest::DescribeMaintenanceWindowExecutionTaskInvocationsRequest(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsRequest object.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsRequest::DescribeMaintenanceWindowExecutionTaskInvocationsRequest()
    : SSMRequest(new DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(SSMRequest::DescribeMaintenanceWindowExecutionTaskInvocationsAction, this))
{

}

bool DescribeMaintenanceWindowExecutionTaskInvocationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowExecutionTaskInvocationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowExecutionTaskInvocationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeMaintenanceWindowExecutionTaskInvocationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowExecutionTaskInvocationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionTaskInvocationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowExecutionTaskInvocationsRequest instance.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate::DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowExecutionTaskInvocationsRequest * const q)
    : DescribeMaintenanceWindowExecutionTaskInvocationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowExecutionTaskInvocationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowExecutionTaskInvocationsRequest instance.
 */
DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate::DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate(
    const DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate &other, DescribeMaintenanceWindowExecutionTaskInvocationsRequest * const q)
    : DescribeMaintenanceWindowExecutionTaskInvocationsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
