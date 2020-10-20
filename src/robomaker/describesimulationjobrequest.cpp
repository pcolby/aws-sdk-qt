/*
    Copyright 2013-2020 Paul Colby

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

#include "describesimulationjobrequest.h"
#include "describesimulationjobrequest_p.h"
#include "describesimulationjobresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobRequest
 * \brief The DescribeSimulationJobRequest class provides an interface for RoboMaker DescribeSimulationJob requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSimulationJobRequest::DescribeSimulationJobRequest(const DescribeSimulationJobRequest &other)
    : RoboMakerRequest(new DescribeSimulationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSimulationJobRequest object.
 */
DescribeSimulationJobRequest::DescribeSimulationJobRequest()
    : RoboMakerRequest(new DescribeSimulationJobRequestPrivate(RoboMakerRequest::DescribeSimulationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSimulationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSimulationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSimulationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSimulationJobResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobRequestPrivate
 * \brief The DescribeSimulationJobRequestPrivate class provides private implementation for DescribeSimulationJobRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeSimulationJobRequestPrivate::DescribeSimulationJobRequestPrivate(
    const RoboMakerRequest::Action action, DescribeSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSimulationJobRequest
 * class' copy constructor.
 */
DescribeSimulationJobRequestPrivate::DescribeSimulationJobRequestPrivate(
    const DescribeSimulationJobRequestPrivate &other, DescribeSimulationJobRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
