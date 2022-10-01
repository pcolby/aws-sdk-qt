// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
