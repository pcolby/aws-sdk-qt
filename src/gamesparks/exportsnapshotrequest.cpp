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

#include "exportsnapshotrequest.h"
#include "exportsnapshotrequest_p.h"
#include "exportsnapshotresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ExportSnapshotRequest
 * \brief The ExportSnapshotRequest class provides an interface for GameSparks ExportSnapshot requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::exportSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
ExportSnapshotRequest::ExportSnapshotRequest(const ExportSnapshotRequest &other)
    : GameSparksRequest(new ExportSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportSnapshotRequest object.
 */
ExportSnapshotRequest::ExportSnapshotRequest()
    : GameSparksRequest(new ExportSnapshotRequestPrivate(GameSparksRequest::ExportSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool ExportSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new ExportSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ExportSnapshotRequestPrivate
 * \brief The ExportSnapshotRequestPrivate class provides private implementation for ExportSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ExportSnapshotRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ExportSnapshotRequestPrivate::ExportSnapshotRequestPrivate(
    const GameSparksRequest::Action action, ExportSnapshotRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportSnapshotRequest
 * class' copy constructor.
 */
ExportSnapshotRequestPrivate::ExportSnapshotRequestPrivate(
    const ExportSnapshotRequestPrivate &other, ExportSnapshotRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
