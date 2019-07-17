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

#include "stopinstancesrequest.h"
#include "stopinstancesrequest_p.h"
#include "stopinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::StopInstancesRequest
 * \brief The StopInstancesRequest class provides an interface for EC2 StopInstances requests.
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
 * \sa Ec2Client::stopInstances
 */

/*!
 * Constructs a copy of \a other.
 */
StopInstancesRequest::StopInstancesRequest(const StopInstancesRequest &other)
    : Ec2Request(new StopInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopInstancesRequest object.
 */
StopInstancesRequest::StopInstancesRequest()
    : Ec2Request(new StopInstancesRequestPrivate(Ec2Request::StopInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool StopInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopInstancesRequest::response(QNetworkReply * const reply) const
{
    return new StopInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::StopInstancesRequestPrivate
 * \brief The StopInstancesRequestPrivate class provides private implementation for StopInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a StopInstancesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
StopInstancesRequestPrivate::StopInstancesRequestPrivate(
    const Ec2Request::Action action, StopInstancesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopInstancesRequest
 * class' copy constructor.
 */
StopInstancesRequestPrivate::StopInstancesRequestPrivate(
    const StopInstancesRequestPrivate &other, StopInstancesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
