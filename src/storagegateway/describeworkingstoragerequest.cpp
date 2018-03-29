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

#include "describeworkingstoragerequest.h"
#include "describeworkingstoragerequest_p.h"
#include "describeworkingstorageresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeWorkingStorageRequest
 *
 * @brief  Implements StorageGateway DescribeWorkingStorage requests.
 *
 * @see    StorageGatewayClient::describeWorkingStorage
 */

/**
 * @brief  Constructs a new DescribeWorkingStorageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkingStorageRequest::DescribeWorkingStorageRequest(const DescribeWorkingStorageRequest &other)
    : StorageGatewayRequest(new DescribeWorkingStorageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkingStorageRequest object.
 */
DescribeWorkingStorageRequest::DescribeWorkingStorageRequest()
    : StorageGatewayRequest(new DescribeWorkingStorageRequestPrivate(StorageGatewayRequest::DescribeWorkingStorageAction, this))
{

}

bool DescribeWorkingStorageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkingStorageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkingStorageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeWorkingStorageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkingStorageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkingStorageRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkingStorageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkingStorageRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeWorkingStorageRequest instance.
 */
DescribeWorkingStorageRequestPrivate::DescribeWorkingStorageRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeWorkingStorageRequest * const q)
    : DescribeWorkingStoragePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkingStorageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkingStorageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkingStorageRequest instance.
 */
DescribeWorkingStorageRequestPrivate::DescribeWorkingStorageRequestPrivate(
    const DescribeWorkingStorageRequestPrivate &other, DescribeWorkingStorageRequest * const q)
    : DescribeWorkingStoragePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
