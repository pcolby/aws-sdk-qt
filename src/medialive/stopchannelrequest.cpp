/*
    Copyright 2013-2019 Paul Colby

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

#include "stopchannelrequest.h"
#include "stopchannelrequest_p.h"
#include "stopchannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StopChannelRequest
 * \brief The StopChannelRequest class provides an interface for MediaLive StopChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::stopChannel
 */

/*!
 * Constructs a copy of \a other.
 */
StopChannelRequest::StopChannelRequest(const StopChannelRequest &other)
    : MediaLiveRequest(new StopChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopChannelRequest object.
 */
StopChannelRequest::StopChannelRequest()
    : MediaLiveRequest(new StopChannelRequestPrivate(MediaLiveRequest::StopChannelAction, this))
{

}

/*!
 * \reimp
 */
bool StopChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopChannelRequest::response(QNetworkReply * const reply) const
{
    return new StopChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StopChannelRequestPrivate
 * \brief The StopChannelRequestPrivate class provides private implementation for StopChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StopChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StopChannelRequestPrivate::StopChannelRequestPrivate(
    const MediaLiveRequest::Action action, StopChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopChannelRequest
 * class' copy constructor.
 */
StopChannelRequestPrivate::StopChannelRequestPrivate(
    const StopChannelRequestPrivate &other, StopChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
