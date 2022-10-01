// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegamerequest.h"
#include "deletegamerequest_p.h"
#include "deletegameresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DeleteGameRequest
 * \brief The DeleteGameRequest class provides an interface for GameSparks DeleteGame requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::deleteGame
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGameRequest::DeleteGameRequest(const DeleteGameRequest &other)
    : GameSparksRequest(new DeleteGameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGameRequest object.
 */
DeleteGameRequest::DeleteGameRequest()
    : GameSparksRequest(new DeleteGameRequestPrivate(GameSparksRequest::DeleteGameAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGameResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::DeleteGameRequestPrivate
 * \brief The DeleteGameRequestPrivate class provides private implementation for DeleteGameRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DeleteGameRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
DeleteGameRequestPrivate::DeleteGameRequestPrivate(
    const GameSparksRequest::Action action, DeleteGameRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGameRequest
 * class' copy constructor.
 */
DeleteGameRequestPrivate::DeleteGameRequestPrivate(
    const DeleteGameRequestPrivate &other, DeleteGameRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
