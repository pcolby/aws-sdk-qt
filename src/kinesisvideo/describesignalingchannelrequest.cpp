/*
    Copyright 2013-2021 Paul Colby

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
