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

#include "creategamerequest.h"
#include "creategamerequest_p.h"
#include "creategameresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateGameRequest
 * \brief The CreateGameRequest class provides an interface for GameSparks CreateGame requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createGame
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGameRequest::CreateGameRequest(const CreateGameRequest &other)
    : GameSparksRequest(new CreateGameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGameRequest object.
 */
CreateGameRequest::CreateGameRequest()
    : GameSparksRequest(new CreateGameRequestPrivate(GameSparksRequest::CreateGameAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGameRequest::response(QNetworkReply * const reply) const
{
    return new CreateGameResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::CreateGameRequestPrivate
 * \brief The CreateGameRequestPrivate class provides private implementation for CreateGameRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateGameRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
CreateGameRequestPrivate::CreateGameRequestPrivate(
    const GameSparksRequest::Action action, CreateGameRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGameRequest
 * class' copy constructor.
 */
CreateGameRequestPrivate::CreateGameRequestPrivate(
    const CreateGameRequestPrivate &other, CreateGameRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
