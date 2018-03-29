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

#include "getitemrequest.h"
#include "getitemrequest_p.h"
#include "getitemresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/**
 * @class  GetItemRequest
 *
 * @brief  Implements DynamoDB GetItem requests.
 *
 * @see    DynamoDBClient::getItem
 */

/**
 * @brief  Constructs a new GetItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetItemRequest::GetItemRequest(const GetItemRequest &other)
    : DynamoDBRequest(new GetItemRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetItemRequest object.
 */
GetItemRequest::GetItemRequest()
    : DynamoDBRequest(new GetItemRequestPrivate(DynamoDBRequest::GetItemAction, this))
{

}

bool GetItemRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetItemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * GetItemRequest::response(QNetworkReply * const reply) const
{
    return new GetItemResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetItemRequestPrivate
 *
 * @brief  Private implementation for GetItemRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public GetItemRequest instance.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const DynamoDBRequest::Action action, GetItemRequest * const q)
    : GetItemPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetItemRequest instance.
 */
GetItemRequestPrivate::GetItemRequestPrivate(
    const GetItemRequestPrivate &other, GetItemRequest * const q)
    : GetItemPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
