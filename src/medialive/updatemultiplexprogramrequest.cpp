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

#include "updatemultiplexprogramrequest.h"
#include "updatemultiplexprogramrequest_p.h"
#include "updatemultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramRequest
 * \brief The UpdateMultiplexProgramRequest class provides an interface for MediaLive UpdateMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMultiplexProgramRequest::UpdateMultiplexProgramRequest(const UpdateMultiplexProgramRequest &other)
    : MediaLiveRequest(new UpdateMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMultiplexProgramRequest object.
 */
UpdateMultiplexProgramRequest::UpdateMultiplexProgramRequest()
    : MediaLiveRequest(new UpdateMultiplexProgramRequestPrivate(MediaLiveRequest::UpdateMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateMultiplexProgramRequestPrivate
 * \brief The UpdateMultiplexProgramRequestPrivate class provides private implementation for UpdateMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateMultiplexProgramRequestPrivate::UpdateMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, UpdateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMultiplexProgramRequest
 * class' copy constructor.
 */
UpdateMultiplexProgramRequestPrivate::UpdateMultiplexProgramRequestPrivate(
    const UpdateMultiplexProgramRequestPrivate &other, UpdateMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
