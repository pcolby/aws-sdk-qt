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

#include "describemaintenancewindowtargetsrequest.h"
#include "describemaintenancewindowtargetsrequest_p.h"
#include "describemaintenancewindowtargetsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeMaintenanceWindowTargetsRequest
 *
 * @brief  Implements SSM DescribeMaintenanceWindowTargets requests.
 *
 * @see    SSMClient::describeMaintenanceWindowTargets
 */

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceWindowTargetsRequest::DescribeMaintenanceWindowTargetsRequest(const DescribeMaintenanceWindowTargetsRequest &other)
    : SSMRequest(new DescribeMaintenanceWindowTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsRequest object.
 */
DescribeMaintenanceWindowTargetsRequest::DescribeMaintenanceWindowTargetsRequest()
    : SSMRequest(new DescribeMaintenanceWindowTargetsRequestPrivate(SSMRequest::DescribeMaintenanceWindowTargetsAction, this))
{

}

bool DescribeMaintenanceWindowTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceWindowTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceWindowTargetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeMaintenanceWindowTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceWindowTargetsRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceWindowTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceWindowTargetsRequest instance.
 */
DescribeMaintenanceWindowTargetsRequestPrivate::DescribeMaintenanceWindowTargetsRequestPrivate(
    const SSMRequest::Action action, DescribeMaintenanceWindowTargetsRequest * const q)
    : DescribeMaintenanceWindowTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceWindowTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceWindowTargetsRequest instance.
 */
DescribeMaintenanceWindowTargetsRequestPrivate::DescribeMaintenanceWindowTargetsRequestPrivate(
    const DescribeMaintenanceWindowTargetsRequestPrivate &other, DescribeMaintenanceWindowTargetsRequest * const q)
    : DescribeMaintenanceWindowTargetsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
