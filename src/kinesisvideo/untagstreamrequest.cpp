// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
