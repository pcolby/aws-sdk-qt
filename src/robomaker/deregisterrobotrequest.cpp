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

#include "deregisterrobotrequest.h"
#include "deregisterrobotrequest_p.h"
#include "deregisterrobotresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeregisterRobotRequest
 * \brief The DeregisterRobotRequest class provides an interface for RoboMaker DeregisterRobot requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deregisterRobot
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterRobotRequest::DeregisterRobotRequest(const DeregisterRobotRequest &other)
    : RoboMakerRequest(new DeregisterRobotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterRobotRequest object.
 */
DeregisterRobotRequest::DeregisterRobotRequest()
    : RoboMakerRequest(new DeregisterRobotRequestPrivate(RoboMakerRequest::DeregisterRobotAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterRobotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterRobotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterRobotRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterRobotResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeregisterRobotRequestPrivate
 * \brief The DeregisterRobotRequestPrivate class provides private implementation for DeregisterRobotRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeregisterRobotRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeregisterRobotRequestPrivate::DeregisterRobotRequestPrivate(
    const RoboMakerRequest::Action action, DeregisterRobotRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterRobotRequest
 * class' copy constructor.
 */
DeregisterRobotRequestPrivate::DeregisterRobotRequestPrivate(
    const DeregisterRobotRequestPrivate &other, DeregisterRobotRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
