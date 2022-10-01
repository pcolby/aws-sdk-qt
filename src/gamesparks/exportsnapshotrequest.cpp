// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
