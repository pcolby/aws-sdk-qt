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

#include "createsimulationjobrequest.h"
#include "createsimulationjobrequest_p.h"
#include "createsimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobRequest
 * \brief The CreateSimulationJobRequest class provides an interface for RoboMaker CreateSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationJobRequest::CreateSimulationJobRequest(const CreateSimulationJobRequest &other)
    : RoboMakerRequest(new CreateSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationJobRequest object.
 */
CreateSimulationJobRequest::CreateSimulationJobRequest()
    : RoboMakerRequest(new CreateSimulationJobRequestPrivate(RoboMakerRequest::CreateSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobRequestPrivate
 * \brief The CreateSimulationJobRequestPrivate class provides private implementation for CreateSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationJobRequestPrivate::CreateSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationJobRequest
 * class' copy constructor.
 */
CreateSimulationJobRequestPrivate::CreateSimulationJobRequestPrivate(
    const CreateSimulationJobRequestPrivate &other, CreateSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
