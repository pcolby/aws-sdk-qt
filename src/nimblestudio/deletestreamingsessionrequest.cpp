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

#include "deletestreamingsessionrequest.h"
#include "deletestreamingsessionrequest_p.h"
#include "deletestreamingsessionresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingSessionRequest
 * \brief The DeleteStreamingSessionRequest class provides an interface for NimbleStudio DeleteStreamingSession requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStreamingSessionRequest::DeleteStreamingSessionRequest(const DeleteStreamingSessionRequest &other)
    : NimbleStudioRequest(new DeleteStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStreamingSessionRequest object.
 */
DeleteStreamingSessionRequest::DeleteStreamingSessionRequest()
    : NimbleStudioRequest(new DeleteStreamingSessionRequestPrivate(NimbleStudioRequest::DeleteStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingSessionRequestPrivate
 * \brief The DeleteStreamingSessionRequestPrivate class provides private implementation for DeleteStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStreamingSessionRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteStreamingSessionRequestPrivate::DeleteStreamingSessionRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStreamingSessionRequest
 * class' copy constructor.
 */
DeleteStreamingSessionRequestPrivate::DeleteStreamingSessionRequestPrivate(
    const DeleteStreamingSessionRequestPrivate &other, DeleteStreamingSessionRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
