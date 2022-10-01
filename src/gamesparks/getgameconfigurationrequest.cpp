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

#include "getgameconfigurationrequest.h"
#include "getgameconfigurationrequest_p.h"
#include "getgameconfigurationresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameConfigurationRequest
 * \brief The GetGameConfigurationRequest class provides an interface for GameSparks GetGameConfiguration requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGameConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetGameConfigurationRequest::GetGameConfigurationRequest(const GetGameConfigurationRequest &other)
    : GameSparksRequest(new GetGameConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGameConfigurationRequest object.
 */
GetGameConfigurationRequest::GetGameConfigurationRequest()
    : GameSparksRequest(new GetGameConfigurationRequestPrivate(GameSparksRequest::GetGameConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetGameConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGameConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGameConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetGameConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetGameConfigurationRequestPrivate
 * \brief The GetGameConfigurationRequestPrivate class provides private implementation for GetGameConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameConfigurationRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetGameConfigurationRequestPrivate::GetGameConfigurationRequestPrivate(
    const GameSparksRequest::Action action, GetGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGameConfigurationRequest
 * class' copy constructor.
 */
GetGameConfigurationRequestPrivate::GetGameConfigurationRequestPrivate(
    const GetGameConfigurationRequestPrivate &other, GetGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
