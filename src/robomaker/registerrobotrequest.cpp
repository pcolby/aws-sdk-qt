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

#include "registerrobotrequest.h"
#include "registerrobotrequest_p.h"
#include "registerrobotresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RegisterRobotRequest
 * \brief The RegisterRobotRequest class provides an interface for RoboMaker RegisterRobot requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::registerRobot
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterRobotRequest::RegisterRobotRequest(const RegisterRobotRequest &other)
    : RoboMakerRequest(new RegisterRobotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterRobotRequest object.
 */
RegisterRobotRequest::RegisterRobotRequest()
    : RoboMakerRequest(new RegisterRobotRequestPrivate(RoboMakerRequest::RegisterRobotAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterRobotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterRobotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterRobotRequest::response(QNetworkReply * const reply) const
{
    return new RegisterRobotResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::RegisterRobotRequestPrivate
 * \brief The RegisterRobotRequestPrivate class provides private implementation for RegisterRobotRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RegisterRobotRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
RegisterRobotRequestPrivate::RegisterRobotRequestPrivate(
    const RoboMakerRequest::Action action, RegisterRobotRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterRobotRequest
 * class' copy constructor.
 */
RegisterRobotRequestPrivate::RegisterRobotRequestPrivate(
    const RegisterRobotRequestPrivate &other, RegisterRobotRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
