// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
