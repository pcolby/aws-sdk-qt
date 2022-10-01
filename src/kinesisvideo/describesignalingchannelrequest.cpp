// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesignalingchannelrequest.h"
#include "describesignalingchannelrequest_p.h"
#include "describesignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeSignalingChannelRequest
 * \brief The DescribeSignalingChannelRequest class provides an interface for KinesisVideo DescribeSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSignalingChannelRequest::DescribeSignalingChannelRequest(const DescribeSignalingChannelRequest &other)
    : KinesisVideoRequest(new DescribeSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSignalingChannelRequest object.
 */
DescribeSignalingChannelRequest::DescribeSignalingChannelRequest()
    : KinesisVideoRequest(new DescribeSignalingChannelRequestPrivate(KinesisVideoRequest::DescribeSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DescribeSignalingChannelRequestPrivate
 * \brief The DescribeSignalingChannelRequestPrivate class provides private implementation for DescribeSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DescribeSignalingChannelRequestPrivate::DescribeSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSignalingChannelRequest
 * class' copy constructor.
 */
DescribeSignalingChannelRequestPrivate::DescribeSignalingChannelRequestPrivate(
    const DescribeSignalingChannelRequestPrivate &other, DescribeSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
