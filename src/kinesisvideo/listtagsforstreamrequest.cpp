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

#include "listtagsforstreamrequest.h"
#include "listtagsforstreamrequest_p.h"
#include "listtagsforstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace AWS {
namespace KinesisVideo {

/**
 * @class  ListTagsForStreamRequest
 *
 * @brief  Implements KinesisVideo ListTagsForStream requests.
 *
 * @see    KinesisVideoClient::listTagsForStream
 */

/**
 * @brief  Constructs a new ListTagsForStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForStreamRequest::ListTagsForStreamRequest(const ListTagsForStreamRequest &other)
    : KinesisVideoRequest(new ListTagsForStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForStreamRequest object.
 */
ListTagsForStreamRequest::ListTagsForStreamRequest()
    : KinesisVideoRequest(new ListTagsForStreamRequestPrivate(KinesisVideoRequest::ListTagsForStreamAction, this))
{

}

bool ListTagsForStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
AwsAbstractResponse * ListTagsForStreamRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForStreamRequestPrivate
 *
 * @brief  Private implementation for ListTagsForStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public ListTagsForStreamRequest instance.
 */
ListTagsForStreamRequestPrivate::ListTagsForStreamRequestPrivate(
    const KinesisVideoRequest::Action action, ListTagsForStreamRequest * const q)
    : ListTagsForStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForStreamRequest instance.
 */
ListTagsForStreamRequestPrivate::ListTagsForStreamRequestPrivate(
    const ListTagsForStreamRequestPrivate &other, ListTagsForStreamRequest * const q)
    : ListTagsForStreamPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace AWS
