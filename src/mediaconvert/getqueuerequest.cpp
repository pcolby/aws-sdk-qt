/*
    Copyright 2013-2018 Paul Colby

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

#include "getqueuerequest.h"
#include "getqueuerequest_p.h"
#include "getqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetQueueRequest
 * \brief The GetQueueRequest class provides an interface for MediaConvert GetQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getQueue
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueueRequest::GetQueueRequest(const GetQueueRequest &other)
    : MediaConvertRequest(new GetQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueueRequest object.
 */
GetQueueRequest::GetQueueRequest()
    : MediaConvertRequest(new GetQueueRequestPrivate(MediaConvertRequest::GetQueueAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueueRequest::response(QNetworkReply * const reply) const
{
    return new GetQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::GetQueueRequestPrivate
 * \brief The GetQueueRequestPrivate class provides private implementation for GetQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetQueueRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
GetQueueRequestPrivate::GetQueueRequestPrivate(
    const MediaConvertRequest::Action action, GetQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueueRequest
 * class' copy constructor.
 */
GetQueueRequestPrivate::GetQueueRequestPrivate(
    const GetQueueRequestPrivate &other, GetQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
