// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
