// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestagerequest.h"
#include "updatestagerequest_p.h"
#include "updatestageresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateStageRequest
 * \brief The UpdateStageRequest class provides an interface for GameSparks UpdateStage requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateStage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStageRequest::UpdateStageRequest(const UpdateStageRequest &other)
    : GameSparksRequest(new UpdateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStageRequest object.
 */
UpdateStageRequest::UpdateStageRequest()
    : GameSparksRequest(new UpdateStageRequestPrivate(GameSparksRequest::UpdateStageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStageResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::UpdateStageRequestPrivate
 * \brief The UpdateStageRequestPrivate class provides private implementation for UpdateStageRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateStageRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const GameSparksRequest::Action action, UpdateStageRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStageRequest
 * class' copy constructor.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const UpdateStageRequestPrivate &other, UpdateStageRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
