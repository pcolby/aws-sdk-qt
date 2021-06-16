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

#include "startmultiplexrequest.h"
#include "startmultiplexrequest_p.h"
#include "startmultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartMultiplexRequest
 * \brief The StartMultiplexRequest class provides an interface for MediaLive StartMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
StartMultiplexRequest::StartMultiplexRequest(const StartMultiplexRequest &other)
    : MediaLiveRequest(new StartMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMultiplexRequest object.
 */
StartMultiplexRequest::StartMultiplexRequest()
    : MediaLiveRequest(new StartMultiplexRequestPrivate(MediaLiveRequest::StartMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool StartMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new StartMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StartMultiplexRequestPrivate
 * \brief The StartMultiplexRequestPrivate class provides private implementation for StartMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StartMultiplexRequestPrivate::StartMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, StartMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMultiplexRequest
 * class' copy constructor.
 */
StartMultiplexRequestPrivate::StartMultiplexRequestPrivate(
    const StartMultiplexRequestPrivate &other, StartMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
