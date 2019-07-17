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

#include "canceldeploymentjobrequest.h"
#include "canceldeploymentjobrequest_p.h"
#include "canceldeploymentjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelDeploymentJobRequest
 * \brief The CancelDeploymentJobRequest class provides an interface for RoboMaker CancelDeploymentJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelDeploymentJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelDeploymentJobRequest::CancelDeploymentJobRequest(const CancelDeploymentJobRequest &other)
    : RoboMakerRequest(new CancelDeploymentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelDeploymentJobRequest object.
 */
CancelDeploymentJobRequest::CancelDeploymentJobRequest()
    : RoboMakerRequest(new CancelDeploymentJobRequestPrivate(RoboMakerRequest::CancelDeploymentJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelDeploymentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelDeploymentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelDeploymentJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelDeploymentJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelDeploymentJobRequestPrivate
 * \brief The CancelDeploymentJobRequestPrivate class provides private implementation for CancelDeploymentJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelDeploymentJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelDeploymentJobRequestPrivate::CancelDeploymentJobRequestPrivate(
    const RoboMakerRequest::Action action, CancelDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelDeploymentJobRequest
 * class' copy constructor.
 */
CancelDeploymentJobRequestPrivate::CancelDeploymentJobRequestPrivate(
    const CancelDeploymentJobRequestPrivate &other, CancelDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
