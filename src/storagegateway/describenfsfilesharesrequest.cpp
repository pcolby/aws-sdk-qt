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

#include "describenfsfilesharesrequest.h"
#include "describenfsfilesharesrequest_p.h"
#include "describenfsfilesharesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeNFSFileSharesRequest
 *
 * @brief  Implements StorageGateway DescribeNFSFileShares requests.
 *
 * @see    StorageGatewayClient::describeNFSFileShares
 */

/**
 * @brief  Constructs a new DescribeNFSFileSharesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeNFSFileSharesRequest::DescribeNFSFileSharesRequest(const DescribeNFSFileSharesRequest &other)
    : StorageGatewayRequest(new DescribeNFSFileSharesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeNFSFileSharesRequest object.
 */
DescribeNFSFileSharesRequest::DescribeNFSFileSharesRequest()
    : StorageGatewayRequest(new DescribeNFSFileSharesRequestPrivate(StorageGatewayRequest::DescribeNFSFileSharesAction, this))
{

}

bool DescribeNFSFileSharesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeNFSFileSharesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeNFSFileSharesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeNFSFileSharesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNFSFileSharesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeNFSFileSharesRequestPrivate
 *
 * @brief  Private implementation for DescribeNFSFileSharesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNFSFileSharesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeNFSFileSharesRequest instance.
 */
DescribeNFSFileSharesRequestPrivate::DescribeNFSFileSharesRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeNFSFileSharesRequest * const q)
    : DescribeNFSFileSharesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNFSFileSharesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeNFSFileSharesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeNFSFileSharesRequest instance.
 */
DescribeNFSFileSharesRequestPrivate::DescribeNFSFileSharesRequestPrivate(
    const DescribeNFSFileSharesRequestPrivate &other, DescribeNFSFileSharesRequest * const q)
    : DescribeNFSFileSharesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
