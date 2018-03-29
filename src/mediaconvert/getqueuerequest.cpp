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

#include "getqueuerequest.h"
#include "getqueuerequest_p.h"
#include "getqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/**
 * @class  GetQueueRequest
 *
 * @brief  Implements MediaConvert GetQueue requests.
 *
 * @see    MediaConvertClient::getQueue
 */

/**
 * @brief  Constructs a new GetQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetQueueRequest::GetQueueRequest(const GetQueueRequest &other)
    : MediaConvertRequest(new GetQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetQueueRequest object.
 */
GetQueueRequest::GetQueueRequest()
    : MediaConvertRequest(new GetQueueRequestPrivate(MediaConvertRequest::GetQueueAction, this))
{

}

bool GetQueueRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
AwsAbstractResponse * GetQueueRequest::response(QNetworkReply * const reply) const
{
    return new GetQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetQueueRequestPrivate
 *
 * @brief  Private implementation for GetQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public GetQueueRequest instance.
 */
GetQueueRequestPrivate::GetQueueRequestPrivate(
    const MediaConvertRequest::Action action, GetQueueRequest * const q)
    : GetQueuePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetQueueRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetQueueRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetQueueRequest instance.
 */
GetQueueRequestPrivate::GetQueueRequestPrivate(
    const GetQueueRequestPrivate &other, GetQueueRequest * const q)
    : GetQueuePrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
