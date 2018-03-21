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

#include "deleteitemrequest.h"
#include "deleteitemrequest_p.h"
#include "deleteitemresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  DeleteItemRequest
 *
 * @brief  Implements DynamoDB DeleteItem requests.
 *
 * @see    DynamoDBClient::deleteItem
 */

/**
 * @brief  Constructs a new DeleteItemResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteItemResponse::DeleteItemResponse(

/**
 * @brief  Constructs a new DeleteItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteItemRequest::DeleteItemRequest(const DeleteItemRequest &other)
    : DynamoDBRequest(new DeleteItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteItemRequest object.
 */
DeleteItemRequest::DeleteItemRequest()
    : DynamoDBRequest(new DeleteItemRequestPrivate(DynamoDBRequest::DeleteItemAction, this))
{

}

bool DeleteItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteItemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * DeleteItemRequest::response(QNetworkReply * const reply) const
{
    return new DeleteItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteItemRequestPrivate
 *
 * @brief  Private implementation for DeleteItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public DeleteItemRequest instance.
 */
DeleteItemRequestPrivate::DeleteItemRequestPrivate(
    const DynamoDBRequest::Action action, DeleteItemRequest * const q)
    : DeleteItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteItemRequest instance.
 */
DeleteItemRequestPrivate::DeleteItemRequestPrivate(
    const DeleteItemRequestPrivate &other, DeleteItemRequest * const q)
    : DeleteItemPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
