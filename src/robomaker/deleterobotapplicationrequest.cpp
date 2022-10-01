// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterobotapplicationrequest.h"
#include "deleterobotapplicationrequest_p.h"
#include "deleterobotapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationRequest
 * \brief The DeleteRobotApplicationRequest class provides an interface for RoboMaker DeleteRobotApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobotApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRobotApplicationRequest::DeleteRobotApplicationRequest(const DeleteRobotApplicationRequest &other)
    : RoboMakerRequest(new DeleteRobotApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRobotApplicationRequest object.
 */
DeleteRobotApplicationRequest::DeleteRobotApplicationRequest()
    : RoboMakerRequest(new DeleteRobotApplicationRequestPrivate(RoboMakerRequest::DeleteRobotApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRobotApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRobotApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRobotApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRobotApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationRequestPrivate
 * \brief The DeleteRobotApplicationRequestPrivate class provides private implementation for DeleteRobotApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteRobotApplicationRequestPrivate::DeleteRobotApplicationRequestPrivate(
    const RoboMakerRequest::Action action, DeleteRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRobotApplicationRequest
 * class' copy constructor.
 */
DeleteRobotApplicationRequestPrivate::DeleteRobotApplicationRequestPrivate(
    const DeleteRobotApplicationRequestPrivate &other, DeleteRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
