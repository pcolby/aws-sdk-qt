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

#include "createrobotrequest.h"
#include "createrobotrequest_p.h"
#include "createrobotresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotRequest
 * \brief The CreateRobotRequest class provides an interface for RoboMaker CreateRobot requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRobotRequest::CreateRobotRequest(const CreateRobotRequest &other)
    : RoboMakerRequest(new CreateRobotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRobotRequest object.
 */
CreateRobotRequest::CreateRobotRequest()
    : RoboMakerRequest(new CreateRobotRequestPrivate(RoboMakerRequest::CreateRobotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRobotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRobotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRobotRequest::response(QNetworkReply * const reply) const
{
    return new CreateRobotResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateRobotRequestPrivate
 * \brief The CreateRobotRequestPrivate class provides private implementation for CreateRobotRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateRobotRequestPrivate::CreateRobotRequestPrivate(
    const RoboMakerRequest::Action action, CreateRobotRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRobotRequest
 * class' copy constructor.
 */
CreateRobotRequestPrivate::CreateRobotRequestPrivate(
    const CreateRobotRequestPrivate &other, CreateRobotRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
