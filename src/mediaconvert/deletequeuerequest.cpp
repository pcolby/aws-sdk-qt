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

#include "deletequeuerequest.h"
#include "deletequeuerequest_p.h"
#include "deletequeueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteQueueRequest
 * \brief The DeleteQueueRequest class provides an interface for MediaConvert DeleteQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deleteQueue
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQueueRequest::DeleteQueueRequest(const DeleteQueueRequest &other)
    : MediaConvertRequest(new DeleteQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQueueRequest object.
 */
DeleteQueueRequest::DeleteQueueRequest()
    : MediaConvertRequest(new DeleteQueueRequestPrivate(MediaConvertRequest::DeleteQueueAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DeleteQueueRequestPrivate
 * \brief The DeleteQueueRequestPrivate class provides private implementation for DeleteQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 *
 * Constructs a DeleteQueueRequestPrivate object for MediaConvert \a action with,
 * public implementation \a q.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const MediaConvertRequest::Action action, DeleteQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueueRequest
 * class' copy constructor.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const DeleteQueueRequestPrivate &other, DeleteQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
