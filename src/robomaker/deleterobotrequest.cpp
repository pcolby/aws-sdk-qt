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

#include "deleterobotrequest.h"
#include "deleterobotrequest_p.h"
#include "deleterobotresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotRequest
 * \brief The DeleteRobotRequest class provides an interface for RoboMaker DeleteRobot requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRobotRequest::DeleteRobotRequest(const DeleteRobotRequest &other)
    : RoboMakerRequest(new DeleteRobotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRobotRequest object.
 */
DeleteRobotRequest::DeleteRobotRequest()
    : RoboMakerRequest(new DeleteRobotRequestPrivate(RoboMakerRequest::DeleteRobotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRobotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRobotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRobotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRobotResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotRequestPrivate
 * \brief The DeleteRobotRequestPrivate class provides private implementation for DeleteRobotRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteRobotRequestPrivate::DeleteRobotRequestPrivate(
    const RoboMakerRequest::Action action, DeleteRobotRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRobotRequest
 * class' copy constructor.
 */
DeleteRobotRequestPrivate::DeleteRobotRequestPrivate(
    const DeleteRobotRequestPrivate &other, DeleteRobotRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
