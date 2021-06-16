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

#include "createsignalingchannelrequest.h"
#include "createsignalingchannelrequest_p.h"
#include "createsignalingchannelresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelRequest
 * \brief The CreateSignalingChannelRequest class provides an interface for KinesisVideo CreateSignalingChannel requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::createSignalingChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSignalingChannelRequest::CreateSignalingChannelRequest(const CreateSignalingChannelRequest &other)
    : KinesisVideoRequest(new CreateSignalingChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSignalingChannelRequest object.
 */
CreateSignalingChannelRequest::CreateSignalingChannelRequest()
    : KinesisVideoRequest(new CreateSignalingChannelRequestPrivate(KinesisVideoRequest::CreateSignalingChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSignalingChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSignalingChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSignalingChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateSignalingChannelResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::CreateSignalingChannelRequestPrivate
 * \brief The CreateSignalingChannelRequestPrivate class provides private implementation for CreateSignalingChannelRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a CreateSignalingChannelRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
CreateSignalingChannelRequestPrivate::CreateSignalingChannelRequestPrivate(
    const KinesisVideoRequest::Action action, CreateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSignalingChannelRequest
 * class' copy constructor.
 */
CreateSignalingChannelRequestPrivate::CreateSignalingChannelRequestPrivate(
    const CreateSignalingChannelRequestPrivate &other, CreateSignalingChannelRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
