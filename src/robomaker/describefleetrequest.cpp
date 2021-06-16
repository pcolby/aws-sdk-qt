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

#include "describefleetrequest.h"
#include "describefleetrequest_p.h"
#include "describefleetresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeFleetRequest
 * \brief The DescribeFleetRequest class provides an interface for RoboMaker DescribeFleet requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetRequest::DescribeFleetRequest(const DescribeFleetRequest &other)
    : RoboMakerRequest(new DescribeFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetRequest object.
 */
DescribeFleetRequest::DescribeFleetRequest()
    : RoboMakerRequest(new DescribeFleetRequestPrivate(RoboMakerRequest::DescribeFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeFleetRequestPrivate
 * \brief The DescribeFleetRequestPrivate class provides private implementation for DescribeFleetRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeFleetRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeFleetRequestPrivate::DescribeFleetRequestPrivate(
    const RoboMakerRequest::Action action, DescribeFleetRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetRequest
 * class' copy constructor.
 */
DescribeFleetRequestPrivate::DescribeFleetRequestPrivate(
    const DescribeFleetRequestPrivate &other, DescribeFleetRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
