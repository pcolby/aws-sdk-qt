/*
    Copyright 2013-2020 Paul Colby

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

#include "createsimulationapplicationrequest.h"
#include "createsimulationapplicationrequest_p.h"
#include "createsimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationRequest
 * \brief The CreateSimulationApplicationRequest class provides an interface for RoboMaker CreateSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationApplicationRequest::CreateSimulationApplicationRequest(const CreateSimulationApplicationRequest &other)
    : RoboMakerRequest(new CreateSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationApplicationRequest object.
 */
CreateSimulationApplicationRequest::CreateSimulationApplicationRequest()
    : RoboMakerRequest(new CreateSimulationApplicationRequestPrivate(RoboMakerRequest::CreateSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationRequestPrivate
 * \brief The CreateSimulationApplicationRequestPrivate class provides private implementation for CreateSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationApplicationRequestPrivate::CreateSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationApplicationRequest
 * class' copy constructor.
 */
CreateSimulationApplicationRequestPrivate::CreateSimulationApplicationRequestPrivate(
    const CreateSimulationApplicationRequestPrivate &other, CreateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
