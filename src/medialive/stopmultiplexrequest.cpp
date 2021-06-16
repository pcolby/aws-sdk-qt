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

#include "stopmultiplexrequest.h"
#include "stopmultiplexrequest_p.h"
#include "stopmultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StopMultiplexRequest
 * \brief The StopMultiplexRequest class provides an interface for MediaLive StopMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::stopMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
StopMultiplexRequest::StopMultiplexRequest(const StopMultiplexRequest &other)
    : MediaLiveRequest(new StopMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopMultiplexRequest object.
 */
StopMultiplexRequest::StopMultiplexRequest()
    : MediaLiveRequest(new StopMultiplexRequestPrivate(MediaLiveRequest::StopMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool StopMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new StopMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StopMultiplexRequestPrivate
 * \brief The StopMultiplexRequestPrivate class provides private implementation for StopMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StopMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StopMultiplexRequestPrivate::StopMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, StopMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopMultiplexRequest
 * class' copy constructor.
 */
StopMultiplexRequestPrivate::StopMultiplexRequestPrivate(
    const StopMultiplexRequestPrivate &other, StopMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
