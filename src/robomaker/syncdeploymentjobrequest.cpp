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

#include "syncdeploymentjobrequest.h"
#include "syncdeploymentjobrequest_p.h"
#include "syncdeploymentjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobRequest
 * \brief The SyncDeploymentJobRequest class provides an interface for RoboMaker SyncDeploymentJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::syncDeploymentJob
 */

/*!
 * Constructs a copy of \a other.
 */
SyncDeploymentJobRequest::SyncDeploymentJobRequest(const SyncDeploymentJobRequest &other)
    : RoboMakerRequest(new SyncDeploymentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SyncDeploymentJobRequest object.
 */
SyncDeploymentJobRequest::SyncDeploymentJobRequest()
    : RoboMakerRequest(new SyncDeploymentJobRequestPrivate(RoboMakerRequest::SyncDeploymentJobAction, this))
{

}

/*!
 * \reimp
 */
bool SyncDeploymentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SyncDeploymentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SyncDeploymentJobRequest::response(QNetworkReply * const reply) const
{
    return new SyncDeploymentJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobRequestPrivate
 * \brief The SyncDeploymentJobRequestPrivate class provides private implementation for SyncDeploymentJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a SyncDeploymentJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
SyncDeploymentJobRequestPrivate::SyncDeploymentJobRequestPrivate(
    const RoboMakerRequest::Action action, SyncDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SyncDeploymentJobRequest
 * class' copy constructor.
 */
SyncDeploymentJobRequestPrivate::SyncDeploymentJobRequestPrivate(
    const SyncDeploymentJobRequestPrivate &other, SyncDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
