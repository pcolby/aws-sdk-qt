// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
