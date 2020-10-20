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

#include "runscheduledinstancesrequest.h"
#include "runscheduledinstancesrequest_p.h"
#include "runscheduledinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RunScheduledInstancesRequest
 * \brief The RunScheduledInstancesRequest class provides an interface for EC2 RunScheduledInstances requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::runScheduledInstances
 */

/*!
 * Constructs a copy of \a other.
 */
RunScheduledInstancesRequest::RunScheduledInstancesRequest(const RunScheduledInstancesRequest &other)
    : Ec2Request(new RunScheduledInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RunScheduledInstancesRequest object.
 */
RunScheduledInstancesRequest::RunScheduledInstancesRequest()
    : Ec2Request(new RunScheduledInstancesRequestPrivate(Ec2Request::RunScheduledInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool RunScheduledInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RunScheduledInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RunScheduledInstancesRequest::response(QNetworkReply * const reply) const
{
    return new RunScheduledInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::RunScheduledInstancesRequestPrivate
 * \brief The RunScheduledInstancesRequestPrivate class provides private implementation for RunScheduledInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RunScheduledInstancesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
RunScheduledInstancesRequestPrivate::RunScheduledInstancesRequestPrivate(
    const Ec2Request::Action action, RunScheduledInstancesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RunScheduledInstancesRequest
 * class' copy constructor.
 */
RunScheduledInstancesRequestPrivate::RunScheduledInstancesRequestPrivate(
    const RunScheduledInstancesRequestPrivate &other, RunScheduledInstancesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
