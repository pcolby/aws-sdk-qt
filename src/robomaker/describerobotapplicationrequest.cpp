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

#include "describerobotapplicationrequest.h"
#include "describerobotapplicationrequest_p.h"
#include "describerobotapplicationresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationRequest
 * \brief The DescribeRobotApplicationRequest class provides an interface for RoboMaker DescribeRobotApplication requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobotApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRobotApplicationRequest::DescribeRobotApplicationRequest(const DescribeRobotApplicationRequest &other)
    : RoboMakerRequest(new DescribeRobotApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRobotApplicationRequest object.
 */
DescribeRobotApplicationRequest::DescribeRobotApplicationRequest()
    : RoboMakerRequest(new DescribeRobotApplicationRequestPrivate(RoboMakerRequest::DescribeRobotApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRobotApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRobotApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRobotApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRobotApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationRequestPrivate
 * \brief The DescribeRobotApplicationRequestPrivate class provides private implementation for DescribeRobotApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotApplicationRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeRobotApplicationRequestPrivate::DescribeRobotApplicationRequestPrivate(
    const RoboMakerRequest::Action action, DescribeRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRobotApplicationRequest
 * class' copy constructor.
 */
DescribeRobotApplicationRequestPrivate::DescribeRobotApplicationRequestPrivate(
    const DescribeRobotApplicationRequestPrivate &other, DescribeRobotApplicationRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
