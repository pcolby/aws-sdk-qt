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

#include "createrobotapplicationversionrequest.h"
#include "createrobotapplicationversionrequest_p.h"
#include "createrobotapplicationversionresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationVersionRequest
 * \brief The CreateRobotApplicationVersionRequest class provides an interface for RoboMaker CreateRobotApplicationVersion requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobotApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRobotApplicationVersionRequest::CreateRobotApplicationVersionRequest(const CreateRobotApplicationVersionRequest &other)
    : RoboMakerRequest(new CreateRobotApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRobotApplicationVersionRequest object.
 */
CreateRobotApplicationVersionRequest::CreateRobotApplicationVersionRequest()
    : RoboMakerRequest(new CreateRobotApplicationVersionRequestPrivate(RoboMakerRequest::CreateRobotApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRobotApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRobotApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRobotApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateRobotApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationVersionRequestPrivate
 * \brief The CreateRobotApplicationVersionRequestPrivate class provides private implementation for CreateRobotApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotApplicationVersionRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateRobotApplicationVersionRequestPrivate::CreateRobotApplicationVersionRequestPrivate(
    const RoboMakerRequest::Action action, CreateRobotApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRobotApplicationVersionRequest
 * class' copy constructor.
 */
CreateRobotApplicationVersionRequestPrivate::CreateRobotApplicationVersionRequestPrivate(
    const CreateRobotApplicationVersionRequestPrivate &other, CreateRobotApplicationVersionRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
