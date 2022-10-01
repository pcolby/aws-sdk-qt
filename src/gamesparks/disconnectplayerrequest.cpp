// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disconnectplayerrequest.h"
#include "disconnectplayerrequest_p.h"
#include "disconnectplayerresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::DisconnectPlayerRequest
 * \brief The DisconnectPlayerRequest class provides an interface for GameSparks DisconnectPlayer requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::disconnectPlayer
 */

/*!
 * Constructs a copy of \a other.
 */
DisconnectPlayerRequest::DisconnectPlayerRequest(const DisconnectPlayerRequest &other)
    : GameSparksRequest(new DisconnectPlayerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisconnectPlayerRequest object.
 */
DisconnectPlayerRequest::DisconnectPlayerRequest()
    : GameSparksRequest(new DisconnectPlayerRequestPrivate(GameSparksRequest::DisconnectPlayerAction, this))
{

}

/*!
 * \reimp
 */
bool DisconnectPlayerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisconnectPlayerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisconnectPlayerRequest::response(QNetworkReply * const reply) const
{
    return new DisconnectPlayerResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::DisconnectPlayerRequestPrivate
 * \brief The DisconnectPlayerRequestPrivate class provides private implementation for DisconnectPlayerRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a DisconnectPlayerRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
DisconnectPlayerRequestPrivate::DisconnectPlayerRequestPrivate(
    const GameSparksRequest::Action action, DisconnectPlayerRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisconnectPlayerRequest
 * class' copy constructor.
 */
DisconnectPlayerRequestPrivate::DisconnectPlayerRequestPrivate(
    const DisconnectPlayerRequestPrivate &other, DisconnectPlayerRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
