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

#include "updatequeuerequest.h"
#include "updatequeuerequest_p.h"
#include "updatequeueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdateQueueRequest
 *
 * \brief The UpdateQueueRequest class encapsulates MediaConvert UpdateQueue requests.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::updateQueue
 */

/*!
 * @brief  Constructs a new UpdateQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateQueueRequest::UpdateQueueRequest(const UpdateQueueRequest &other)
    : MediaConvertRequest(new UpdateQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateQueueRequest object.
 */
UpdateQueueRequest::UpdateQueueRequest()
    : MediaConvertRequest(new UpdateQueueRequestPrivate(MediaConvertRequest::UpdateQueueAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQueueRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateQueueResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaConvertClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQueueRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQueueResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateQueueRequestPrivate
 *
 * @brief  Private implementation for UpdateQueueRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateQueueRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed.
 * @param  q       Pointer to this object's public UpdateQueueRequest instance.
 */
UpdateQueueRequestPrivate::UpdateQueueRequestPrivate(
    const MediaConvertRequest::Action action, UpdateQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
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
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
