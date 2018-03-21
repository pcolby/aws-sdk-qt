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

#include "updatequeuerequest.h"
#include "updatequeuerequest_p.h"
#include "updatequeueresponse.h"
#include "mediaconvertrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  UpdateQueueRequest
 *
 * @brief  Implements MediaConvert UpdateQueue requests.
 *
 * @see    MediaConvertClient::updateQueue
 */

/**
 * @brief  Constructs a new UpdateQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateQueueResponse::UpdateQueueResponse(

/**
 * @brief  Constructs a new UpdateQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateQueueRequest::UpdateQueueRequest(const UpdateQueueRequest &other)
    : MediaConvertRequest(new UpdateQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateQueueRequest object.
 */
UpdateQueueRequest::UpdateQueueRequest()
    : MediaConvertRequest(new UpdateQueueRequestPrivate(MediaConvertRequest::UpdateQueueAction, this))
{

}

bool UpdateQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * UpdateQueueRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateQueueRequestPrivate
 *
 * @brief  Private implementation for UpdateQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateQueueRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public UpdateQueueRequest instance.
 */
UpdateQueueRequestPrivate::UpdateQueueRequestPrivate(
    const MediaConvertRequest::Action action, UpdateQueueRequest * const q)
    : UpdateQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateQueueRequest instance.
 */
UpdateQueueRequestPrivate::UpdateQueueRequestPrivate(
    const UpdateQueueRequestPrivate &other, UpdateQueueRequest * const q)
    : UpdateQueuePrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace AWS
