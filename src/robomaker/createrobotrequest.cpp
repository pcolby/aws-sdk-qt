// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
