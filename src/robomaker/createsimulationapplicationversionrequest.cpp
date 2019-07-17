/*
    Copyright 2013-2019 Paul Colby

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

#include "createsimulationapplicationversionrequest.h"
#include "createsimulationapplicationversionrequest_p.h"
#include "createsimulationapplicationversionresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionRequest
 * \brief The CreateSimulationApplicationVersionRequest class provides an interface for RoboMaker CreateSimulationApplicationVersion requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationApplicationVersionRequest::CreateSimulationApplicationVersionRequest(const CreateSimulationApplicationVersionRequest &other)
    : RoboMakerRequest(new CreateSimulationApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationApplicationVersionRequest object.
 */
CreateSimulationApplicationVersionRequest::CreateSimulationApplicationVersionRequest()
    : RoboMakerRequest(new CreateSimulationApplicationVersionRequestPrivate(RoboMakerRequest::CreateSimulationApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionRequestPrivate
 * \brief The CreateSimulationApplicationVersionRequestPrivate class provides private implementation for CreateSimulationApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationVersionRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationApplicationVersionRequestPrivate::CreateSimulationApplicationVersionRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationApplicationVersionRequest
 * class' copy constructor.
 */
CreateSimulationApplicationVersionRequestPrivate::CreateSimulationApplicationVersionRequestPrivate(
    const CreateSimulationApplicationVersionRequestPrivate &other, CreateSimulationApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
