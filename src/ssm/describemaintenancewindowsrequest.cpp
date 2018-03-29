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

#include "describemaintenancewindowsrequest.h"
#include "describemaintenancewindowsrequest_p.h"
#include "describemaintenancewindowsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowsRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindows requests.
 *
 * @see    SSMClient::describeMaintenanceWindows
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowsRequest::DescribeMaintenanceWindowsRequest(const DescribeMaintenanceWindowsRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowsRequest object.
 */
DescribeMaintenanceWindowsRequest::DescribeMaintenanceWindowsRequest()
    : SSMRequest(new DescribeMaintenanceWindowsRequestPrivate(SSMRequest::DescribeMaintenanceWindowsAction, this))
{

}

bool DescribeMaintenanceWindowsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeMaintenanceWindowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowsRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowsRequest instance.
 */
DescribeMaintenanceWindowsRequestPrivate::DescribeMaintenanceWindowsRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowsRequest * const q)
    : DescribeMaintenanceWindowsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowsRequest instance.
 */
DescribeMaintenanceWindowsRequestPrivate::DescribeMaintenanceWindowsRequestPrivate(
    const DescribeMaintenanceWindowsRequestPrivate &other, DescribeMaintenanceWindowsRequest * const q)
    : DescribeMaintenanceWindowsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
