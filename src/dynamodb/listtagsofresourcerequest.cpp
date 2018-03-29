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

#include "listtagsofresourcerequest.h"
#include "listtagsofresourcerequest_p.h"
#include "listtagsofresourceresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  ListTagsOfResourceRequest
 *
 * @brief  Implements DynamoDB ListTagsOfResource requests.
 *
 * @see    DynamoDBClient::listTagsOfResource
 */

/**
 * @brief  Constructs a new ListTagsOfResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsOfResourceRequest::ListTagsOfResourceRequest(const ListTagsOfResourceRequest &other)
    : DynamoDBRequest(new ListTagsOfResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsOfResourceRequest object.
 */
ListTagsOfResourceRequest::ListTagsOfResourceRequest()
    : DynamoDBRequest(new ListTagsOfResourceRequestPrivate(DynamoDBRequest::ListTagsOfResourceAction, this))
{

}

bool ListTagsOfResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsOfResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsOfResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * ListTagsOfResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsOfResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsOfResourceRequestPrivate
 *
 * @brief  Private implementation for ListTagsOfResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsOfResourceRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public ListTagsOfResourceRequest instance.
 */
ListTagsOfResourceRequestPrivate::ListTagsOfResourceRequestPrivate(
    const DynamoDBRequest::Action action, ListTagsOfResourceRequest * const q)
    : ListTagsOfResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsOfResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsOfResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsOfResourceRequest instance.
 */
ListTagsOfResourceRequestPrivate::ListTagsOfResourceRequestPrivate(
    const ListTagsOfResourceRequestPrivate &other, ListTagsOfResourceRequest * const q)
    : ListTagsOfResourcePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
