// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
