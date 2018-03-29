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

#include "describemaintenancestarttimerequest.h"
#include "describemaintenancestarttimerequest_p.h"
#include "describemaintenancestarttimeresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeMaintenanceStartTimeRequest
 *
 * @brief  Implements StorageGateway DescribeMaintenanceStartTime requests.
 *
 * @see    StorageGatewayClient::describeMaintenanceStartTime
 */

/**
 * @brief  Constructs a new DescribeMaintenanceStartTimeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMaintenanceStartTimeRequest::DescribeMaintenanceStartTimeRequest(const DescribeMaintenanceStartTimeRequest &other)
    : StorageGatewayRequest(new DescribeMaintenanceStartTimeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMaintenanceStartTimeRequest object.
 */
DescribeMaintenanceStartTimeRequest::DescribeMaintenanceStartTimeRequest()
    : StorageGatewayRequest(new DescribeMaintenanceStartTimeRequestPrivate(StorageGatewayRequest::DescribeMaintenanceStartTimeAction, this))
{

}

bool DescribeMaintenanceStartTimeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMaintenanceStartTimeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMaintenanceStartTimeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMaintenanceStartTimeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceStartTimeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMaintenanceStartTimeRequestPrivate
 *
 * @brief  Private implementation for DescribeMaintenanceStartTimeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceStartTimeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeMaintenanceStartTimeRequest instance.
 */
DescribeMaintenanceStartTimeRequestPrivate::DescribeMaintenanceStartTimeRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeMaintenanceStartTimeRequest * const q)
    : DescribeMaintenanceStartTimePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMaintenanceStartTimeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceStartTimeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMaintenanceStartTimeRequest instance.
 */
DescribeMaintenanceStartTimeRequestPrivate::DescribeMaintenanceStartTimeRequestPrivate(
    const DescribeMaintenanceStartTimeRequestPrivate &other, DescribeMaintenanceStartTimeRequest * const q)
    : DescribeMaintenanceStartTimePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
