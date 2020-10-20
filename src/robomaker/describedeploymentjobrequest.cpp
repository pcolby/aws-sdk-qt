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

#include "describedeploymentjobrequest.h"
#include "describedeploymentjobrequest_p.h"
#include "describedeploymentjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobRequest
 * \brief The DescribeDeploymentJobRequest class provides an interface for RoboMaker DescribeDeploymentJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeDeploymentJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDeploymentJobRequest::DescribeDeploymentJobRequest(const DescribeDeploymentJobRequest &other)
    : RoboMakerRequest(new DescribeDeploymentJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDeploymentJobRequest object.
 */
DescribeDeploymentJobRequest::DescribeDeploymentJobRequest()
    : RoboMakerRequest(new DescribeDeploymentJobRequestPrivate(RoboMakerRequest::DescribeDeploymentJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDeploymentJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDeploymentJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeploymentJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeploymentJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeDeploymentJobRequestPrivate
 * \brief The DescribeDeploymentJobRequestPrivate class provides private implementation for DescribeDeploymentJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeDeploymentJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeDeploymentJobRequestPrivate::DescribeDeploymentJobRequestPrivate(
    const RoboMakerRequest::Action action, DescribeDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeploymentJobRequest
 * class' copy constructor.
 */
DescribeDeploymentJobRequestPrivate::DescribeDeploymentJobRequestPrivate(
    const DescribeDeploymentJobRequestPrivate &other, DescribeDeploymentJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
