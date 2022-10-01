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

#include "updategamerequest.h"
#include "updategamerequest_p.h"
#include "updategameresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateGameRequest
 * \brief The UpdateGameRequest class provides an interface for GameSparks UpdateGame requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateGame
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGameRequest::UpdateGameRequest(const UpdateGameRequest &other)
    : GameSparksRequest(new UpdateGameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGameRequest object.
 */
UpdateGameRequest::UpdateGameRequest()
    : GameSparksRequest(new UpdateGameRequestPrivate(GameSparksRequest::UpdateGameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGameResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::UpdateGameRequestPrivate
 * \brief The UpdateGameRequestPrivate class provides private implementation for UpdateGameRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateGameRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
UpdateGameRequestPrivate::UpdateGameRequestPrivate(
    const GameSparksRequest::Action action, UpdateGameRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGameRequest
 * class' copy constructor.
 */
UpdateGameRequestPrivate::UpdateGameRequestPrivate(
    const UpdateGameRequestPrivate &other, UpdateGameRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
