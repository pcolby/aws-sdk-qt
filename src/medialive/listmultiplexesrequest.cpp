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

#include "listmultiplexesrequest.h"
#include "listmultiplexesrequest_p.h"
#include "listmultiplexesresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexesRequest
 * \brief The ListMultiplexesRequest class provides an interface for MediaLive ListMultiplexes requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexes
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultiplexesRequest::ListMultiplexesRequest(const ListMultiplexesRequest &other)
    : MediaLiveRequest(new ListMultiplexesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultiplexesRequest object.
 */
ListMultiplexesRequest::ListMultiplexesRequest()
    : MediaLiveRequest(new ListMultiplexesRequestPrivate(MediaLiveRequest::ListMultiplexesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultiplexesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultiplexesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultiplexesRequest::response(QNetworkReply * const reply) const
{
    return new ListMultiplexesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListMultiplexesRequestPrivate
 * \brief The ListMultiplexesRequestPrivate class provides private implementation for ListMultiplexesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexesRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListMultiplexesRequestPrivate::ListMultiplexesRequestPrivate(
    const MediaLiveRequest::Action action, ListMultiplexesRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultiplexesRequest
 * class' copy constructor.
 */
ListMultiplexesRequestPrivate::ListMultiplexesRequestPrivate(
    const ListMultiplexesRequestPrivate &other, ListMultiplexesRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
