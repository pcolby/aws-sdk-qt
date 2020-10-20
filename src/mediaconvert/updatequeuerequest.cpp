/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatequeuerequest.h"
#include "updatequeuerequest_p.h"
#include "updatequeueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdateQueueRequest
 * \brief The UpdateQueueRequest class provides an interface for MediaConvert UpdateQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updateQueue
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQueueRequest::UpdateQueueRequest(const UpdateQueueRequest &other)
    : MediaConvertRequest(new UpdateQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQueueRequest object.
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
 * Returns a UpdateQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQueueRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::UpdateQueueRequestPrivate
 * \brief The UpdateQueueRequestPrivate class provides private implementation for UpdateQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdateQueueRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
UpdateQueueRequestPrivate::UpdateQueueRequestPrivate(
    const MediaConvertRequest::Action action, UpdateQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQueueRequest
 * class' copy constructor.
 */
UpdateQueueRequestPrivate::UpdateQueueRequestPrivate(
    const UpdateQueueRequestPrivate &other, UpdateQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
