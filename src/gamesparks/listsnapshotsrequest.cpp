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

#include "listsnapshotsrequest.h"
#include "listsnapshotsrequest_p.h"
#include "listsnapshotsresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListSnapshotsRequest
 * \brief The ListSnapshotsRequest class provides an interface for GameSparks ListSnapshots requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
ListSnapshotsRequest::ListSnapshotsRequest(const ListSnapshotsRequest &other)
    : GameSparksRequest(new ListSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSnapshotsRequest object.
 */
ListSnapshotsRequest::ListSnapshotsRequest()
    : GameSparksRequest(new ListSnapshotsRequestPrivate(GameSparksRequest::ListSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new ListSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListSnapshotsRequestPrivate
 * \brief The ListSnapshotsRequestPrivate class provides private implementation for ListSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListSnapshotsRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListSnapshotsRequestPrivate::ListSnapshotsRequestPrivate(
    const GameSparksRequest::Action action, ListSnapshotsRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSnapshotsRequest
 * class' copy constructor.
 */
ListSnapshotsRequestPrivate::ListSnapshotsRequestPrivate(
    const ListSnapshotsRequestPrivate &other, ListSnapshotsRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
