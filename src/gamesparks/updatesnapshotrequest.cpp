// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
