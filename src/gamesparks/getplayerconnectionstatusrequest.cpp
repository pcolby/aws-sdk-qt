// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplayerconnectionstatusrequest.h"
#include "getplayerconnectionstatusrequest_p.h"
#include "getplayerconnectionstatusresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetPlayerConnectionStatusRequest
 * \brief The GetPlayerConnectionStatusRequest class provides an interface for GameSparks GetPlayerConnectionStatus requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getPlayerConnectionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetPlayerConnectionStatusRequest::GetPlayerConnectionStatusRequest(const GetPlayerConnectionStatusRequest &other)
    : GameSparksRequest(new GetPlayerConnectionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPlayerConnectionStatusRequest object.
 */
GetPlayerConnectionStatusRequest::GetPlayerConnectionStatusRequest()
    : GameSparksRequest(new GetPlayerConnectionStatusRequestPrivate(GameSparksRequest::GetPlayerConnectionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetPlayerConnectionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPlayerConnectionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPlayerConnectionStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetPlayerConnectionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetPlayerConnectionStatusRequestPrivate
 * \brief The GetPlayerConnectionStatusRequestPrivate class provides private implementation for GetPlayerConnectionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetPlayerConnectionStatusRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetPlayerConnectionStatusRequestPrivate::GetPlayerConnectionStatusRequestPrivate(
    const GameSparksRequest::Action action, GetPlayerConnectionStatusRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPlayerConnectionStatusRequest
 * class' copy constructor.
 */
GetPlayerConnectionStatusRequestPrivate::GetPlayerConnectionStatusRequestPrivate(
    const GetPlayerConnectionStatusRequestPrivate &other, GetPlayerConnectionStatusRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
