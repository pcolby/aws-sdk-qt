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

#include "listmultiplexprogramsrequest.h"
#include "listmultiplexprogramsrequest_p.h"
#include "listmultiplexprogramsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsRequest
 * \brief The ListMultiplexProgramsRequest class provides an interface for MediaLive ListMultiplexPrograms requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexPrograms
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultiplexProgramsRequest::ListMultiplexProgramsRequest(const ListMultiplexProgramsRequest &other)
    : MediaLiveRequest(new ListMultiplexProgramsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultiplexProgramsRequest object.
 */
ListMultiplexProgramsRequest::ListMultiplexProgramsRequest()
    : MediaLiveRequest(new ListMultiplexProgramsRequestPrivate(MediaLiveRequest::ListMultiplexProgramsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultiplexProgramsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultiplexProgramsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultiplexProgramsRequest::response(QNetworkReply * const reply) const
{
    return new ListMultiplexProgramsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsRequestPrivate
 * \brief The ListMultiplexProgramsRequestPrivate class provides private implementation for ListMultiplexProgramsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexProgramsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListMultiplexProgramsRequestPrivate::ListMultiplexProgramsRequestPrivate(
    const MediaLiveRequest::Action action, ListMultiplexProgramsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultiplexProgramsRequest
 * class' copy constructor.
 */
ListMultiplexProgramsRequestPrivate::ListMultiplexProgramsRequestPrivate(
    const ListMultiplexProgramsRequestPrivate &other, ListMultiplexProgramsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
