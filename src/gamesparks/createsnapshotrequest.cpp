// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsnapshotrequest.h"
#include "createsnapshotrequest_p.h"
#include "createsnapshotresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateSnapshotRequest
 * \brief The CreateSnapshotRequest class provides an interface for GameSparks CreateSnapshot requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSnapshotRequest::CreateSnapshotRequest(const CreateSnapshotRequest &other)
    : GameSparksRequest(new CreateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSnapshotRequest object.
 */
CreateSnapshotRequest::CreateSnapshotRequest()
    : GameSparksRequest(new CreateSnapshotRequestPrivate(GameSparksRequest::CreateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::CreateSnapshotRequestPrivate
 * \brief The CreateSnapshotRequestPrivate class provides private implementation for CreateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateSnapshotRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const GameSparksRequest::Action action, CreateSnapshotRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotRequest
 * class' copy constructor.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const CreateSnapshotRequestPrivate &other, CreateSnapshotRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
