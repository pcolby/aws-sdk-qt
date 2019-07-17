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

#include "describerobotrequest.h"
#include "describerobotrequest_p.h"
#include "describerobotresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotRequest
 * \brief The DescribeRobotRequest class provides an interface for RoboMaker DescribeRobot requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobot
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRobotRequest::DescribeRobotRequest(const DescribeRobotRequest &other)
    : RoboMakerRequest(new DescribeRobotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRobotRequest object.
 */
DescribeRobotRequest::DescribeRobotRequest()
    : RoboMakerRequest(new DescribeRobotRequestPrivate(RoboMakerRequest::DescribeRobotAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRobotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRobotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRobotRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRobotResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotRequestPrivate
 * \brief The DescribeRobotRequestPrivate class provides private implementation for DescribeRobotRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeRobotRequestPrivate::DescribeRobotRequestPrivate(
    const RoboMakerRequest::Action action, DescribeRobotRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRobotRequest
 * class' copy constructor.
 */
DescribeRobotRequestPrivate::DescribeRobotRequestPrivate(
    const DescribeRobotRequestPrivate &other, DescribeRobotRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
