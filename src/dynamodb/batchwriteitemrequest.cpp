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

#include "batchwriteitemrequest.h"
#include "batchwriteitemrequest_p.h"
#include "batchwriteitemresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  BatchWriteItemRequest
 *
 * @brief  Implements DynamoDB BatchWriteItem requests.
 *
 * @see    DynamoDBClient::batchWriteItem
 */

/**
 * @brief  Constructs a new BatchWriteItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchWriteItemResponse::BatchWriteItemResponse(

/**
 * @brief  Constructs a new BatchWriteItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchWriteItemRequest::BatchWriteItemRequest(const BatchWriteItemRequest &other)
    : DynamoDBRequest(new BatchWriteItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchWriteItemRequest object.
 */
BatchWriteItemRequest::BatchWriteItemRequest()
    : DynamoDBRequest(new BatchWriteItemRequestPrivate(DynamoDBRequest::BatchWriteItemAction, this))
{

}

bool BatchWriteItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchWriteItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchWriteItemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * BatchWriteItemRequest::response(QNetworkReply * const reply) const
{
    return new BatchWriteItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchWriteItemRequestPrivate
 *
 * @brief  Private implementation for BatchWriteItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public BatchWriteItemRequest instance.
 */
BatchWriteItemRequestPrivate::BatchWriteItemRequestPrivate(
    const DynamoDBRequest::Action action, BatchWriteItemRequest * const q)
    : BatchWriteItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchWriteItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchWriteItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchWriteItemRequest instance.
 */
BatchWriteItemRequestPrivate::BatchWriteItemRequestPrivate(
    const BatchWriteItemRequestPrivate &other, BatchWriteItemRequest * const q)
    : BatchWriteItemPrivate(other, q)
{

}
