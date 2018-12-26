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

#include "deletesimulationapplicationrequest.h"
#include "deletesimulationapplicationrequest_p.h"
#include "deletesimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationRequest
 * \brief The DeleteSimulationApplicationRequest class provides an interface for RoboMaker DeleteSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSimulationApplicationRequest::DeleteSimulationApplicationRequest(const DeleteSimulationApplicationRequest &other)
    : RoboMakerRequest(new DeleteSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSimulationApplicationRequest object.
 */
DeleteSimulationApplicationRequest::DeleteSimulationApplicationRequest()
    : RoboMakerRequest(new DeleteSimulationApplicationRequestPrivate(RoboMakerRequest::DeleteSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteSimulationApplicationRequestPrivate
 * \brief The DeleteSimulationApplicationRequestPrivate class provides private implementation for DeleteSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteSimulationApplicationRequestPrivate::DeleteSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, DeleteSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSimulationApplicationRequest
 * class' copy constructor.
 */
DeleteSimulationApplicationRequestPrivate::DeleteSimulationApplicationRequestPrivate(
    const DeleteSimulationApplicationRequestPrivate &other, DeleteSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
