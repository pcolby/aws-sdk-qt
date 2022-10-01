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
