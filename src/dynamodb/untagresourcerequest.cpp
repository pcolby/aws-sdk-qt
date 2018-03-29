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

#include "untagresourcerequest.h"
#include "untagresourcerequest_p.h"
#include "untagresourceresponse.h"
#include "dynamodbrequest_p.h"

namespace AWS {
namespace DynamoDB {

/**
 * @class  UntagResourceRequest
 *
 * @brief  Implements DynamoDB UntagResource requests.
 *
 * @see    DynamoDBClient::untagResource
 */

/**
 * @brief  Constructs a new UntagResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourceRequest::UntagResourceRequest(const UntagResourceRequest &other)
    : DynamoDBRequest(new UntagResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagResourceRequest object.
 */
UntagResourceRequest::UntagResourceRequest()
    : DynamoDBRequest(new UntagResourceRequestPrivate(DynamoDBRequest::UntagResourceAction, this))
{

}

bool UntagResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
AwsAbstractResponse * UntagResourceRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagResourceRequestPrivate
 *
 * @brief  Private implementation for UntagResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const DynamoDBRequest::Action action, UntagResourceRequest * const q)
    : UntagResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourceRequest instance.
 */
UntagResourceRequestPrivate::UntagResourceRequestPrivate(
    const UntagResourceRequestPrivate &other, UntagResourceRequest * const q)
    : UntagResourcePrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace AWS
