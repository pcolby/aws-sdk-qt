// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
