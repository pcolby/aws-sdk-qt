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

#include "describemaintenancewindowexecutionsrequest.h"
#include "describemaintenancewindowexecutionsrequest_p.h"
#include "describemaintenancewindowexecutionsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowExecutionsRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindowExecutions requests.
 *
 * @see    SSMClient::describeMaintenanceWindowExecutions
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowExecutionsRequest::DescribeMaintenanceWindowExecutionsRequest(const DescribeMaintenanceWindowExecutionsRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionsRequest object.
 */
DescribeMaintenanceWindowExecutionsRequest::DescribeMaintenanceWindowExecutionsRequest()
    : SSMRequest(new DescribeMaintenanceWindowExecutionsRequestPrivate(SSMRequest::DescribeMaintenanceWindowExecutionsAction, this))
{

}

bool DescribeMaintenanceWindowExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowExecutionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMaintenanceWindowExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowExecutionsRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowExecutionsRequest instance.
 */
DescribeMaintenanceWindowExecutionsRequestPrivate::DescribeMaintenanceWindowExecutionsRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowExecutionsRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowExecutionsRequest instance.
 */
DescribeMaintenanceWindowExecutionsRequestPrivate::DescribeMaintenanceWindowExecutionsRequestPrivate(
    const DescribeMaintenanceWindowExecutionsRequestPrivate &other, DescribeMaintenanceWindowExecutionsRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
