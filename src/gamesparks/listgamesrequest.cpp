// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgamesrequest.h"
#include "listgamesrequest_p.h"
#include "listgamesresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListGamesRequest
 * \brief The ListGamesRequest class provides an interface for GameSparks ListGames requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listGames
 */

/*!
 * Constructs a copy of \a other.
 */
ListGamesRequest::ListGamesRequest(const ListGamesRequest &other)
    : GameSparksRequest(new ListGamesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGamesRequest object.
 */
ListGamesRequest::ListGamesRequest()
    : GameSparksRequest(new ListGamesRequestPrivate(GameSparksRequest::ListGamesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGamesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGamesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGamesRequest::response(QNetworkReply * const reply) const
{
    return new ListGamesResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ListGamesRequestPrivate
 * \brief The ListGamesRequestPrivate class provides private implementation for ListGamesRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListGamesRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ListGamesRequestPrivate::ListGamesRequestPrivate(
    const GameSparksRequest::Action action, ListGamesRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGamesRequest
 * class' copy constructor.
 */
ListGamesRequestPrivate::ListGamesRequestPrivate(
    const ListGamesRequestPrivate &other, ListGamesRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
