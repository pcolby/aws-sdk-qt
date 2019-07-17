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
