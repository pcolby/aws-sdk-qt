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

#include "deletesignalingchannelrequest.h"
#include "deletesignalingchannelrequest_p.h"
#include "deletesignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelRequest
 * \brief The DeleteSignalingChannelRequest class provides an interface for KinesisVideo DeleteSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::deleteSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSignalingChannelRequest::DeleteSignalingChannelRequest(const DeleteSignalingChannelRequest &other)
    : KinesisVideoRequest(new DeleteSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSignalingChannelRequest object.
 */
DeleteSignalingChannelRequest::DeleteSignalingChannelRequest()
    : KinesisVideoRequest(new DeleteSignalingChannelRequestPrivate(KinesisVideoRequest::DeleteSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DeleteSignalingChannelRequestPrivate
 * \brief The DeleteSignalingChannelRequestPrivate class provides private implementation for DeleteSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DeleteSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DeleteSignalingChannelRequestPrivate::DeleteSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, DeleteSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSignalingChannelRequest
 * class' copy constructor.
 */
DeleteSignalingChannelRequestPrivate::DeleteSignalingChannelRequestPrivate(
    const DeleteSignalingChannelRequestPrivate &other, DeleteSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
