// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restartsimulationjobrequest.h"
#include "restartsimulationjobrequest_p.h"
#include "restartsimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobRequest
 * \brief The RestartSimulationJobRequest class provides an interface for RoboMaker RestartSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::restartSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
RestartSimulationJobRequest::RestartSimulationJobRequest(const RestartSimulationJobRequest &other)
    : RoboMakerRequest(new RestartSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestartSimulationJobRequest object.
 */
RestartSimulationJobRequest::RestartSimulationJobRequest()
    : RoboMakerRequest(new RestartSimulationJobRequestPrivate(RoboMakerRequest::RestartSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool RestartSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestartSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestartSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new RestartSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobRequestPrivate
 * \brief The RestartSimulationJobRequestPrivate class provides private implementation for RestartSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RestartSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
RestartSimulationJobRequestPrivate::RestartSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, RestartSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestartSimulationJobRequest
 * class' copy constructor.
 */
RestartSimulationJobRequestPrivate::RestartSimulationJobRequestPrivate(
    const RestartSimulationJobRequestPrivate &other, RestartSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
