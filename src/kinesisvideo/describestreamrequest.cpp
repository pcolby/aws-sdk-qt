// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeStreamRequest
 * \brief The DescribeStreamRequest class provides an interface for KinesisVideo DescribeStream requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeStream
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : KinesisVideoRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : KinesisVideoRequest(new DescribeStreamRequestPrivate(KinesisVideoRequest::DescribeStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DescribeStreamRequestPrivate
 * \brief The DescribeStreamRequestPrivate class provides private implementation for DescribeStreamRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeStreamRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeStreamRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamRequest
 * class' copy constructor.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DescribeStreamRequestPrivate &other, DescribeStreamRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
