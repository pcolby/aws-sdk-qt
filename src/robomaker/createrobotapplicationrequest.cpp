/*
    Copyright 2013-2021 Paul Colby

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

#include "createrobotapplicationrequest.h"
#include "createrobotapplicationrequest_p.h"
#include "createrobotapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationRequest
 * \brief The CreateRobotApplicationRequest class provides an interface for RoboMaker CreateRobotApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobotApplication
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRobotApplicationRequest::CreateRobotApplicationRequest(const CreateRobotApplicationRequest &other)
    : RoboMakerRequest(new CreateRobotApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRobotApplicationRequest object.
 */
CreateRobotApplicationRequest::CreateRobotApplicationRequest()
    : RoboMakerRequest(new CreateRobotApplicationRequestPrivate(RoboMakerRequest::CreateRobotApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRobotApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRobotApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRobotApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreateRobotApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationRequestPrivate
 * \brief The CreateRobotApplicationRequestPrivate class provides private implementation for CreateRobotApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateRobotApplicationRequestPrivate::CreateRobotApplicationRequestPrivate(
    const RoboMakerRequest::Action action, CreateRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRobotApplicationRequest
 * class' copy constructor.
 */
CreateRobotApplicationRequestPrivate::CreateRobotApplicationRequestPrivate(
    const CreateRobotApplicationRequestPrivate &other, CreateRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
