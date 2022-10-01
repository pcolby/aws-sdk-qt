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

#include "getsnapshotrequest.h"
#include "getsnapshotrequest_p.h"
#include "getsnapshotresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetSnapshotRequest
 * \brief The GetSnapshotRequest class provides an interface for GameSparks GetSnapshot requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
GetSnapshotRequest::GetSnapshotRequest(const GetSnapshotRequest &other)
    : GameSparksRequest(new GetSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSnapshotRequest object.
 */
GetSnapshotRequest::GetSnapshotRequest()
    : GameSparksRequest(new GetSnapshotRequestPrivate(GameSparksRequest::GetSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool GetSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new GetSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetSnapshotRequestPrivate
 * \brief The GetSnapshotRequestPrivate class provides private implementation for GetSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetSnapshotRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetSnapshotRequestPrivate::GetSnapshotRequestPrivate(
    const GameSparksRequest::Action action, GetSnapshotRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSnapshotRequest
 * class' copy constructor.
 */
GetSnapshotRequestPrivate::GetSnapshotRequestPrivate(
    const GetSnapshotRequestPrivate &other, GetSnapshotRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
