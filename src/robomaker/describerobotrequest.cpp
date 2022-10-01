// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
