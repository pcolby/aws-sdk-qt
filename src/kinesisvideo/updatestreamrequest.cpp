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

#include "updatestreamrequest.h"
#include "updatestreamrequest_p.h"
#include "updatestreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateStreamRequest
 * \brief The UpdateStreamRequest class provides an interface for KinesisVideo UpdateStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateStream
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStreamRequest::UpdateStreamRequest(const UpdateStreamRequest &other)
    : KinesisVideoRequest(new UpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStreamRequest object.
 */
UpdateStreamRequest::UpdateStreamRequest()
    : KinesisVideoRequest(new UpdateStreamRequestPrivate(KinesisVideoRequest::UpdateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UpdateStreamRequestPrivate
 * \brief The UpdateStreamRequestPrivate class provides private implementation for UpdateStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const KinesisVideoRequest::Action action, UpdateStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamRequest
 * class' copy constructor.
 */
UpdateStreamRequestPrivate::UpdateStreamRequestPrivate(
    const UpdateStreamRequestPrivate &other, UpdateStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
