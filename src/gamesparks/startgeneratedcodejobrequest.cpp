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

#include "startgeneratedcodejobrequest.h"
#include "startgeneratedcodejobrequest_p.h"
#include "startgeneratedcodejobresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobRequest
 * \brief The StartGeneratedCodeJobRequest class provides an interface for GameSparks StartGeneratedCodeJob requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startGeneratedCodeJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartGeneratedCodeJobRequest::StartGeneratedCodeJobRequest(const StartGeneratedCodeJobRequest &other)
    : GameSparksRequest(new StartGeneratedCodeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartGeneratedCodeJobRequest object.
 */
StartGeneratedCodeJobRequest::StartGeneratedCodeJobRequest()
    : GameSparksRequest(new StartGeneratedCodeJobRequestPrivate(GameSparksRequest::StartGeneratedCodeJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartGeneratedCodeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartGeneratedCodeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartGeneratedCodeJobRequest::response(QNetworkReply * const reply) const
{
    return new StartGeneratedCodeJobResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::StartGeneratedCodeJobRequestPrivate
 * \brief The StartGeneratedCodeJobRequestPrivate class provides private implementation for StartGeneratedCodeJobRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartGeneratedCodeJobRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
StartGeneratedCodeJobRequestPrivate::StartGeneratedCodeJobRequestPrivate(
    const GameSparksRequest::Action action, StartGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartGeneratedCodeJobRequest
 * class' copy constructor.
 */
StartGeneratedCodeJobRequestPrivate::StartGeneratedCodeJobRequestPrivate(
    const StartGeneratedCodeJobRequestPrivate &other, StartGeneratedCodeJobRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
