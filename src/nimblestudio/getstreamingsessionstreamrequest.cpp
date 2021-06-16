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

#include "getstreamingsessionstreamrequest.h"
#include "getstreamingsessionstreamrequest_p.h"
#include "getstreamingsessionstreamresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionStreamRequest
 * \brief The GetStreamingSessionStreamRequest class provides an interface for NimbleStudio GetStreamingSessionStream requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingSessionStream
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingSessionStreamRequest::GetStreamingSessionStreamRequest(const GetStreamingSessionStreamRequest &other)
    : NimbleStudioRequest(new GetStreamingSessionStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingSessionStreamRequest object.
 */
GetStreamingSessionStreamRequest::GetStreamingSessionStreamRequest()
    : NimbleStudioRequest(new GetStreamingSessionStreamRequestPrivate(NimbleStudioRequest::GetStreamingSessionStreamAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingSessionStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingSessionStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingSessionStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingSessionStreamResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionStreamRequestPrivate
 * \brief The GetStreamingSessionStreamRequestPrivate class provides private implementation for GetStreamingSessionStreamRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingSessionStreamRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStreamingSessionStreamRequestPrivate::GetStreamingSessionStreamRequestPrivate(
    const NimbleStudioRequest::Action action, GetStreamingSessionStreamRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingSessionStreamRequest
 * class' copy constructor.
 */
GetStreamingSessionStreamRequestPrivate::GetStreamingSessionStreamRequestPrivate(
    const GetStreamingSessionStreamRequestPrivate &other, GetStreamingSessionStreamRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
