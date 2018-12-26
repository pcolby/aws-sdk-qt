/*
    Copyright 2013-2018 Paul Colby

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

#include "describesimulationapplicationrequest.h"
#include "describesimulationapplicationrequest_p.h"
#include "describesimulationapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationApplicationRequest
 * \brief The DescribeSimulationApplicationRequest class provides an interface for RoboMaker DescribeSimulationApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSimulationApplicationRequest::DescribeSimulationApplicationRequest(const DescribeSimulationApplicationRequest &other)
    : RoboMakerRequest(new DescribeSimulationApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSimulationApplicationRequest object.
 */
DescribeSimulationApplicationRequest::DescribeSimulationApplicationRequest()
    : RoboMakerRequest(new DescribeSimulationApplicationRequestPrivate(RoboMakerRequest::DescribeSimulationApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSimulationApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSimulationApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSimulationApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSimulationApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationApplicationRequestPrivate
 * \brief The DescribeSimulationApplicationRequestPrivate class provides private implementation for DescribeSimulationApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeSimulationApplicationRequestPrivate::DescribeSimulationApplicationRequestPrivate(
    const RoboMakerRequest::Action action, DescribeSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSimulationApplicationRequest
 * class' copy constructor.
 */
DescribeSimulationApplicationRequestPrivate::DescribeSimulationApplicationRequestPrivate(
    const DescribeSimulationApplicationRequestPrivate &other, DescribeSimulationApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
