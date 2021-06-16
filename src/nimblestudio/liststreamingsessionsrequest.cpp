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

#include "liststreamingsessionsrequest.h"
#include "liststreamingsessionsrequest_p.h"
#include "liststreamingsessionsresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStreamingSessionsRequest
 * \brief The ListStreamingSessionsRequest class provides an interface for NimbleStudio ListStreamingSessions requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStreamingSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamingSessionsRequest::ListStreamingSessionsRequest(const ListStreamingSessionsRequest &other)
    : NimbleStudioRequest(new ListStreamingSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamingSessionsRequest object.
 */
ListStreamingSessionsRequest::ListStreamingSessionsRequest()
    : NimbleStudioRequest(new ListStreamingSessionsRequestPrivate(NimbleStudioRequest::ListStreamingSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamingSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::ListStreamingSessionsRequestPrivate
 * \brief The ListStreamingSessionsRequestPrivate class provides private implementation for ListStreamingSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStreamingSessionsRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
ListStreamingSessionsRequestPrivate::ListStreamingSessionsRequestPrivate(
    const NimbleStudioRequest::Action action, ListStreamingSessionsRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingSessionsRequest
 * class' copy constructor.
 */
ListStreamingSessionsRequestPrivate::ListStreamingSessionsRequestPrivate(
    const ListStreamingSessionsRequestPrivate &other, ListStreamingSessionsRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws
