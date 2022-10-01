// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
