// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdescribesimulationjobrequest.h"
#include "batchdescribesimulationjobrequest_p.h"
#include "batchdescribesimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobRequest
 * \brief The BatchDescribeSimulationJobRequest class provides an interface for RoboMaker BatchDescribeSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::batchDescribeSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDescribeSimulationJobRequest::BatchDescribeSimulationJobRequest(const BatchDescribeSimulationJobRequest &other)
    : RoboMakerRequest(new BatchDescribeSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDescribeSimulationJobRequest object.
 */
BatchDescribeSimulationJobRequest::BatchDescribeSimulationJobRequest()
    : RoboMakerRequest(new BatchDescribeSimulationJobRequestPrivate(RoboMakerRequest::BatchDescribeSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDescribeSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDescribeSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDescribeSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new BatchDescribeSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobRequestPrivate
 * \brief The BatchDescribeSimulationJobRequestPrivate class provides private implementation for BatchDescribeSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a BatchDescribeSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
BatchDescribeSimulationJobRequestPrivate::BatchDescribeSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, BatchDescribeSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDescribeSimulationJobRequest
 * class' copy constructor.
 */
BatchDescribeSimulationJobRequestPrivate::BatchDescribeSimulationJobRequestPrivate(
    const BatchDescribeSimulationJobRequestPrivate &other, BatchDescribeSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
