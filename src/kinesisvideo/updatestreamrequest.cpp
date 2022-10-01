// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
