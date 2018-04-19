/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startchannelrequest.h"
#include "startchannelrequest_p.h"
#include "startchannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartChannelRequest
 * \brief The StartChannelRequest class provides an interface for MediaLive StartChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startChannel
 */

/*!
 * Constructs a copy of \a other.
 */
StartChannelRequest::StartChannelRequest(const StartChannelRequest &other)
    : MediaLiveRequest(new StartChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartChannelRequest object.
 */
StartChannelRequest::StartChannelRequest()
    : MediaLiveRequest(new StartChannelRequestPrivate(MediaLiveRequest::StartChannelAction, this))
{

}

/*!
 * \reimp
 */
bool StartChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartChannelRequest::response(QNetworkReply * const reply) const
{
    return new StartChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StartChannelRequestPrivate
 * \brief The StartChannelRequestPrivate class provides private implementation for StartChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const MediaLiveRequest::Action action, StartChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartChannelRequest
 * class' copy constructor.
 */
StartChannelRequestPrivate::StartChannelRequestPrivate(
    const StartChannelRequestPrivate &other, StartChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
