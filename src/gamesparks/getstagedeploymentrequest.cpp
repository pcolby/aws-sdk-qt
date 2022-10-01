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

#include "getstagedeploymentrequest.h"
#include "getstagedeploymentrequest_p.h"
#include "getstagedeploymentresponse.h"
#include "gamesparksrequest_p.h"

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetStageDeploymentRequest
 * \brief The GetStageDeploymentRequest class provides an interface for GameSparks GetStageDeployment requests.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getStageDeployment
 */

/*!
 * Constructs a copy of \a other.
 */
GetStageDeploymentRequest::GetStageDeploymentRequest(const GetStageDeploymentRequest &other)
    : GameSparksRequest(new GetStageDeploymentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStageDeploymentRequest object.
 */
GetStageDeploymentRequest::GetStageDeploymentRequest()
    : GameSparksRequest(new GetStageDeploymentRequestPrivate(GameSparksRequest::GetStageDeploymentAction, this))
{

}

/*!
 * \reimp
 */
bool GetStageDeploymentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStageDeploymentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStageDeploymentRequest::response(QNetworkReply * const reply) const
{
    return new GetStageDeploymentResponse(*this, reply);
}

/*!
 * \class QtAws::GameSparks::GetStageDeploymentRequestPrivate
 * \brief The GetStageDeploymentRequestPrivate class provides private implementation for GetStageDeploymentRequest.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetStageDeploymentRequestPrivate object for GameSparks \a action,
 * with public implementation \a q.
 */
GetStageDeploymentRequestPrivate::GetStageDeploymentRequestPrivate(
    const GameSparksRequest::Action action, GetStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStageDeploymentRequest
 * class' copy constructor.
 */
GetStageDeploymentRequestPrivate::GetStageDeploymentRequestPrivate(
    const GetStageDeploymentRequestPrivate &other, GetStageDeploymentRequest * const q)
    : GameSparksRequestPrivate(other, q)
{

}

} // namespace GameSparks
} // namespace QtAws
