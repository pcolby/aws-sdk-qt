// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  This section provides documentation for the AWS RoboMaker API
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
