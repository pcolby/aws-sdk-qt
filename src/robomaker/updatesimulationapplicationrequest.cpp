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

#include "updatesimulationapplicationrequest.h"
#include "updatesimulationapplicationrequest_p.h"
#include "updatesimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationRequest
 * \brief The UpdateSimulationApplicationRequest class provides an interface for RoboMaker UpdateSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSimulationApplicationRequest::UpdateSimulationApplicationRequest(const UpdateSimulationApplicationRequest &other)
    : RoboMakerRequest(new UpdateSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSimulationApplicationRequest object.
 */
UpdateSimulationApplicationRequest::UpdateSimulationApplicationRequest()
    : RoboMakerRequest(new UpdateSimulationApplicationRequestPrivate(RoboMakerRequest::UpdateSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationRequestPrivate
 * \brief The UpdateSimulationApplicationRequestPrivate class provides private implementation for UpdateSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UpdateSimulationApplicationRequestPrivate::UpdateSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, UpdateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSimulationApplicationRequest
 * class' copy constructor.
 */
UpdateSimulationApplicationRequestPrivate::UpdateSimulationApplicationRequestPrivate(
    const UpdateSimulationApplicationRequestPrivate &other, UpdateSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
