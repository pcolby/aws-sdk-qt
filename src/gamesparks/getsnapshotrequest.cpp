// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
