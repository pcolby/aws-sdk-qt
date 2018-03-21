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

#include "describestorediscsivolumesrequest.h"
#include "describestorediscsivolumesrequest_p.h"
#include "describestorediscsivolumesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeStorediSCSIVolumesRequest
 *
 * @brief  Implements StorageGateway DescribeStorediSCSIVolumes requests.
 *
 * @see    StorageGatewayClient::describeStorediSCSIVolumes
 */

/**
 * @brief  Constructs a new DescribeStorediSCSIVolumesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStorediSCSIVolumesRequest::DescribeStorediSCSIVolumesRequest(const DescribeStorediSCSIVolumesRequest &other)
    : StorageGatewayRequest(new DescribeStorediSCSIVolumesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStorediSCSIVolumesRequest object.
 */
DescribeStorediSCSIVolumesRequest::DescribeStorediSCSIVolumesRequest()
    : StorageGatewayRequest(new DescribeStorediSCSIVolumesRequestPrivate(StorageGatewayRequest::DescribeStorediSCSIVolumesAction, this))
{

}

bool DescribeStorediSCSIVolumesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStorediSCSIVolumesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStorediSCSIVolumesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeStorediSCSIVolumesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStorediSCSIVolumesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStorediSCSIVolumesRequestPrivate
 *
 * @brief  Private implementation for DescribeStorediSCSIVolumesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStorediSCSIVolumesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeStorediSCSIVolumesRequest instance.
 */
DescribeStorediSCSIVolumesRequestPrivate::DescribeStorediSCSIVolumesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeStorediSCSIVolumesRequest * const q)
    : DescribeStorediSCSIVolumesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStorediSCSIVolumesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStorediSCSIVolumesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStorediSCSIVolumesRequest instance.
 */
DescribeStorediSCSIVolumesRequestPrivate::DescribeStorediSCSIVolumesRequestPrivate(
    const DescribeStorediSCSIVolumesRequestPrivate &other, DescribeStorediSCSIVolumesRequest * const q)
    : DescribeStorediSCSIVolumesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
