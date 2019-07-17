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

#include "tagstreamrequest.h"
#include "tagstreamrequest_p.h"
#include "tagstreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::TagStreamRequest
 * \brief The TagStreamRequest class provides an interface for KinesisVideo TagStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::tagStream
 */

/*!
 * Constructs a copy of \a other.
 */
TagStreamRequest::TagStreamRequest(const TagStreamRequest &other)
    : KinesisVideoRequest(new TagStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagStreamRequest object.
 */
TagStreamRequest::TagStreamRequest()
    : KinesisVideoRequest(new TagStreamRequestPrivate(KinesisVideoRequest::TagStreamAction, this))
{

}

/*!
 * \reimp
 */
bool TagStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagStreamRequest::response(QNetworkReply * const reply) const
{
    return new TagStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::TagStreamRequestPrivate
 * \brief The TagStreamRequestPrivate class provides private implementation for TagStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a TagStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
TagStreamRequestPrivate::TagStreamRequestPrivate(
    const KinesisVideoRequest::Action action, TagStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagStreamRequest
 * class' copy constructor.
 */
TagStreamRequestPrivate::TagStreamRequestPrivate(
    const TagStreamRequestPrivate &other, TagStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
