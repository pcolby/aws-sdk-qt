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

#include "createstagerequest.h"
#include "createstagerequest_p.h"
#include "createstageresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateStageRequest
 * \brief The CreateStageRequest class provides an interface for GameSparks CreateStage requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createStage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStageRequest::CreateStageRequest(const CreateStageRequest &other)
    : GameSparksRequest(new CreateStageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStageRequest object.
 */
CreateStageRequest::CreateStageRequest()
    : GameSparksRequest(new CreateStageRequestPrivate(GameSparksRequest::CreateStageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStageResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::CreateStageRequestPrivate
 * \brief The CreateStageRequestPrivate class provides private implementation for CreateStageRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateStageRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const GameSparksRequest::Action action, CreateStageRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStageRequest
 * class' copy constructor.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const CreateStageRequestPrivate &other, CreateStageRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
