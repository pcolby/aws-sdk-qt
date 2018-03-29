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

#include "batchwriterequest.h"
#include "batchwriterequest_p.h"
#include "batchwriteresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  BatchWriteRequest
 *
 * @brief  Implements CloudDirectory BatchWrite requests.
 *
 * @see    CloudDirectoryClient::batchWrite
 */

/**
 * @brief  Constructs a new BatchWriteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchWriteRequest::BatchWriteRequest(const BatchWriteRequest &other)
    : CloudDirectoryRequest(new BatchWriteRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchWriteRequest object.
 */
BatchWriteRequest::BatchWriteRequest()
    : CloudDirectoryRequest(new BatchWriteRequestPrivate(CloudDirectoryRequest::BatchWriteAction, this))
{

}

bool BatchWriteRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchWriteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchWriteResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * BatchWriteRequest::response(QNetworkReply * const reply) const
{
    return new BatchWriteResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchWriteRequestPrivate
 *
 * @brief  Private implementation for BatchWriteRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public BatchWriteRequest instance.
 */
BatchWriteRequestPrivate::BatchWriteRequestPrivate(
    const CloudDirectoryRequest::Action action, BatchWriteRequest * const q)
    : BatchWritePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchWriteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchWriteRequest instance.
 */
BatchWriteRequestPrivate::BatchWriteRequestPrivate(
    const BatchWriteRequestPrivate &other, BatchWriteRequest * const q)
    : BatchWritePrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
