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

#include "getstreamingsessionrequest.h"
#include "getstreamingsessionrequest_p.h"
#include "getstreamingsessionresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionRequest
 * \brief The GetStreamingSessionRequest class provides an interface for NimbleStudio GetStreamingSession requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingSessionRequest::GetStreamingSessionRequest(const GetStreamingSessionRequest &other)
    : NimbleStudioRequest(new GetStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingSessionRequest object.
 */
GetStreamingSessionRequest::GetStreamingSessionRequest()
    : NimbleStudioRequest(new GetStreamingSessionRequestPrivate(NimbleStudioRequest::GetStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingSessionRequestPrivate
 * \brief The GetStreamingSessionRequestPrivate class provides private implementation for GetStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingSessionRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetStreamingSessionRequestPrivate::GetStreamingSessionRequestPrivate(
    const NimbleStudioRequest::Action action, GetStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingSessionRequest
 * class' copy constructor.
 */
GetStreamingSessionRequestPrivate::GetStreamingSessionRequestPrivate(
    const GetStreamingSessionRequestPrivate &other, GetStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
