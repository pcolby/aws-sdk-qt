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

#include "describecachediscsivolumesrequest.h"
#include "describecachediscsivolumesrequest_p.h"
#include "describecachediscsivolumesresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeCachediSCSIVolumesRequest
 *
 * @brief  Implements StorageGateway DescribeCachediSCSIVolumes requests.
 *
 * @see    StorageGatewayClient::describeCachediSCSIVolumes
 */

/**
 * @brief  Constructs a new DescribeCachediSCSIVolumesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCachediSCSIVolumesRequest::DescribeCachediSCSIVolumesRequest(const DescribeCachediSCSIVolumesRequest &other)
    : StorageGatewayRequest(new DescribeCachediSCSIVolumesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCachediSCSIVolumesRequest object.
 */
DescribeCachediSCSIVolumesRequest::DescribeCachediSCSIVolumesRequest()
    : StorageGatewayRequest(new DescribeCachediSCSIVolumesRequestPrivate(StorageGatewayRequest::DescribeCachediSCSIVolumesAction, this))
{

}

bool DescribeCachediSCSIVolumesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCachediSCSIVolumesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCachediSCSIVolumesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeCachediSCSIVolumesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCachediSCSIVolumesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCachediSCSIVolumesRequestPrivate
 *
 * @brief  Private implementation for DescribeCachediSCSIVolumesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCachediSCSIVolumesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeCachediSCSIVolumesRequest instance.
 */
DescribeCachediSCSIVolumesRequestPrivate::DescribeCachediSCSIVolumesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeCachediSCSIVolumesRequest * const q)
    : DescribeCachediSCSIVolumesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCachediSCSIVolumesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCachediSCSIVolumesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCachediSCSIVolumesRequest instance.
 */
DescribeCachediSCSIVolumesRequestPrivate::DescribeCachediSCSIVolumesRequestPrivate(
    const DescribeCachediSCSIVolumesRequestPrivate &other, DescribeCachediSCSIVolumesRequest * const q)
    : DescribeCachediSCSIVolumesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
