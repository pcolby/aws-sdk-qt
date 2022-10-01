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

#include "startstagedeploymentrequest.h"
#include "startstagedeploymentrequest_p.h"
#include "startstagedeploymentresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::StartStageDeploymentRequest
 * \brief The StartStageDeploymentRequest class provides an interface for GameSparks StartStageDeployment requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::startStageDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
StartStageDeploymentRequest::StartStageDeploymentRequest(const StartStageDeploymentRequest &other)
    : GameSparksRequest(new StartStageDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStageDeploymentRequest object.
 */
StartStageDeploymentRequest::StartStageDeploymentRequest()
    : GameSparksRequest(new StartStageDeploymentRequestPrivate(GameSparksRequest::StartStageDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool StartStageDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStageDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStageDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new StartStageDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::StartStageDeploymentRequestPrivate
 * \brief The StartStageDeploymentRequestPrivate class provides private implementation for StartStageDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a StartStageDeploymentRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
StartStageDeploymentRequestPrivate::StartStageDeploymentRequestPrivate(
    const GameSparksRequest::Action action, StartStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStageDeploymentRequest
 * class' copy constructor.
 */
StartStageDeploymentRequestPrivate::StartStageDeploymentRequestPrivate(
    const StartStageDeploymentRequestPrivate &other, StartStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
