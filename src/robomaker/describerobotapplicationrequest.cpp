// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
