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

#include "updatesnapshotrequest.h"
#include "updatesnapshotrequest_p.h"
#include "updatesnapshotresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateSnapshotRequest
 * \brief The UpdateSnapshotRequest class provides an interface for GameSparks UpdateSnapshot requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest(const UpdateSnapshotRequest &other)
    : GameSparksRequest(new UpdateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSnapshotRequest object.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest()
    : GameSparksRequest(new UpdateSnapshotRequestPrivate(GameSparksRequest::UpdateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::UpdateSnapshotRequestPrivate
 * \brief The UpdateSnapshotRequestPrivate class provides private implementation for UpdateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateSnapshotRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const GameSparksRequest::Action action, UpdateSnapshotRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSnapshotRequest
 * class' copy constructor.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const UpdateSnapshotRequestPrivate &other, UpdateSnapshotRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
