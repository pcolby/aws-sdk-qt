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

#include "getgamerequest.h"
#include "getgamerequest_p.h"
#include "getgameresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameRequest
 * \brief The GetGameRequest class provides an interface for GameSparks GetGame requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGame
 */

/*!
 * Constructs a copy of \a other.
 */
GetGameRequest::GetGameRequest(const GetGameRequest &other)
    : GameSparksRequest(new GetGameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGameRequest object.
 */
GetGameRequest::GetGameRequest()
    : GameSparksRequest(new GetGameRequestPrivate(GameSparksRequest::GetGameAction, this))
{

}

/*!
 * \reimp
 */
bool GetGameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGameRequest::response(QNetworkReply * const reply) const
{
    return new GetGameResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetGameRequestPrivate
 * \brief The GetGameRequestPrivate class provides private implementation for GetGameRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetGameRequestPrivate::GetGameRequestPrivate(
    const GameSparksRequest::Action action, GetGameRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGameRequest
 * class' copy constructor.
 */
GetGameRequestPrivate::GetGameRequestPrivate(
    const GetGameRequestPrivate &other, GetGameRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
