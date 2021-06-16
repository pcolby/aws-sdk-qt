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

#include "updatemultiplexrequest.h"
#include "updatemultiplexrequest_p.h"
#include "updatemultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexRequest
 * \brief The UpdateMultiplexRequest class provides an interface for MediaLive UpdateMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMultiplexRequest::UpdateMultiplexRequest(const UpdateMultiplexRequest &other)
    : MediaLiveRequest(new UpdateMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMultiplexRequest object.
 */
UpdateMultiplexRequest::UpdateMultiplexRequest()
    : MediaLiveRequest(new UpdateMultiplexRequestPrivate(MediaLiveRequest::UpdateMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexRequestPrivate
 * \brief The UpdateMultiplexRequestPrivate class provides private implementation for UpdateMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateMultiplexRequestPrivate::UpdateMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, UpdateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMultiplexRequest
 * class' copy constructor.
 */
UpdateMultiplexRequestPrivate::UpdateMultiplexRequestPrivate(
    const UpdateMultiplexRequestPrivate &other, UpdateMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
