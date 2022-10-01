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

#include "importgameconfigurationrequest.h"
#include "importgameconfigurationrequest_p.h"
#include "importgameconfigurationresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationRequest
 * \brief The ImportGameConfigurationRequest class provides an interface for GameSparks ImportGameConfiguration requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::importGameConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
ImportGameConfigurationRequest::ImportGameConfigurationRequest(const ImportGameConfigurationRequest &other)
    : GameSparksRequest(new ImportGameConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportGameConfigurationRequest object.
 */
ImportGameConfigurationRequest::ImportGameConfigurationRequest()
    : GameSparksRequest(new ImportGameConfigurationRequestPrivate(GameSparksRequest::ImportGameConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool ImportGameConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportGameConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportGameConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new ImportGameConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationRequestPrivate
 * \brief The ImportGameConfigurationRequestPrivate class provides private implementation for ImportGameConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ImportGameConfigurationRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
ImportGameConfigurationRequestPrivate::ImportGameConfigurationRequestPrivate(
    const GameSparksRequest::Action action, ImportGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportGameConfigurationRequest
 * class' copy constructor.
 */
ImportGameConfigurationRequestPrivate::ImportGameConfigurationRequestPrivate(
    const ImportGameConfigurationRequestPrivate &other, ImportGameConfigurationRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
