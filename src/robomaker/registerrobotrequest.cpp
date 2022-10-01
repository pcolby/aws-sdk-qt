// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
