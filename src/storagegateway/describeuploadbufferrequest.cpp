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

#include "describeuploadbufferrequest.h"
#include "describeuploadbufferrequest_p.h"
#include "describeuploadbufferresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeUploadBufferRequest
 *
 * @brief  Implements StorageGateway DescribeUploadBuffer requests.
 *
 * @see    StorageGatewayClient::describeUploadBuffer
 */

/**
 * @brief  Constructs a new DescribeUploadBufferRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUploadBufferRequest::DescribeUploadBufferRequest(const DescribeUploadBufferRequest &other)
    : StorageGatewayRequest(new DescribeUploadBufferRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUploadBufferRequest object.
 */
DescribeUploadBufferRequest::DescribeUploadBufferRequest()
    : StorageGatewayRequest(new DescribeUploadBufferRequestPrivate(StorageGatewayRequest::DescribeUploadBufferAction, this))
{

}

bool DescribeUploadBufferRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUploadBufferResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUploadBufferResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUploadBufferRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUploadBufferResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUploadBufferRequestPrivate
 *
 * @brief  Private implementation for DescribeUploadBufferRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUploadBufferRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeUploadBufferRequest instance.
 */
DescribeUploadBufferRequestPrivate::DescribeUploadBufferRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeUploadBufferRequest * const q)
    : DescribeUploadBufferPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUploadBufferRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUploadBufferRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUploadBufferRequest instance.
 */
DescribeUploadBufferRequestPrivate::DescribeUploadBufferRequestPrivate(
    const DescribeUploadBufferRequestPrivate &other, DescribeUploadBufferRequest * const q)
    : DescribeUploadBufferPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
