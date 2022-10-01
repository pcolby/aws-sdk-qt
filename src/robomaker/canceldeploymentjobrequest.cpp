// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
