// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsimulationjobrequest.h"
#include "createsimulationjobrequest_p.h"
#include "createsimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobRequest
 * \brief The CreateSimulationJobRequest class provides an interface for RoboMaker CreateSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSimulationJobRequest::CreateSimulationJobRequest(const CreateSimulationJobRequest &other)
    : RoboMakerRequest(new CreateSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSimulationJobRequest object.
 */
CreateSimulationJobRequest::CreateSimulationJobRequest()
    : RoboMakerRequest(new CreateSimulationJobRequestPrivate(RoboMakerRequest::CreateSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobRequestPrivate
 * \brief The CreateSimulationJobRequestPrivate class provides private implementation for CreateSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CreateSimulationJobRequestPrivate::CreateSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, CreateSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSimulationJobRequest
 * class' copy constructor.
 */
CreateSimulationJobRequestPrivate::CreateSimulationJobRequestPrivate(
    const CreateSimulationJobRequestPrivate &other, CreateSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
