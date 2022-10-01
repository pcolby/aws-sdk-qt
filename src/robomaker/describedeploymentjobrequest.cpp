// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
