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

#include "batchgetitemrequest.h"
#include "batchgetitemrequest_p.h"
#include "batchgetitemresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  BatchGetItemRequest
 *
 * @brief  Implements DynamoDB BatchGetItem requests.
 *
 * @see    DynamoDBClient::batchGetItem
 */

/**
 * @brief  Constructs a new BatchGetItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetItemResponse::BatchGetItemResponse(

/**
 * @brief  Constructs a new BatchGetItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetItemRequest::BatchGetItemRequest(const BatchGetItemRequest &other)
    : DynamoDBRequest(new BatchGetItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetItemRequest object.
 */
BatchGetItemRequest::BatchGetItemRequest()
    : DynamoDBRequest(new BatchGetItemRequestPrivate(DynamoDBRequest::BatchGetItemAction, this))
{

}

bool BatchGetItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetItemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * BatchGetItemRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetItemRequestPrivate
 *
 * @brief  Private implementation for BatchGetItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public BatchGetItemRequest instance.
 */
BatchGetItemRequestPrivate::BatchGetItemRequestPrivate(
    const DynamoDBRequest::Action action, BatchGetItemRequest * const q)
    : BatchGetItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetItemRequest instance.
 */
BatchGetItemRequestPrivate::BatchGetItemRequestPrivate(
    const BatchGetItemRequestPrivate &other, BatchGetItemRequest * const q)
    : BatchGetItemPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
