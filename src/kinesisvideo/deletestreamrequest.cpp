// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamrequest.h"
#include "deletestreamrequest_p.h"
#include "deletestreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DeleteStreamRequest
 * \brief The DeleteStreamRequest class provides an interface for KinesisVideo DeleteStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::deleteStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamRequest::DeleteStreamRequest(const DeleteStreamRequest &other)
    : KinesisVideoRequest(new DeleteStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamRequest object.
 */
DeleteStreamRequest::DeleteStreamRequest()
    : KinesisVideoRequest(new DeleteStreamRequestPrivate(KinesisVideoRequest::DeleteStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DeleteStreamRequestPrivate
 * \brief The DeleteStreamRequestPrivate class provides private implementation for DeleteStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DeleteStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const KinesisVideoRequest::Action action, DeleteStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamRequest
 * class' copy constructor.
 */
DeleteStreamRequestPrivate::DeleteStreamRequestPrivate(
    const DeleteStreamRequestPrivate &other, DeleteStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
