/*
    Copyright 2013-2020 Paul Colby

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

#include "createdeploymentjobrequest.h"
#include "createdeploymentjobrequest_p.h"
#include "createdeploymentjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobRequest
 * \brief The CreateDeploymentJobRequest class provides an interface for RoboMaker CreateDeploymentJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createDeploymentJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeploymentJobRequest::CreateDeploymentJobRequest(const CreateDeploymentJobRequest &other)
    : RoboMakerRequest(new CreateDeploymentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeploymentJobRequest object.
 */
CreateDeploymentJobRequest::CreateDeploymentJobRequest()
    : RoboMakerRequest(new CreateDeploymentJobRequestPrivate(RoboMakerRequest::CreateDeploymentJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeploymentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeploymentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeploymentJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobRequestPrivate
 * \brief The CreateDeploymentJobRequestPrivate class provides private implementation for CreateDeploymentJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateDeploymentJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateDeploymentJobRequestPrivate::CreateDeploymentJobRequestPrivate(
    const RoboMakerRequest::Action action, CreateDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentJobRequest
 * class' copy constructor.
 */
CreateDeploymentJobRequestPrivate::CreateDeploymentJobRequestPrivate(
    const CreateDeploymentJobRequestPrivate &other, CreateDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
