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

#include "getsignalingchannelendpointrequest.h"
#include "getsignalingchannelendpointrequest_p.h"
#include "getsignalingchannelendpointresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::GetSignalingChannelEndpointRequest
 * \brief The GetSignalingChannelEndpointRequest class provides an interface for KinesisVideo GetSignalingChannelEndpoint requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::getSignalingChannelEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetSignalingChannelEndpointRequest::GetSignalingChannelEndpointRequest(const GetSignalingChannelEndpointRequest &other)
    : KinesisVideoRequest(new GetSignalingChannelEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSignalingChannelEndpointRequest object.
 */
GetSignalingChannelEndpointRequest::GetSignalingChannelEndpointRequest()
    : KinesisVideoRequest(new GetSignalingChannelEndpointRequestPrivate(KinesisVideoRequest::GetSignalingChannelEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetSignalingChannelEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSignalingChannelEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSignalingChannelEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetSignalingChannelEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::GetSignalingChannelEndpointRequestPrivate
 * \brief The GetSignalingChannelEndpointRequestPrivate class provides private implementation for GetSignalingChannelEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a GetSignalingChannelEndpointRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
GetSignalingChannelEndpointRequestPrivate::GetSignalingChannelEndpointRequestPrivate(
    const KinesisVideoRequest::Action action, GetSignalingChannelEndpointRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSignalingChannelEndpointRequest
 * class' copy constructor.
 */
GetSignalingChannelEndpointRequestPrivate::GetSignalingChannelEndpointRequestPrivate(
    const GetSignalingChannelEndpointRequestPrivate &other, GetSignalingChannelEndpointRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
