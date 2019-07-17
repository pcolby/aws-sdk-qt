/*
    Copyright 2013-2019 Paul Colby

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

#include "untagstreamrequest.h"
#include "untagstreamrequest_p.h"
#include "untagstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UntagStreamRequest
 * \brief The UntagStreamRequest class provides an interface for KinesisVideo UntagStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::untagStream
 */

/*!
 * Constructs a copy of \a other.
 */
UntagStreamRequest::UntagStreamRequest(const UntagStreamRequest &other)
    : KinesisVideoRequest(new UntagStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagStreamRequest object.
 */
UntagStreamRequest::UntagStreamRequest()
    : KinesisVideoRequest(new UntagStreamRequestPrivate(KinesisVideoRequest::UntagStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UntagStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagStreamRequest::response(QNetworkReply * const reply) const
{
    return new UntagStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::UntagStreamRequestPrivate
 * \brief The UntagStreamRequestPrivate class provides private implementation for UntagStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UntagStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
UntagStreamRequestPrivate::UntagStreamRequestPrivate(
    const KinesisVideoRequest::Action action, UntagStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagStreamRequest
 * class' copy constructor.
 */
UntagStreamRequestPrivate::UntagStreamRequestPrivate(
    const UntagStreamRequestPrivate &other, UntagStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
