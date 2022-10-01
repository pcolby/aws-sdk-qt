// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelsimulationjobrequest.h"
#include "cancelsimulationjobrequest_p.h"
#include "cancelsimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobRequest
 * \brief The CancelSimulationJobRequest class provides an interface for RoboMaker CancelSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSimulationJobRequest::CancelSimulationJobRequest(const CancelSimulationJobRequest &other)
    : RoboMakerRequest(new CancelSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSimulationJobRequest object.
 */
CancelSimulationJobRequest::CancelSimulationJobRequest()
    : RoboMakerRequest(new CancelSimulationJobRequestPrivate(RoboMakerRequest::CancelSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobRequestPrivate
 * \brief The CancelSimulationJobRequestPrivate class provides private implementation for CancelSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelSimulationJobRequestPrivate::CancelSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, CancelSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSimulationJobRequest
 * class' copy constructor.
 */
CancelSimulationJobRequestPrivate::CancelSimulationJobRequestPrivate(
    const CancelSimulationJobRequestPrivate &other, CancelSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
