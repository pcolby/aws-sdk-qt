/*
    Copyright 2013-2021 Paul Colby

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

#include "describesimulationjobbatchrequest.h"
#include "describesimulationjobbatchrequest_p.h"
#include "describesimulationjobbatchresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchRequest
 * \brief The DescribeSimulationJobBatchRequest class provides an interface for RoboMaker DescribeSimulationJobBatch requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJobBatch
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSimulationJobBatchRequest::DescribeSimulationJobBatchRequest(const DescribeSimulationJobBatchRequest &other)
    : RoboMakerRequest(new DescribeSimulationJobBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSimulationJobBatchRequest object.
 */
DescribeSimulationJobBatchRequest::DescribeSimulationJobBatchRequest()
    : RoboMakerRequest(new DescribeSimulationJobBatchRequestPrivate(RoboMakerRequest::DescribeSimulationJobBatchAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSimulationJobBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSimulationJobBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSimulationJobBatchRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSimulationJobBatchResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchRequestPrivate
 * \brief The DescribeSimulationJobBatchRequestPrivate class provides private implementation for DescribeSimulationJobBatchRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobBatchRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeSimulationJobBatchRequestPrivate::DescribeSimulationJobBatchRequestPrivate(
    const RoboMakerRequest::Action action, DescribeSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSimulationJobBatchRequest
 * class' copy constructor.
 */
DescribeSimulationJobBatchRequestPrivate::DescribeSimulationJobBatchRequestPrivate(
    const DescribeSimulationJobBatchRequestPrivate &other, DescribeSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
