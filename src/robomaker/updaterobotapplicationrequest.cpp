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

#include "updaterobotapplicationrequest.h"
#include "updaterobotapplicationrequest_p.h"
#include "updaterobotapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateRobotApplicationRequest
 * \brief The UpdateRobotApplicationRequest class provides an interface for RoboMaker UpdateRobotApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateRobotApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRobotApplicationRequest::UpdateRobotApplicationRequest(const UpdateRobotApplicationRequest &other)
    : RoboMakerRequest(new UpdateRobotApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRobotApplicationRequest object.
 */
UpdateRobotApplicationRequest::UpdateRobotApplicationRequest()
    : RoboMakerRequest(new UpdateRobotApplicationRequestPrivate(RoboMakerRequest::UpdateRobotApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRobotApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRobotApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRobotApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRobotApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::UpdateRobotApplicationRequestPrivate
 * \brief The UpdateRobotApplicationRequestPrivate class provides private implementation for UpdateRobotApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateRobotApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
UpdateRobotApplicationRequestPrivate::UpdateRobotApplicationRequestPrivate(
    const RoboMakerRequest::Action action, UpdateRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRobotApplicationRequest
 * class' copy constructor.
 */
UpdateRobotApplicationRequestPrivate::UpdateRobotApplicationRequestPrivate(
    const UpdateRobotApplicationRequestPrivate &other, UpdateRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
