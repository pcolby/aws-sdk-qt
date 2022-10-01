// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
