// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
