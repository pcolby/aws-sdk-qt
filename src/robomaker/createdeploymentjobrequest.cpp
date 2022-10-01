// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
