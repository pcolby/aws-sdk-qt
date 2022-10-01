// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
