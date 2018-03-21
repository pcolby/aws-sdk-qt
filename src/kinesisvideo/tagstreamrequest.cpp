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

#include "tagstreamrequest.h"
#include "tagstreamrequest_p.h"
#include "tagstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace AWS {
namespace KinesisVideo {

/**
 * @class  TagStreamRequest
 *
 * @brief  Implements KinesisVideo TagStream requests.
 *
 * @see    KinesisVideoClient::tagStream
 */

/**
 * @brief  Constructs a new TagStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TagStreamRequest::TagStreamRequest(const TagStreamRequest &other)
    : KinesisVideoRequest(new TagStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TagStreamRequest object.
 */
TagStreamRequest::TagStreamRequest()
    : KinesisVideoRequest(new TagStreamRequestPrivate(KinesisVideoRequest::TagStreamAction, this))
{

}

bool TagStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TagStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TagStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  KinesisVideoClient::send
 */
AwsAbstractResponse * TagStreamRequest::response(QNetworkReply * const reply) const
{
    return new TagStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TagStreamRequestPrivate
 *
 * @brief  Private implementation for TagStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagStreamRequestPrivate object.
 *
 * @param  action  KinesisVideo action being performed.
 * @param  q       Pointer to this object's public TagStreamRequest instance.
 */
TagStreamRequestPrivate::TagStreamRequestPrivate(
    const KinesisVideoRequest::Action action, TagStreamRequest * const q)
    : TagStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TagStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TagStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TagStreamRequest instance.
 */
TagStreamRequestPrivate::TagStreamRequestPrivate(
    const TagStreamRequestPrivate &other, TagStreamRequest * const q)
    : TagStreamPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace AWS
