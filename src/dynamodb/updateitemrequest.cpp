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

#include "updateitemrequest.h"
#include "updateitemrequest_p.h"
#include "updateitemresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  UpdateItemRequest
 *
 * @brief  Implements DynamoDB UpdateItem requests.
 *
 * @see    DynamoDBClient::updateItem
 */

/**
 * @brief  Constructs a new UpdateItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateItemRequest::UpdateItemRequest(const UpdateItemRequest &other)
    : DynamoDBRequest(new UpdateItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateItemRequest object.
 */
UpdateItemRequest::UpdateItemRequest()
    : DynamoDBRequest(new UpdateItemRequestPrivate(DynamoDBRequest::UpdateItemAction, this))
{

}

bool UpdateItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateItemResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * UpdateItemRequest::response(QNetworkReply * const reply) const
{
    return new UpdateItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateItemRequestPrivate
 *
 * @brief  Private implementation for UpdateItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UpdateItemRequest instance.
 */
UpdateItemRequestPrivate::UpdateItemRequestPrivate(
    const DynamoDBRequest::Action action, UpdateItemRequest * const q)
    : UpdateItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateItemRequest instance.
 */
UpdateItemRequestPrivate::UpdateItemRequestPrivate(
    const UpdateItemRequestPrivate &other, UpdateItemRequest * const q)
    : UpdateItemPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
