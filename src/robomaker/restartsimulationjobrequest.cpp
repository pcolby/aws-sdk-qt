/*
    Copyright 2013-2018 Paul Colby

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

#include "restartsimulationjobrequest.h"
#include "restartsimulationjobrequest_p.h"
#include "restartsimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobRequest
 * \brief The RestartSimulationJobRequest class provides an interface for RoboMaker RestartSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::restartSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
RestartSimulationJobRequest::RestartSimulationJobRequest(const RestartSimulationJobRequest &other)
    : RoboMakerRequest(new RestartSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestartSimulationJobRequest object.
 */
RestartSimulationJobRequest::RestartSimulationJobRequest()
    : RoboMakerRequest(new RestartSimulationJobRequestPrivate(RoboMakerRequest::RestartSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool RestartSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestartSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestartSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new RestartSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobRequestPrivate
 * \brief The RestartSimulationJobRequestPrivate class provides private implementation for RestartSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RestartSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
RestartSimulationJobRequestPrivate::RestartSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, RestartSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestartSimulationJobRequest
 * class' copy constructor.
 */
RestartSimulationJobRequestPrivate::RestartSimulationJobRequestPrivate(
    const RestartSimulationJobRequestPrivate &other, RestartSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
