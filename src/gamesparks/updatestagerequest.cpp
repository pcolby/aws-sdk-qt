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
