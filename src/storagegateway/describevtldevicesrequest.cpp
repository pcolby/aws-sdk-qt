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

#include "describevtldevicesrequest.h"
#include "describevtldevicesrequest_p.h"
#include "describevtldevicesresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeVTLDevicesRequest
 *
 * @brief  Implements StorageGateway DescribeVTLDevices requests.
 *
 * @see    StorageGatewayClient::describeVTLDevices
 */

/**
 * @brief  Constructs a new DescribeVTLDevicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVTLDevicesRequest::DescribeVTLDevicesRequest(const DescribeVTLDevicesRequest &other)
    : StorageGatewayRequest(new DescribeVTLDevicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVTLDevicesRequest object.
 */
DescribeVTLDevicesRequest::DescribeVTLDevicesRequest()
    : StorageGatewayRequest(new DescribeVTLDevicesRequestPrivate(StorageGatewayRequest::DescribeVTLDevicesAction, this))
{

}

bool DescribeVTLDevicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVTLDevicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVTLDevicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVTLDevicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVTLDevicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVTLDevicesRequestPrivate
 *
 * @brief  Private implementation for DescribeVTLDevicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVTLDevicesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeVTLDevicesRequest instance.
 */
DescribeVTLDevicesRequestPrivate::DescribeVTLDevicesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeVTLDevicesRequest * const q)
    : DescribeVTLDevicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVTLDevicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVTLDevicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVTLDevicesRequest instance.
 */
DescribeVTLDevicesRequestPrivate::DescribeVTLDevicesRequestPrivate(
    const DescribeVTLDevicesRequestPrivate &other, DescribeVTLDevicesRequest * const q)
    : DescribeVTLDevicesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
